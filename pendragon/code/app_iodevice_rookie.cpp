/**

  @file    app_iodevice_rookie.cpp
  @brief   Wrapper representing Rookie IO device interface.
  @author  Pekka Lehtikoski
  @version 1.0
  @date    30.4.2020

  Copyright 2020 Pekka Lehtikoski. This file is part of the eobjects project and shall only be used,
  modified, and distributed under the terms of the project licensing. By continuing to use, modify,
  or distribute this file you indicate that you have read the license and understand and accept
  it fully.

****************************************************************************************************
*/
#include "controller_main.h"


/**
****************************************************************************************************

  @brief Constructor.

  Set IO device name and mark this object uninitialized.

  @return  None.

****************************************************************************************************
*/
RookieIoDevice::RookieIoDevice() : AppIoDevice()
{
    os_strncpy(m_device_name, "rookie", IOC_NAME_SZ);
    m_initialized = OS_FALSE;
}


/**
****************************************************************************************************

  @brief Release any resources allocated for this object.

  X...

  @return  None.

****************************************************************************************************
*/
RookieIoDevice::~RookieIoDevice()
{
    release();
}


rookie_t *RookieIoDevice::inititalize(
    const os_char *network_name,
    os_uint device_nr)
{
    iocMemoryBlockParams blockprm;

    if (m_initialized) return &m_rookie_def;

    m_device_nr = device_nr;

    /* Setup initial Rookie IO board definition structure.
     */
    rookie_init_signal_struct(&m_rookie_def);

    /* Generate memory blocks.
     */
    os_memclear(&blockprm, sizeof(blockprm));
    blockprm.device_name = m_device_name;
    blockprm.device_nr = m_device_nr;
    blockprm.network_name = network_name;

    blockprm.mblk_name = m_rookie_def.exp.hdr.mblk_name;
    blockprm.nbytes = m_rookie_def.exp.hdr.mblk_sz;
    blockprm.flags = IOC_MBLK_UP /* |IOC_AUTO_SYNC|IOC_ALLOW_RESIZE */;
    ioc_initialize_memory_block(&m_rookie_export, OS_NULL, &iocom_root, &blockprm);

    blockprm.mblk_name = m_rookie_def.imp.hdr.mblk_name;
    blockprm.nbytes = m_rookie_def.imp.hdr.mblk_sz;
    blockprm.flags = IOC_MBLK_DOWN /* |IOC_AUTO_SYNC|IOC_ALLOW_RESIZE */;
    ioc_initialize_memory_block(&m_rookie_import, OS_NULL, &iocom_root, &blockprm);

    /* These do store memory block handle for signals. Without this signals will
       not work from this program.
     */
    ioc_set_handle_to_signals(&m_rookie_def.imp.hdr, &m_rookie_import);
    ioc_set_handle_to_signals(&m_rookie_def.exp.hdr, &m_rookie_export);

#if IOC_DYNAMIC_MBLK_CODE
    /* These will store signal header pointer in memory block. This is necessary
       to clear OSAL_STATE_CONNECTED status bit when upper level, like I spy disconnects.
       See ioc_tbuf_disconnect_signals() function.
     */
    mblk_set_signal_header(&m_rookie_import, &m_rookie_def.imp.hdr);
    mblk_set_signal_header(&m_rookie_export, &m_rookie_def.exp.hdr);
#endif


    /* Set callback to detect received data and connection status changes.
     */
    // ioc_add_callback(&ctx.inputs, iocontroller_callback, &ctx);

    m_initialized = OS_TRUE;

    return &m_rookie_def;
}


void RookieIoDevice::release()
{
    if (!m_initialized) return;
    ioc_release_memory_block(&m_rookie_export);
    ioc_release_memory_block(&m_rookie_import);

    m_initialized = OS_FALSE;
}
