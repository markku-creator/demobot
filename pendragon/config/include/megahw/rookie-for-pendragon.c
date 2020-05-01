/* This file is gerated by signals-to-c.py script, do not modify. */
void rookie_init_signal_struct(rookie_t *s)
{
  os_memclear(s, sizeof(rookie_t));
  s->exp.hdr.mblk_name = "exp";
  s->exp.hdr.n_signals = 4;
  s->exp.hdr.mblk_sz = ROOKIE_EXP_MBLK_SZ;
  s->exp.hdr.first_signal = &s->exp.LEFT;

 /* LEFT */
  s->exp.LEFT.addr = 0;
  s->exp.LEFT.n = 1;
  s->exp.LEFT.flags = OS_BOOLEAN;

 /* RIGHT */
  s->exp.RIGHT.addr = 1;
  s->exp.RIGHT.n = 1;
  s->exp.RIGHT.flags = OS_BOOLEAN;

 /* FORWARD */
  s->exp.FORWARD.addr = 2;
  s->exp.FORWARD.n = 1;
  s->exp.FORWARD.flags = OS_BOOLEAN;

 /* BACKWARD */
  s->exp.BACKWARD.addr = 3;
  s->exp.BACKWARD.n = 1;
  s->exp.BACKWARD.flags = OS_BOOLEAN;
  s->mblk_list[0] = &s->exp.hdr;

  s->imp.hdr.mblk_name = "imp";
  s->imp.hdr.n_signals = 4;
  s->imp.hdr.mblk_sz = ROOKIE_IMP_MBLK_SZ;
  s->imp.hdr.first_signal = &s->imp.LeftTurn;

 /* LeftTurn */
  s->imp.LeftTurn.addr = 0;
  s->imp.LeftTurn.n = 1;
  s->imp.LeftTurn.flags = OS_BOOLEAN;

 /* RightTurn */
  s->imp.RightTurn.addr = 1;
  s->imp.RightTurn.n = 1;
  s->imp.RightTurn.flags = OS_BOOLEAN;

 /* StraightForward */
  s->imp.StraightForward.addr = 2;
  s->imp.StraightForward.n = 1;
  s->imp.StraightForward.flags = OS_BOOLEAN;

 /* ForwardBackward */
  s->imp.ForwardBackward.addr = 3;
  s->imp.ForwardBackward.n = 1;
  s->imp.ForwardBackward.flags = OS_BOOLEAN;
  s->mblk_list[1] = &s->imp.hdr;


  s->hdr.n_mblk_hdrs = 2;
  s->hdr.mblk_hdr = s->mblk_list;
}
