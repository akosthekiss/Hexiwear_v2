/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDpin9.h
**     Project     : Hexiwear_PEx_2_SDKv2
**     Processor   : MK64FN1M0VDC12
**     Component   : SDK_BitIO
**     Version     : Component 01.017, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-11-18, 19:44, # CodeGen: 22
**     Abstract    :
**
**     Settings    :
**          Component name                                 : LEDpin9
**          SDK                                            : KSDK1
**          GPIO Name                                      : GPIOC
**          PORT Name                                      : PORTC
**          Pin Number                                     : 9
**          Pin Symbol                                     : RGB_R
**          Do Pin Muxing                                  : no
**     Contents    :
**         GetDir    - bool LEDpin9_GetDir(void);
**         SetDir    - void LEDpin9_SetDir(bool Dir);
**         SetInput  - void LEDpin9_SetInput(void);
**         SetOutput - void LEDpin9_SetOutput(void);
**         GetVal    - bool LEDpin9_GetVal(void);
**         PutVal    - void LEDpin9_PutVal(bool Val);
**         ClrVal    - void LEDpin9_ClrVal(void);
**         SetVal    - void LEDpin9_SetVal(void);
**         NegVal    - void LEDpin9_NegVal(void);
**         Init      - void LEDpin9_Init(void);
**         Deinit    - void LEDpin9_Deinit(void);
**
**     (c) Copyright Erich Styger, 2016
**     http      : www.mcuoneclipse.com
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     This is a free software and there is NO WARRANTY.
**     No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LEDpin9.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup LEDpin9_module LEDpin9 module documentation
**  @{
*/         

#ifndef __LEDpin9_H
#define __LEDpin9_H

/* MODULE LEDpin9. */
/* Include inherited beans */
#include "KSDK1.h"

#if KSDK1_SDK_VERSION_USED == KSDK1_SDK_VERSION_NONE
/* Include shared modules, which are used for whole project */
  #include "PE_Types.h"
  #include "PE_Error.h"
  #include "PE_Const.h"
  #include "IO_Map.h"
  #include "Cpu.h"
#endif

#define LEDpin9_DO_PIN_MUXING  0  /* 1: perform pin muxing in Init(), 0: do not do pin muxing */

#if KSDK1_SDK_VERSION_USED == KSDK1_SDK_VERSION_1_3
  #include "fsl_gpio_driver.h"

  /* only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported */
  #define LEDpin9_GPIO_IDX GPIOC_IDX   /* GPIOC */
  #define LEDpin9_PinNumber  9u   /* number of pin, type unsigned integer */

  enum LEDpin9_pinNames{
    RGB_R = GPIO_MAKE_PIN(LEDpin9_GPIO_IDX, LEDpin9_PinNumber),
  };

  extern const gpio_output_pin_user_config_t LEDpin9_OutputConfig[];
  extern const gpio_input_pin_user_config_t LEDpin9_InputConfig[];
#endif

void LEDpin9_Init(void);
/*
** ===================================================================
**     Method      :  LEDpin9_Init (component SDK_BitIO)
**     Description :
**         Driver initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_ClrVal(void);
/*
** ===================================================================
**     Method      :  LEDpin9_ClrVal (component SDK_BitIO)
**     Description :
**         Clears the pin value (sets it to a low level)
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_SetVal(void);
/*
** ===================================================================
**     Method      :  LEDpin9_SetVal (component SDK_BitIO)
**     Description :
**         Sets the pin value to a high value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_NegVal(void);
/*
** ===================================================================
**     Method      :  LEDpin9_NegVal (component SDK_BitIO)
**     Description :
**         Toggles/negates the pin value
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_Deinit(void);
/*
** ===================================================================
**     Method      :  LEDpin9_Deinit (component SDK_BitIO)
**     Description :
**         Driver de-initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

bool LEDpin9_GetVal(void);
/*
** ===================================================================
**     Method      :  LEDpin9_GetVal (component SDK_BitIO)
**     Description :
**         Returns the pin value
**     Parameters  : None
**     Returns     :
**         ---             - Returns the value of the pin:
**                           FALSE/logical level '0' or TRUE/logical
**                           level '1'
** ===================================================================
*/

bool LEDpin9_GetDir(void);
/*
** ===================================================================
**     Method      :  LEDpin9_GetDir (component SDK_BitIO)
**     Description :
**         Return the direction of the pin (input/output)
**     Parameters  : None
**     Returns     :
**         ---             - FALSE if port is input, TRUE if port is
**                           output
** ===================================================================
*/

void LEDpin9_SetDir(bool Dir);
/*
** ===================================================================
**     Method      :  LEDpin9_SetDir (component SDK_BitIO)
**     Description :
**         Sets the direction of the pin (input or output)
**     Parameters  :
**         NAME            - DESCRIPTION
**         Dir             - FALSE: input, TRUE: output
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_SetInput(void);
/*
** ===================================================================
**     Method      :  LEDpin9_SetInput (component SDK_BitIO)
**     Description :
**         Sets the pin as input
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_SetOutput(void);
/*
** ===================================================================
**     Method      :  LEDpin9_SetOutput (component SDK_BitIO)
**     Description :
**         Sets the pin as output
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDpin9_PutVal(bool Val);
/*
** ===================================================================
**     Method      :  LEDpin9_PutVal (component SDK_BitIO)
**     Description :
**         Sets the pin value
**     Parameters  :
**         NAME            - DESCRIPTION
**         Val             - Value to set. FALSE/logical '0' or
**                           TRUE/logical '1'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDpin9. */

#endif
/* ifndef __LEDpin9_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
