/*******************************************************************************
* File Name: Button_17_24_P3.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_17_24_P3_H) /* Pins Button_17_24_P3_H */
#define CY_PINS_Button_17_24_P3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_17_24_P3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_17_24_P3__PORT == 15 && ((Button_17_24_P3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Button_17_24_P3_Write(uint8 value);
void    Button_17_24_P3_SetDriveMode(uint8 mode);
uint8   Button_17_24_P3_ReadDataReg(void);
uint8   Button_17_24_P3_Read(void);
void    Button_17_24_P3_SetInterruptMode(uint16 position, uint16 mode);
uint8   Button_17_24_P3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Button_17_24_P3_SetDriveMode() function.
     *  @{
     */
        #define Button_17_24_P3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Button_17_24_P3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Button_17_24_P3_DM_RES_UP          PIN_DM_RES_UP
        #define Button_17_24_P3_DM_RES_DWN         PIN_DM_RES_DWN
        #define Button_17_24_P3_DM_OD_LO           PIN_DM_OD_LO
        #define Button_17_24_P3_DM_OD_HI           PIN_DM_OD_HI
        #define Button_17_24_P3_DM_STRONG          PIN_DM_STRONG
        #define Button_17_24_P3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Button_17_24_P3_MASK               Button_17_24_P3__MASK
#define Button_17_24_P3_SHIFT              Button_17_24_P3__SHIFT
#define Button_17_24_P3_WIDTH              8u

/* Interrupt constants */
#if defined(Button_17_24_P3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Button_17_24_P3_SetInterruptMode() function.
     *  @{
     */
        #define Button_17_24_P3_INTR_NONE      (uint16)(0x0000u)
        #define Button_17_24_P3_INTR_RISING    (uint16)(0x0001u)
        #define Button_17_24_P3_INTR_FALLING   (uint16)(0x0002u)
        #define Button_17_24_P3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Button_17_24_P3_INTR_MASK      (0x01u) 
#endif /* (Button_17_24_P3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_17_24_P3_PS                     (* (reg8 *) Button_17_24_P3__PS)
/* Data Register */
#define Button_17_24_P3_DR                     (* (reg8 *) Button_17_24_P3__DR)
/* Port Number */
#define Button_17_24_P3_PRT_NUM                (* (reg8 *) Button_17_24_P3__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_17_24_P3_AG                     (* (reg8 *) Button_17_24_P3__AG)                       
/* Analog MUX bux enable */
#define Button_17_24_P3_AMUX                   (* (reg8 *) Button_17_24_P3__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_17_24_P3_BIE                    (* (reg8 *) Button_17_24_P3__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_17_24_P3_BIT_MASK               (* (reg8 *) Button_17_24_P3__BIT_MASK)
/* Bypass Enable */
#define Button_17_24_P3_BYP                    (* (reg8 *) Button_17_24_P3__BYP)
/* Port wide control signals */                                                   
#define Button_17_24_P3_CTL                    (* (reg8 *) Button_17_24_P3__CTL)
/* Drive Modes */
#define Button_17_24_P3_DM0                    (* (reg8 *) Button_17_24_P3__DM0) 
#define Button_17_24_P3_DM1                    (* (reg8 *) Button_17_24_P3__DM1)
#define Button_17_24_P3_DM2                    (* (reg8 *) Button_17_24_P3__DM2) 
/* Input Buffer Disable Override */
#define Button_17_24_P3_INP_DIS                (* (reg8 *) Button_17_24_P3__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_17_24_P3_LCD_COM_SEG            (* (reg8 *) Button_17_24_P3__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_17_24_P3_LCD_EN                 (* (reg8 *) Button_17_24_P3__LCD_EN)
/* Slew Rate Control */
#define Button_17_24_P3_SLW                    (* (reg8 *) Button_17_24_P3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_17_24_P3_PRTDSI__CAPS_SEL       (* (reg8 *) Button_17_24_P3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_17_24_P3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_17_24_P3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_17_24_P3_PRTDSI__OE_SEL0        (* (reg8 *) Button_17_24_P3__PRTDSI__OE_SEL0) 
#define Button_17_24_P3_PRTDSI__OE_SEL1        (* (reg8 *) Button_17_24_P3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_17_24_P3_PRTDSI__OUT_SEL0       (* (reg8 *) Button_17_24_P3__PRTDSI__OUT_SEL0) 
#define Button_17_24_P3_PRTDSI__OUT_SEL1       (* (reg8 *) Button_17_24_P3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_17_24_P3_PRTDSI__SYNC_OUT       (* (reg8 *) Button_17_24_P3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Button_17_24_P3__SIO_CFG)
    #define Button_17_24_P3_SIO_HYST_EN        (* (reg8 *) Button_17_24_P3__SIO_HYST_EN)
    #define Button_17_24_P3_SIO_REG_HIFREQ     (* (reg8 *) Button_17_24_P3__SIO_REG_HIFREQ)
    #define Button_17_24_P3_SIO_CFG            (* (reg8 *) Button_17_24_P3__SIO_CFG)
    #define Button_17_24_P3_SIO_DIFF           (* (reg8 *) Button_17_24_P3__SIO_DIFF)
#endif /* (Button_17_24_P3__SIO_CFG) */

/* Interrupt Registers */
#if defined(Button_17_24_P3__INTSTAT)
    #define Button_17_24_P3_INTSTAT            (* (reg8 *) Button_17_24_P3__INTSTAT)
    #define Button_17_24_P3_SNAP               (* (reg8 *) Button_17_24_P3__SNAP)
    
	#define Button_17_24_P3_0_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__0__INTTYPE)
	#define Button_17_24_P3_1_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__1__INTTYPE)
	#define Button_17_24_P3_2_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__2__INTTYPE)
	#define Button_17_24_P3_3_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__3__INTTYPE)
	#define Button_17_24_P3_4_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__4__INTTYPE)
	#define Button_17_24_P3_5_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__5__INTTYPE)
	#define Button_17_24_P3_6_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__6__INTTYPE)
	#define Button_17_24_P3_7_INTTYPE_REG 		(* (reg8 *) Button_17_24_P3__7__INTTYPE)
#endif /* (Button_17_24_P3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_17_24_P3_H */


/* [] END OF FILE */
