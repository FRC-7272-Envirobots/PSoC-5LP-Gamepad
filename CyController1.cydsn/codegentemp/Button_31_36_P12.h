/*******************************************************************************
* File Name: Button_31_36_P12.h  
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

#if !defined(CY_PINS_Button_31_36_P12_H) /* Pins Button_31_36_P12_H */
#define CY_PINS_Button_31_36_P12_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_31_36_P12_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_31_36_P12__PORT == 15 && ((Button_31_36_P12__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Button_31_36_P12_Write(uint8 value);
void    Button_31_36_P12_SetDriveMode(uint8 mode);
uint8   Button_31_36_P12_ReadDataReg(void);
uint8   Button_31_36_P12_Read(void);
void    Button_31_36_P12_SetInterruptMode(uint16 position, uint16 mode);
uint8   Button_31_36_P12_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Button_31_36_P12_SetDriveMode() function.
     *  @{
     */
        #define Button_31_36_P12_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Button_31_36_P12_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Button_31_36_P12_DM_RES_UP          PIN_DM_RES_UP
        #define Button_31_36_P12_DM_RES_DWN         PIN_DM_RES_DWN
        #define Button_31_36_P12_DM_OD_LO           PIN_DM_OD_LO
        #define Button_31_36_P12_DM_OD_HI           PIN_DM_OD_HI
        #define Button_31_36_P12_DM_STRONG          PIN_DM_STRONG
        #define Button_31_36_P12_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Button_31_36_P12_MASK               Button_31_36_P12__MASK
#define Button_31_36_P12_SHIFT              Button_31_36_P12__SHIFT
#define Button_31_36_P12_WIDTH              6u

/* Interrupt constants */
#if defined(Button_31_36_P12__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Button_31_36_P12_SetInterruptMode() function.
     *  @{
     */
        #define Button_31_36_P12_INTR_NONE      (uint16)(0x0000u)
        #define Button_31_36_P12_INTR_RISING    (uint16)(0x0001u)
        #define Button_31_36_P12_INTR_FALLING   (uint16)(0x0002u)
        #define Button_31_36_P12_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Button_31_36_P12_INTR_MASK      (0x01u) 
#endif /* (Button_31_36_P12__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_31_36_P12_PS                     (* (reg8 *) Button_31_36_P12__PS)
/* Data Register */
#define Button_31_36_P12_DR                     (* (reg8 *) Button_31_36_P12__DR)
/* Port Number */
#define Button_31_36_P12_PRT_NUM                (* (reg8 *) Button_31_36_P12__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_31_36_P12_AG                     (* (reg8 *) Button_31_36_P12__AG)                       
/* Analog MUX bux enable */
#define Button_31_36_P12_AMUX                   (* (reg8 *) Button_31_36_P12__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_31_36_P12_BIE                    (* (reg8 *) Button_31_36_P12__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_31_36_P12_BIT_MASK               (* (reg8 *) Button_31_36_P12__BIT_MASK)
/* Bypass Enable */
#define Button_31_36_P12_BYP                    (* (reg8 *) Button_31_36_P12__BYP)
/* Port wide control signals */                                                   
#define Button_31_36_P12_CTL                    (* (reg8 *) Button_31_36_P12__CTL)
/* Drive Modes */
#define Button_31_36_P12_DM0                    (* (reg8 *) Button_31_36_P12__DM0) 
#define Button_31_36_P12_DM1                    (* (reg8 *) Button_31_36_P12__DM1)
#define Button_31_36_P12_DM2                    (* (reg8 *) Button_31_36_P12__DM2) 
/* Input Buffer Disable Override */
#define Button_31_36_P12_INP_DIS                (* (reg8 *) Button_31_36_P12__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_31_36_P12_LCD_COM_SEG            (* (reg8 *) Button_31_36_P12__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_31_36_P12_LCD_EN                 (* (reg8 *) Button_31_36_P12__LCD_EN)
/* Slew Rate Control */
#define Button_31_36_P12_SLW                    (* (reg8 *) Button_31_36_P12__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_31_36_P12_PRTDSI__CAPS_SEL       (* (reg8 *) Button_31_36_P12__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_31_36_P12_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_31_36_P12__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_31_36_P12_PRTDSI__OE_SEL0        (* (reg8 *) Button_31_36_P12__PRTDSI__OE_SEL0) 
#define Button_31_36_P12_PRTDSI__OE_SEL1        (* (reg8 *) Button_31_36_P12__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_31_36_P12_PRTDSI__OUT_SEL0       (* (reg8 *) Button_31_36_P12__PRTDSI__OUT_SEL0) 
#define Button_31_36_P12_PRTDSI__OUT_SEL1       (* (reg8 *) Button_31_36_P12__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_31_36_P12_PRTDSI__SYNC_OUT       (* (reg8 *) Button_31_36_P12__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Button_31_36_P12__SIO_CFG)
    #define Button_31_36_P12_SIO_HYST_EN        (* (reg8 *) Button_31_36_P12__SIO_HYST_EN)
    #define Button_31_36_P12_SIO_REG_HIFREQ     (* (reg8 *) Button_31_36_P12__SIO_REG_HIFREQ)
    #define Button_31_36_P12_SIO_CFG            (* (reg8 *) Button_31_36_P12__SIO_CFG)
    #define Button_31_36_P12_SIO_DIFF           (* (reg8 *) Button_31_36_P12__SIO_DIFF)
#endif /* (Button_31_36_P12__SIO_CFG) */

/* Interrupt Registers */
#if defined(Button_31_36_P12__INTSTAT)
    #define Button_31_36_P12_INTSTAT            (* (reg8 *) Button_31_36_P12__INTSTAT)
    #define Button_31_36_P12_SNAP               (* (reg8 *) Button_31_36_P12__SNAP)
    
	#define Button_31_36_P12_0_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__0__INTTYPE)
	#define Button_31_36_P12_1_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__1__INTTYPE)
	#define Button_31_36_P12_2_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__2__INTTYPE)
	#define Button_31_36_P12_3_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__3__INTTYPE)
	#define Button_31_36_P12_4_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__4__INTTYPE)
	#define Button_31_36_P12_5_INTTYPE_REG 		(* (reg8 *) Button_31_36_P12__5__INTTYPE)
#endif /* (Button_31_36_P12__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_31_36_P12_H */


/* [] END OF FILE */
