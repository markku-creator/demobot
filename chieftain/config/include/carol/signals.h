/* This file is gerated by signals-to-c.py script, do not modify. */
OSAL_C_HEADER_BEGINS

typedef struct chieftain_t
{
  struct 
  {
    iocMblkSignalHdr hdr;
    iocSignal LEFT;
    iocSignal RIGHT;
    iocSignal FORWARD;
    iocSignal BACKWARD;
  }
  exp;

  struct 
  {
    iocMblkSignalHdr hdr;
    iocSignal LeftTurn;
    iocSignal RightTurn;
    iocSignal StraightForward;
    iocSignal ForwardBackward;
  }
  imp;

  struct 
  {
    iocMblkSignalHdr hdr;
    iocSignal tod_state;
    iocSignal tod_tail;
    iocSignal frd_state;
    iocSignal frd_buf;
    iocSignal frd_head;
  }
  conf_exp;

  struct 
  {
    iocMblkSignalHdr hdr;
    iocSignal tod_cmd;
    iocSignal tod_select;
    iocSignal tod_buf;
    iocSignal tod_head;
    iocSignal frd_cmd;
    iocSignal frd_select;
    iocSignal frd_tail;
  }
  conf_imp;
}
chieftain_t;

#define CHIEFTAIN_EXP_MBLK_SZ 32
#define CHIEFTAIN_IMP_MBLK_SZ 32
#define CHIEFTAIN_CONF_EXP_MBLK_SZ 272
#define CHIEFTAIN_CONF_IMP_MBLK_SZ 276

extern const chieftain_t chieftain;
extern const iocDeviceHdr chieftain_hdr;


/* Array length defines. */
#define CHIEFTAIN_CONF_EXP_FRD_BUF_ARRAY_SZ 257
#define CHIEFTAIN_CONF_IMP_TOD_BUF_ARRAY_SZ 257

/* Defines to check in code with #ifdef to know if signal is configured in JSON. */
#define CHIEFTAIN_EXP_LEFT
#define CHIEFTAIN_EXP_RIGHT
#define CHIEFTAIN_EXP_FORWARD
#define CHIEFTAIN_EXP_BACKWARD
#define CHIEFTAIN_IMP_LEFTTURN
#define CHIEFTAIN_IMP_RIGHTTURN
#define CHIEFTAIN_IMP_STRAIGHTFORWARD
#define CHIEFTAIN_IMP_FORWARDBACKWARD
#define CHIEFTAIN_CONF_EXP_TOD_STATE
#define CHIEFTAIN_CONF_EXP_TOD_TAIL
#define CHIEFTAIN_CONF_EXP_FRD_STATE
#define CHIEFTAIN_CONF_EXP_FRD_BUF
#define CHIEFTAIN_CONF_EXP_FRD_HEAD
#define CHIEFTAIN_CONF_IMP_TOD_CMD
#define CHIEFTAIN_CONF_IMP_TOD_SELECT
#define CHIEFTAIN_CONF_IMP_TOD_BUF
#define CHIEFTAIN_CONF_IMP_TOD_HEAD
#define CHIEFTAIN_CONF_IMP_FRD_CMD
#define CHIEFTAIN_CONF_IMP_FRD_SELECT
#define CHIEFTAIN_CONF_IMP_FRD_TAIL

#ifndef IOBOARD_DEVICE_NAME
#define IOBOARD_DEVICE_NAME "chieftain"
#endif

OSAL_C_HEADER_ENDS
