/**

  @file    app_seq_blink_led.cpp
  @brief   Some example sequence as own thread.
  @author  Pekka Lehtikoski, Markku Nissinen
  @version 1.0
  @date    30.4.2020

  Copyright 2020 Pekka Lehtikoski. This file is part of the eobjects project and shall only be used,
  modified, and distributed under the terms of the project licensing. By continuing to use, modify,
  or distribute this file you indicate that you have read the license and understand and accept
  it fully.

****************************************************************************************************
*/
#include "controller_main.h"


/**
****************************************************************************************************

  @brief Constructor.

  Start the sequence as a new thread.
  @return  None.

****************************************************************************************************
*/
BlinkLedSequence::BlinkLedSequence() : AppSequence()
{
    rookie1 = 0;
}


/**
****************************************************************************************************

  @brief Virtual destructor.

  Join worker thread to this thread and clean up.
  @return  None.

****************************************************************************************************
*/
BlinkLedSequence::~BlinkLedSequence()
{
}


void BlinkLedSequence::start(ApplicationRoot *app)
{
    if (m_started) return;

    rookie1 = app->m_rookie1_def;
    rookie2 = app->m_rookie2_def;

    os_get_timer(&m_timer);
    m_led_on = OS_FALSE;

    AppSequence::start(app);
}


void BlinkLedSequence::stop()
{
    if (!m_started) return;
    AppSequence::stop();
}


/**
****************************************************************************************************

  @brief Run the sequence.

  If this is to run in both single thread and multithread mode, implement as state machine
  without sleeps.

  @return  None.

****************************************************************************************************
*/
void BlinkLedSequence::run(os_timer *ti)
{
    if (os_has_elapsed_since(&m_timer, ti, 2000))
    {
        m_timer = *ti;
        m_led_on = !m_led_on;

        /* Blink IO ping on rookie1 and rookie2 boards.
         */
/*        ioc_sets_int(&rookie1->imp.myoutput, m_led_on, OSAL_STATE_CONNECTED);
        ioc_sets_int(&rookie2->imp.myoutput, m_led_on, OSAL_STATE_CONNECTED);
*/
        /* Blink also local output pin */
        pin_set(&pins.outputs.led_builtin, m_led_on);
    }
}


/**
****************************************************************************************************

  @brief The thread function.

  This function should be overloaded by actual sequence.
  @return  None.

****************************************************************************************************
*/
void BlinkLedSequence::task()
{
    os_timer ti;
    while (!m_stop_thread && osal_go())
    {
        os_get_timer(&ti);
        run(&ti);
        os_timeslice();
    }
}

