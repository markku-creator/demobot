/* This file is generated by pins_to_c.py script, do not modify. */
#ifndef IOC_PINS_IO_INCLUDED
#define IOC_PINS_IO_INCLUDED
OSAL_C_HEADER_BEGINS

/* ROOKIE IO configuration structure */
typedef struct
{
  struct
  {
    PinGroupHdr hdr;
    Pin gazerbeam;
  }
  inputs;

  struct
  {
    PinGroupHdr hdr;
    Pin led_builtin;
    Pin RIGHT;
    Pin LEFT;
    Pin FORWARD;
    Pin BACKWARD;
  }
  outputs;
}
pins_t;

/* ROOKIE IO configuration top header structure */
extern OS_CONST_H IoPinsHdr pins_hdr;

/* Global ROOKIE IO configuration structure */
extern OS_CONST_H pins_t pins;

/* Name defines for pins and application pin groups (use ifdef to check if HW has pin) */
#define PINS_INPUTS_GAZERBEAM "gazerbeam"
#define PINS_OUTPUTS_LED_BUILTIN "led_builtin"
#define PINS_OUTPUTS_RIGHT "RIGHT"
#define PINS_OUTPUTS_LEFT "LEFT"
#define PINS_OUTPUTS_FORWARD "FORWARD"
#define PINS_OUTPUTS_BACKWARD "BACKWARD"

/* SPI and I2C initialization */
#if PINS_SPI || PINS_I2C

/* SPI and I2C bus structures */

/* SPI and I2C device structures */
#endif

OSAL_C_HEADER_ENDS
#endif
