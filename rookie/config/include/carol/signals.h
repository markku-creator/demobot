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

#define ROOKIE_CONF_EXP_FRD_BUF_ARRAY_SZ 257
#define ROOKIE_CONF_IMP_TOD_BUF_ARRAY_SZ 257

#ifndef IOBOARD_DEVICE_NAME
#define IOBOARD_DEVICE_NAME "rookie"
#endif

OSAL_C_HEADER_ENDS