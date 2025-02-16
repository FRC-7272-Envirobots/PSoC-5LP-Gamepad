/*******************************************************************************
* File Name: ButtonReg5.h  
* Version 1.90
*
* Description:
*  This file containts Status Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_STATUS_REG_ButtonReg5_H) /* CY_STATUS_REG_ButtonReg5_H */
#define CY_STATUS_REG_ButtonReg5_H

#include "cyfitter.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))
    #include "cytypes.h"
    #include "CyLib.h"
#else
    #include "syslib/cy_syslib.h"
#endif

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 statusState;

} ButtonReg5_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

uint8 ButtonReg5_Read(void) ;
void ButtonReg5_InterruptEnable(void) ;
void ButtonReg5_InterruptDisable(void) ;
void ButtonReg5_WriteMask(uint8 mask) ;
uint8 ButtonReg5_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define ButtonReg5_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define ButtonReg5_INPUTS              8


/***************************************
*             Registers
***************************************/

/* Status Register */
#define ButtonReg5_Status             (* (reg8 *) ButtonReg5_sts_sts_reg__STATUS_REG )
#define ButtonReg5_Status_PTR         (  (reg8 *) ButtonReg5_sts_sts_reg__STATUS_REG )
#define ButtonReg5_Status_Mask        (* (reg8 *) ButtonReg5_sts_sts_reg__MASK_REG )
#define ButtonReg5_Status_Aux_Ctrl    (* (reg8 *) ButtonReg5_sts_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_ButtonReg5_H */


/* [] END OF FILE */
