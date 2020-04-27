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
}
rookie_t;

#define ROOKIE_EXP_MBLK_SZ 32
#define ROOKIE_IMP_MBLK_SZ 32

extern OS_FLASH_MEM_H rookie_t rookie;
extern OS_FLASH_MEM_H iocDeviceHdr rookie_hdr;


/* Defines to check in code with #ifdef to know if signal is configured in JSON. */
#define ROOKIE_EXP_LEFT
#define ROOKIE_EXP_RIGHT
#define ROOKIE_EXP_FORWARD
#define ROOKIE_EXP_BACKWARD
#define ROOKIE_IMP_LEFTTURN
#define ROOKIE_IMP_RIGHTTURN
#define ROOKIE_IMP_STRAIGHTFORWARD
#define ROOKIE_IMP_FORWARDBACKWARD

#ifndef IOBOARD_DEVICE_NAME
#define IOBOARD_DEVICE_NAME "rookie"
#endif

OSAL_C_HEADER_ENDS
