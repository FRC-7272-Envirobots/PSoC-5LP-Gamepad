/*******************************************************************************
* File Name: ButtonReg6.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware to read the value of a Status 
*  Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "ButtonReg6.h"

#if !defined(ButtonReg6_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: ButtonReg6_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The current value in the Status Register.
*
*******************************************************************************/
uint8 ButtonReg6_Read(void) 
{ 
    return ButtonReg6_Status;
}


/*******************************************************************************
* Function Name: ButtonReg6_InterruptEnable
********************************************************************************
*
* Summary:
*  Enables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg6_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    ButtonReg6_Status_Aux_Ctrl |= ButtonReg6_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: ButtonReg6_InterruptDisable
********************************************************************************
*
* Summary:
*  Disables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg6_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    ButtonReg6_Status_Aux_Ctrl &= (uint8)(~ButtonReg6_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: ButtonReg6_WriteMask
********************************************************************************
*
* Summary:
*  Writes the current mask value assigned to the Status Register.
*
* Parameters:
*  mask:  Value to write into the mask register.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg6_WriteMask(uint8 mask) 
{
    #if(ButtonReg6_INPUTS < 8u)
    	mask &= ((uint8)(1u << ButtonReg6_INPUTS) - 1u);
	#endif /* End ButtonReg6_INPUTS < 8u */
    ButtonReg6_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: ButtonReg6_ReadMask
********************************************************************************
*
* Summary:
*  Reads the current interrupt mask assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The value of the interrupt mask of the Status Register.
*
*******************************************************************************/
uint8 ButtonReg6_ReadMask(void) 
{
    return ButtonReg6_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
