/* This file is gerated by signals-to-c.py script, do not modify. */
const struct rookie_t rookie = 
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
  },

  {
    {"conf_exp", &ioboard_conf_exp, 5, ROOKIE_CONF_EXP_MBLK_SZ, (iocSignal*)&rookie.conf_exp.tod_state},
    {0, 1, OS_CHAR, &ioboard_conf_exp, OS_NULL}, /* tod_state */
    {2, 1, OS_INT, &ioboard_conf_exp, OS_NULL}, /* tod_tail */
    {7, 1, OS_CHAR, &ioboard_conf_exp, OS_NULL}, /* frd_state */
    {9, 257, OS_UCHAR, &ioboard_conf_exp, OS_NULL}, /* frd_buf */
    {267, 1, OS_INT, &ioboard_conf_exp, OS_NULL} /* frd_head */
  },

  {
    {"conf_imp", &ioboard_conf_imp, 7, ROOKIE_CONF_IMP_MBLK_SZ, (iocSignal*)&rookie.conf_imp.tod_cmd},
    {0, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* tod_cmd */
    {2, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* tod_select */
    {4, 257, OS_UCHAR, &ioboard_conf_imp, OS_NULL}, /* tod_buf */
    {262, 1, OS_INT, &ioboard_conf_imp, OS_NULL}, /* tod_head */
    {267, 1, OS_CHAR, &ioboard_conf_imp, OS_NULL}, /* frd_cmd */
    {269, 1, OS_UCHAR, &ioboard_conf_imp, OS_NULL}, /* frd_select */
    {271, 1, OS_INT, &ioboard_conf_imp, OS_NULL} /* frd_tail */
  }
};

static const iocMblkSignalHdr *rookie_mblk_list[] =
{
  &rookie.exp.hdr,
  &rookie.imp.hdr,
  &rookie.conf_exp.hdr,
  &rookie.conf_imp.hdr
};

const iocDeviceHdr rookie_hdr = {(iocMblkSignalHdr**)rookie_mblk_list, sizeof(rookie_mblk_list)/sizeof(iocMblkSignalHdr*)};
