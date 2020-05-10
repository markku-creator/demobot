/**

  @file    app_iodevice_rookie.g
  @brief   Wrapper representing Rookie IO device interface.
  @author  Pekka Lehtikoski, Markku Nissinen
  @version 1.0
  @date    30.4.2020

  Copyright 2020 Pekka Lehtikoski. This file is part of the eobjects project and shall only be used,
  modified, and distributed under the terms of the project licensing. By continuing to use, modify,
  or distribute this file you indicate that you have read the license and understand and accept
  it fully.

****************************************************************************************************
*/

/**
****************************************************************************************************
  IO device interface wrapper class.
****************************************************************************************************
*/
class RookieIoDevice : public AppIoDevice
{
public:
    /* Constructor and virtual destructor.
     */
    RookieIoDevice();
    virtual ~RookieIoDevice();

    rookie_t *inititalize(const os_char *network_name, os_uint device_nr);
    virtual void release();

    os_boolean
        m_initialized;

    /* Memory block handles.
     */
    iocHandle
        m_rookie_export,
        m_rookie_import;

    /* Rookie IO definition structure.
     */
    rookie_t
        m_rookie_def;

};
