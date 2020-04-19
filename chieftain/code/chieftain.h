/**

  @file    chieftain.h
  @brief   Chieftain IO board example featuring  IoT device.
  @author  Pekka Lehtikoski, Markku Nissinen
  @version 1.0
  @date    6.4.2020

  Copyright 2020 Pekka Lehtikoski. This file is part of the iocom project and shall only be used,
  modified, and distributed under the terms of the project licensing. By continuing to use, modify,
  or distribute this file you indicate that you have read the license and understand and accept
  it fully.

****************************************************************************************************
*/
#define IOCOM_IOBOARD
#include "iocom.h"
#include "pinsx.h"
#include "nodeconf.h"

#include "pins-io.h"
#include "signals.h"
#include "info-mblk.h"
#include "network-defaults.h"


void ioboard_root_callback(
    struct iocHandle *mblk,
    os_int start_addr,
    os_int end_addr,
    os_ushort flags,
    void *context);
