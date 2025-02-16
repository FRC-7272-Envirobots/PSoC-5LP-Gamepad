/*******************************************************************************
* File Name: Button_25_30_P1.h  
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

#if !defined(CY_PINS_Button_25_30_P1_ALIASES_H) /* Pins Button_25_30_P1_ALIASES_H */
#define CY_PINS_Button_25_30_P1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Button_25_30_P1_0			(Button_25_30_P1__0__PC)
#define Button_25_30_P1_0_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__0__SHIFT))

#define Button_25_30_P1_1			(Button_25_30_P1__1__PC)
#define Button_25_30_P1_1_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__1__SHIFT))

#define Button_25_30_P1_2			(Button_25_30_P1__2__PC)
#define Button_25_30_P1_2_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__2__SHIFT))

#define Button_25_30_P1_3			(Button_25_30_P1__3__PC)
#define Button_25_30_P1_3_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__3__SHIFT))

#define Button_25_30_P1_4			(Button_25_30_P1__4__PC)
#define Button_25_30_P1_4_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__4__SHIFT))

#define Button_25_30_P1_5			(Button_25_30_P1__5__PC)
#define Button_25_30_P1_5_INTR	((uint16)((uint16)0x0001u << Button_25_30_P1__5__SHIFT))

#define Button_25_30_P1_INTR_ALL	 ((uint16)(Button_25_30_P1_0_INTR| Button_25_30_P1_1_INTR| Button_25_30_P1_2_INTR| Button_25_30_P1_3_INTR| Button_25_30_P1_4_INTR| Button_25_30_P1_5_INTR))

#endif /* End Pins Button_25_30_P1_ALIASES_H */


/* [] END OF FILE */
