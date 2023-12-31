/*
 * Copyright 2019-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MIMX8ML8xxxLZ
package_id: MIMX8ML8DVNLZ
mcu_data: ksdk2_0
processor_version: 0.9.1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"
#include "defines.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm7}
- pin_list:
  - {pin_num: AJ5, peripheral: UART4, signal: uart_rx, pin_signal: UART4_RXD, PE: Enabled, HYS: CMOS, PUE: Weak_Pull_Up, DSE: X6}
  - {pin_num: AH5, peripheral: UART4, signal: uart_tx, pin_signal: UART4_TXD, PE: Enabled, HYS: CMOS, PUE: Weak_Pull_Up, DSE: X6}
  - {pin_num: T28, peripheral: GPIO3, signal: 'gpio_io, 16', pin_signal: NAND_READY_B, PUE: Weak_Pull_Up, DSE: X1}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M7F[m7] */
    
#if defined IRQ_56

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO07_GPIO1_IO07, 1U);  // J3.18   x
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO07_GPIO1_IO07, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_57

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO06_GPIO1_IO06, 1U);  // J17.1   x
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO06_GPIO1_IO06, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_58

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO05_GPIO1_IO05, 1U);  // J16.17   x
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO05_GPIO1_IO05, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_59

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO04_GPIO1_IO04, 1U);  // J17.06  x
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO04_GPIO1_IO04, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_60

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO03_GPIO1_IO03, 1U);  // J17.07  x
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO03_GPIO1_IO03, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_61

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO02_GPIO1_IO02, 1U);  // No Pin On The Carrier Board 
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO02_GPIO1_IO02, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_62

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO01_GPIO1_IO01, 1U);  // J16.17
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO01_GPIO1_IO01, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);

#elif defined IRQ_63

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO00_GPIO1_IO00, 1U);  // J17.02
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO00_GPIO1_IO00, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);


#elif defined IRQ_64

    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO00_GPIO1_IO00, 1U);  
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO00_GPIO1_IO00, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);


#elif defined IRQ_65

    IOMUXC_SetPinMux(IOMUXC_ENET_MDC_GPIO1_IO16, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_ENET_MDC_GPIO1_IO16, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);


#elif defined IRQ_66

    IOMUXC_SetPinMux(IOMUXC_SD1_CLK_GPIO2_IO00, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_SD1_CLK_GPIO2_IO00, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 

#elif defined IRQ_67

    IOMUXC_SetPinMux(IOMUXC_SD2_DATA1_GPIO2_IO16, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_SD2_DATA1_GPIO2_IO16, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);                                                


#elif defined IRQ_68

    IOMUXC_SetPinMux(IOMUXC_NAND_DQS_GPIO3_IO14, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_NAND_DQS_GPIO3_IO14, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 

#elif defined IRQ_69

    IOMUXC_SetPinMux(IOMUXC_NAND_READY_B_GPIO3_IO16, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_NAND_READY_B_GPIO3_IO16, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 


#elif defined IRQ_70

    IOMUXC_SetPinMux(IOMUXC_SAI1_RXFS_GPIO4_IO00, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_SAI1_RXFS_GPIO4_IO00, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 


#elif defined IRQ_71

    IOMUXC_SetPinMux(IOMUXC_SAI1_TXD4_GPIO4_IO16, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_SAI1_TXD4_GPIO4_IO16, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 


#elif defined IRQ_72

    IOMUXC_SetPinMux(IOMUXC_ECSPI1_MISO_GPIO5_IO08, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_MISO_GPIO5_IO08, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 

    IOMUXC_SetPinMux(IOMUXC_ECSPI1_SS0_GPIO5_IO09, 0U); 
    IOMUXC_SetPinConfig(IOMUXC_ECSPI1_SS0_GPIO5_IO09, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);            

#elif defined IRQ_73

    IOMUXC_SetPinMux(IOMUXC_I2C2_SCL_GPIO5_IO16, 1U); 
    IOMUXC_SetPinConfig(IOMUXC_I2C2_SCL_GPIO5_IO16, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK); 

#endif    

    IOMUXC_SetPinMux(IOMUXC_UART4_RXD_UART4_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_RXD_UART4_RX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART4_TXD_UART4_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_TXD_UART4_TX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
