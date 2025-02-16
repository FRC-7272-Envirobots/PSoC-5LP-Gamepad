/*******************************************************************************
* File Name: Button_37_42_P15.h  
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

#if !defined(CY_PINS_Button_37_42_P15_H) /* Pins Button_37_42_P15_H */
#define CY_PINS_Button_37_42_P15_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_37_42_P15_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_37_42_P15__PORT == 15 && ((Button_37_42_P15__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Button_37_42_P15_Write(uint8 value);
void    Button_37_42_P15_SetDriveMode(uint8 mode);
uint8   Button_37_42_P15_ReadDataReg(void);
uint8   Button_37_42_P15_Read(void);
void    Button_37_42_P15_SetInterruptMode(uint16 position, uint16 mode);
uint8   Button_37_42_P15_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Button_37_42_P15_SetDriveMode() function.
     *  @{
     */
        #define Button_37_42_P15_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Button_37_42_P15_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Button_37_42_P15_DM_RES_UP          PIN_DM_RES_UP
        #define Button_37_42_P15_DM_RES_DWN         PIN_DM_RES_DWN
        #define Button_37_42_P15_DM_OD_LO           PIN_DM_OD_LO
        #define Button_37_42_P15_DM_OD_HI           PIN_DM_OD_HI
        #define Button_37_42_P15_DM_STRONG          PIN_DM_STRONG
        #define Button_37_42_P15_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Button_37_42_P15_MASK               Button_37_42_P15__MASK
#define Button_37_42_P15_SHIFT              Button_37_42_P15__SHIFT
#define Button_37_42_P15_WIDTH              6u

/* Interrupt constants */
#if defined(Button_37_42_P15__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Button_37_42_P15_SetInterruptMode() function.
     *  @{
     */
        #define Button_37_42_P15_INTR_NONE      (uint16)(0x0000u)
        #define Button_37_42_P15_INTR_RISING    (uint16)(0x0001u)
        #define Button_37_42_P15_INTR_FALLING   (uint16)(0x0002u)
        #define Button_37_42_P15_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Button_37_42_P15_INTR_MASK      (0x01u) 
#endif /* (Button_37_42_P15__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_37_42_P15_PS                     (* (reg8 *) Button_37_42_P15__PS)
/* Data Register */
#define Button_37_42_P15_DR                     (* (reg8 *) Button_37_42_P15__DR)
/* Port Number */
#define Button_37_42_P15_PRT_NUM                (* (reg8 *) Button_37_42_P15__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_37_42_P15_AG                     (* (reg8 *) Button_37_42_P15__AG)                       
/* Analog MUX bux enable */
#define Button_37_42_P15_AMUX                   (* (reg8 *) Button_37_42_P15__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_37_42_P15_BIE                    (* (reg8 *) Button_37_42_P15__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_37_42_P15_BIT_MASK               (* (reg8 *) Button_37_42_P15__BIT_MASK)
/* Bypass Enable */
#define Button_37_42_P15_BYP                    (* (reg8 *) Button_37_42_P15__BYP)
/* Port wide control signals */                                                   
#define Button_37_42_P15_CTL                    (* (reg8 *) Button_37_42_P15__CTL)
/* Drive Modes */
#define Button_37_42_P15_DM0                    (* (reg8 *) Button_37_42_P15__DM0) 
#define Button_37_42_P15_DM1                    (* (reg8 *) Button_37_42_P15__DM1)
#define Button_37_42_P15_DM2                    (* (reg8 *) Button_37_42_P15__DM2) 
/* Input Buffer Disable Override */
#define Button_37_42_P15_INP_DIS                (* (reg8 *) Button_37_42_P15__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_37_42_P15_LCD_COM_SEG            (* (reg8 *) Button_37_42_P15__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_37_42_P15_LCD_EN                 (* (reg8 *) Button_37_42_P15__LCD_EN)
/* Slew Rate Control */
#define Button_37_42_P15_SLW                    (* (reg8 *) Button_37_42_P15__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_37_42_P15_PRTDSI__CAPS_SEL       (* (reg8 *) Button_37_42_P15__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_37_42_P15_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_37_42_P15__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_37_42_P15_PRTDSI__OE_SEL0        (* (reg8 *) Button_37_42_P15__PRTDSI__OE_SEL0) 
#define Button_37_42_P15_PRTDSI__OE_SEL1        (* (reg8 *) Button_37_42_P15__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_37_42_P15_PRTDSI__OUT_SEL0       (* (reg8 *) Button_37_42_P15__PRTDSI__OUT_SEL0) 
#define Button_37_42_P15_PRTDSI__OUT_SEL1       (* (reg8 *) Button_37_42_P15__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_37_42_P15_PRTDSI__SYNC_OUT       (* (reg8 *) Button_37_42_P15__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Button_37_42_P15__SIO_CFG)
    #define Button_37_42_P15_SIO_HYST_EN        (* (reg8 *) Button_37_42_P15__SIO_HYST_EN)
    #define Button_37_42_P15_SIO_REG_HIFREQ     (* (reg8 *) Button_37_42_P15__SIO_REG_HIFREQ)
    #define Button_37_42_P15_SIO_CFG            (* (reg8 *) Button_37_42_P15__SIO_CFG)
    #define Button_37_42_P15_SIO_DIFF           (* (reg8 *) Button_37_42_P15__SIO_DIFF)
#endif /* (Button_37_42_P15__SIO_CFG) */

/* Interrupt Registers */
#if defined(Button_37_42_P15__INTSTAT)
    #define Button_37_42_P15_INTSTAT            (* (reg8 *) Button_37_42_P15__INTSTAT)
    #define Button_37_42_P15_SNAP               (* (reg8 *) Button_37_42_P15__SNAP)
    
	#define Button_37_42_P15_0_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__0__INTTYPE)
	#define Button_37_42_P15_1_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__1__INTTYPE)
	#define Button_37_42_P15_2_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__2__INTTYPE)
	#define Button_37_42_P15_3_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__3__INTTYPE)
	#define Button_37_42_P15_4_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__4__INTTYPE)
	#define Button_37_42_P15_5_INTTYPE_REG 		(* (reg8 *) Button_37_42_P15__5__INTTYPE)
#endif /* (Button_37_42_P15__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_37_42_P15_H */


/* [] END OF FILE */
