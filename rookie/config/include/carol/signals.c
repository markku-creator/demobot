/* This file is gerated by signals-to-c.py script, do not modify. */
OS_FLASH_MEM struct rookie_t rookie = 
{
  {
    {"exp", &ioboard_exp, 4, ROOKIE_EXP_MBLK_SZ, (iocSignal*)&rookie.exp.LEFT},
    {0, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.LEFT}, /* LEFT */
    {1, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.RIGHT}, /* RIGHT */
    {2, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.FORWARD}, /* FORWARD */
    {3, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.BACKWARD} /* BACKWARD */
  },

  {
    {"imp", &ioboard_imp, 4, ROOKIE_IMP_MBLK_SZ, (iocSignal*)&rookie.imp.LeftTurn},
    {0, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* LeftTurn */
    {1, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* RightTurn */
    {2, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* StraightForward */
    {3, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL} /* ForwardBackward */
  }
};

static OS_FLASH_MEM iocMblkSignalHdr * OS_FLASH_MEM rookie_mblk_list[] =
{
  &rookie.exp.hdr,
  &rookie.imp.hdr
};

OS_FLASH_MEM iocDeviceHdr rookie_hdr = {(iocMblkSignalHdr**)rookie_mblk_list, sizeof(rookie_mblk_list)/sizeof(iocMblkSignalHdr*)};
