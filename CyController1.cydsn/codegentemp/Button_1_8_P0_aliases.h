/*******************************************************************************
* File Name: Button_1_8_P0.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_1_8_P0_ALIASES_H) /* Pins Button_1_8_P0_ALIASES_H */
#define CY_PINS_Button_1_8_P0_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Button_1_8_P0_0			(Button_1_8_P0__0__PC)
#define Button_1_8_P0_0_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__0__SHIFT))

#define Button_1_8_P0_1			(Button_1_8_P0__1__PC)
#define Button_1_8_P0_1_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__1__SHIFT))

#define Button_1_8_P0_2			(Button_1_8_P0__2__PC)
#define Button_1_8_P0_2_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__2__SHIFT))

#define Button_1_8_P0_3			(Button_1_8_P0__3__PC)
#define Button_1_8_P0_3_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__3__SHIFT))

#define Button_1_8_P0_4			(Button_1_8_P0__4__PC)
#define Button_1_8_P0_4_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__4__SHIFT))

#define Button_1_8_P0_5			(Button_1_8_P0__5__PC)
#define Button_1_8_P0_5_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__5__SHIFT))

#define Button_1_8_P0_6			(Button_1_8_P0__6__PC)
#define Button_1_8_P0_6_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__6__SHIFT))

#define Button_1_8_P0_7			(Button_1_8_P0__7__PC)
#define Button_1_8_P0_7_INTR	((uint16)((uint16)0x0001u << Button_1_8_P0__7__SHIFT))

#define Button_1_8_P0_INTR_ALL	 ((uint16)(Button_1_8_P0_0_INTR| Button_1_8_P0_1_INTR| Button_1_8_P0_2_INTR| Button_1_8_P0_3_INTR| Button_1_8_P0_4_INTR| Button_1_8_P0_5_INTR| Button_1_8_P0_6_INTR| Button_1_8_P0_7_INTR))

#endif /* End Pins Button_1_8_P0_ALIASES_H */


/* [] END OF FILE */
