/* This file is gerated by signals-to-c.py script, do not modify. */
OSAL_C_HEADER_BEGINS

typedef struct rookie_t
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
rookie_t;

#define ROOKIE_EXP_MBLK_SZ 32
#define ROOKIE_IMP_MBLK_SZ 32
#define ROOKIE_CONF_EXP_MBLK_SZ 272
#define ROOKIE_CONF_IMP_MBLK_SZ 276

extern const rookie_t rookie;
extern const iocDeviceHdr rookie_hdr;


/* Array length defines. */
#define ROOKIE_CONF_EXP_FRD_BUF_ARRAY_SZ 257
#define ROOKIE_CONF_IMP_TOD_BUF_ARRAY_SZ 257

/* Defines to check in code with #ifdef to know if signal is configured in JSON. */
#define ROOKIE_EXP_LEFT
#define ROOKIE_EXP_RIGHT
#define ROOKIE_EXP_FORWARD
#define ROOKIE_EXP_BACKWARD
#define ROOKIE_IMP_LEFTTURN
#define ROOKIE_IMP_RIGHTTURN
#define ROOKIE_IMP_STRAIGHTFORWARD
#define ROOKIE_IMP_FORWARDBACKWARD
#define ROOKIE_CONF_EXP_TOD_STATE
#define ROOKIE_CONF_EXP_TOD_TAIL
#define ROOKIE_CONF_EXP_FRD_STATE
#define ROOKIE_CONF_EXP_FRD_BUF
#define ROOKIE_CONF_EXP_FRD_HEAD
#define ROOKIE_CONF_IMP_TOD_CMD
#define ROOKIE_CONF_IMP_TOD_SELECT
#define ROOKIE_CONF_IMP_TOD_BUF
#define ROOKIE_CONF_IMP_TOD_HEAD
#define ROOKIE_CONF_IMP_FRD_CMD
#define ROOKIE_CONF_IMP_FRD_SELECT
#define ROOKIE_CONF_IMP_FRD_TAIL

#ifndef IOBOARD_DEVICE_NAME
#define IOBOARD_DEVICE_NAME "rookie"
#endif

OSAL_C_HEADER_ENDS
