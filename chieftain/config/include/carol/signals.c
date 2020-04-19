/* This file is gerated by signals-to-c.py script, do not modify. */
const struct chieftain_t chieftain = 
{
  {
    {"exp", &ioboard_exp, 4, CHIEFTAIN_EXP_MBLK_SZ, (iocSignal*)&chieftain.exp.LEFT},
    {0, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.LEFT}, /* LEFT */
    {1, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.RIGHT}, /* RIGHT */
    {2, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.FORWARD}, /* FORWARD */
    {3, 1, OS_BOOLEAN|IOC_PIN_PTR, &ioboard_exp, &pins.outputs.BACKWARD} /* BACKWARD */
  },

  {
    {"imp", &ioboard_imp, 4, CHIEFTAIN_IMP_MBLK_SZ, (iocSignal*)&chieftain.imp.LeftTurn},
    {0, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* LeftTurn */
    {1, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* RightTurn */
    {2, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL}, /* StraightForward */
    {3, 1, OS_BOOLEAN, &ioboard_imp, OS_NULL} /* ForwardBackward */
  },

  {
    {"conf_exp", &ioboard_conf_exp, 5, CHIEFTAIN_CONF_EXP_MBLK_SZ, (iocSignal*)&chieftain.conf_exp.tod_state},
    {0, 1, OS_CHAR, &ioboard_conf_exp, OS_NULL}, /* tod_state */
    {2, 1, OS_INT, &ioboard_conf_exp, OS_NULL}, /* tod_tail */
    {7, 1, OS_CHAR, &ioboard_conf_exp, OS_NULL}, /* frd_state */
    {9, 257, OS_UCHAR, &ioboard_conf_exp, OS_NULL}, /* frd_buf */
    {267, 1, OS_INT, &ioboard_conf_exp, OS_NULL} /* frd_head */
  },

  {
    {"conf_imp", &ioboard_conf_imp, 7, CHIEFTAIN_CONF_IMP_MBLK_SZ, (iocSignal*)&chieftain.conf_imp.tod_cmd},
    {0, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* tod_cmd */
    {2, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* tod_select */
    {4, 257, OS_UCHAR, &ioboard_conf_imp, OS_NULL}, /* tod_buf */
    {262, 1, OS_INT, &ioboard_conf_imp, OS_NULL}, /* tod_head */
    {267, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* frd_cmd */
    {269, 1, OS_UCHAR, &ioboard_conf_imp, OS_NULL}, /* frd_select */
    {271, 1, OS_INT, &ioboard_conf_imp, OS_NULL} /* frd_tail */
  }
};

static const iocMblkSignalHdr *chieftain_mblk_list[] =
{
  &chieftain.exp.hdr,
  &chieftain.imp.hdr,
  &chieftain.conf_exp.hdr,
  &chieftain.conf_imp.hdr
};

const iocDeviceHdr chieftain_hdr = {(iocMblkSignalHdr**)chieftain_mblk_list, sizeof(chieftain_mblk_list)/sizeof(iocMblkSignalHdr*)};
