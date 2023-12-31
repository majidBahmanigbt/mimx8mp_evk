/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_debug_console.h"
#include "fsl_gpio.h"
#include "defines.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
//#define EXAMPLE_LED_GPIO     GPIO3
//#define EXAMPLE_LED_GPIO_PIN 16U

#if defined IRQ_56  // GPIO1_07    J3.18

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     7U

    #define TEST_IRQ_TYPE    GPIO1_INT7_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler
    
#elif defined IRQ_57   // GPIO1_06    J17.01

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     6U

    #define TEST_IRQ_TYPE    GPIO1_INT6_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_58   // GPIO1_05    J16.17

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     5U

    #define TEST_IRQ_TYPE    GPIO1_INT5_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_59   // GPIO1_04    J17.06

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     4U

    #define TEST_IRQ_TYPE    GPIO1_INT4_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_60   // GPIO1_03    J17.07

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     3U

    #define TEST_IRQ_TYPE    GPIO1_INT3_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_61   // GPIO1_02    No Pin On The Carrier Board

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     2U

    #define TEST_IRQ_TYPE    GPIO1_INT2_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_62   // GPIO1_01    J16.17

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     1U

    #define TEST_IRQ_TYPE    GPIO1_INT1_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler        

#elif defined IRQ_63   // GPIO1_00    J17.02

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     0U

    #define TEST_IRQ_TYPE    GPIO1_INT0_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_64   // GPIO1  0-15

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     0U

    #define TEST_IRQ_TYPE    GPIO1_Combined_0_15_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_0_15_IRQHandler

#elif defined IRQ_65   // GPIO1  16-31

    #define TEST_IRQ_GPIO    GPIO1
    #define TEST_IRQ_PIN     16U

    #define TEST_IRQ_TYPE    GPIO1_Combined_16_31_IRQn
    #define TEST_IRQ_HANDLER GPIO1_Combined_16_31_IRQHandler

#elif defined IRQ_66   // GPIO2  0-15

    #define TEST_IRQ_GPIO    GPIO2
    #define TEST_IRQ_PIN     0U

    #define TEST_IRQ_TYPE    GPIO2_Combined_0_15_IRQn
    #define TEST_IRQ_HANDLER GPIO2_Combined_0_15_IRQHandler

#elif defined IRQ_67   // GPIO2  16-31

    #define TEST_IRQ_GPIO    GPIO2
    #define TEST_IRQ_PIN     16U

    #define TEST_IRQ_TYPE    GPIO2_Combined_16_31_IRQn
    #define TEST_IRQ_HANDLER GPIO2_Combined_16_31_IRQHandler

#elif defined IRQ_68 // GPIO3  0-15

    #define TEST_IRQ_GPIO    GPIO3
    #define TEST_IRQ_PIN     14U

    #define TEST_IRQ_TYPE    GPIO3_Combined_0_15_IRQn
    #define TEST_IRQ_HANDLER GPIO3_Combined_0_15_IRQHandler

#elif defined IRQ_69  // GPIO3  16-31

    #define TEST_IRQ_GPIO    GPIO3
    #define TEST_IRQ_PIN     16U

    #define TEST_IRQ_TYPE    GPIO3_Combined_16_31_IRQn
    #define TEST_IRQ_HANDLER GPIO3_Combined_16_31_IRQHandler

#elif defined IRQ_70  // GPIO4  00-15

    #define TEST_IRQ_GPIO    GPIO4
    #define TEST_IRQ_PIN     0U

    #define TEST_IRQ_TYPE    GPIO4_Combined_0_15_IRQn
    #define TEST_IRQ_HANDLER GPIO4_Combined_0_15_IRQHandler


#elif defined IRQ_71  // GPIO4  16-31

    #define TEST_IRQ_GPIO    GPIO4
    #define TEST_IRQ_PIN     16U

    #define TEST_IRQ_TYPE    GPIO4_Combined_16_31_IRQn
    #define TEST_IRQ_HANDLER GPIO4_Combined_16_31_IRQHandler


#elif defined IRQ_72  // GPIO5  00-15

    #define TEST_IRQ_GPIO    GPIO5
    #define TEST_IRQ_PIN     8U

    #define TEST_IRQ_TYPE    GPIO5_Combined_0_15_IRQn
    #define TEST_IRQ_HANDLER GPIO5_Combined_0_15_IRQHandler


#elif defined IRQ_73  // GPIO5  16-31

    #define TEST_IRQ_GPIO    GPIO5
    #define TEST_IRQ_PIN     16U

    #define TEST_IRQ_TYPE    GPIO5_Combined_16_31_IRQn
    #define TEST_IRQ_HANDLER GPIO5_Combined_16_31_IRQHandler        

#endif

#define TEST_OUTPUT_GPIO GPIO5
#define TEST_OUTPUT_PIN  9U  

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* The PIN status */
volatile bool g_pinSet = false;
int interrupt_counter = 0;

/*******************************************************************************
 * Code
 ******************************************************************************/

void TEST_IRQ_HANDLER(){

    //SDK_DelayAtLeastUs(20, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);
    // PRINTF("Interrupt: %d\r\n" , interrupt_counter);
    // interrupt_counter ++;
    // if(interrupt_counter > 500){
    //     interrupt_counter = 0;
    // }

// #if (defined(FSL_FEATURE_IGPIO_HAS_DR_TOGGLE) && (FSL_FEATURE_IGPIO_HAS_DR_TOGGLE == 1))
//         GPIO_PortToggle(TEST_OUTPUT_GPIO, 1u << TEST_OUTPUT_PIN);
// #else
//         if (g_pinSet)
//         {
//             GPIO_PinWrite(TEST_OUTPUT_GPIO, TEST_OUTPUT_PIN, 0U);
//             g_pinSet = false;
//         }
//         else
//         {
//             GPIO_PinWrite(TEST_OUTPUT_GPIO, TEST_OUTPUT_PIN, 1U);
//             g_pinSet = true;
//         }
// #endif

    GPIO5->DR = 1u << 9;
    GPIO5->DR = 0u;
    //GPIO_PinWrite(TEST_OUTPUT_GPIO, TEST_OUTPUT_PIN, 1U);
    //GPIO_PinWrite(TEST_OUTPUT_GPIO, TEST_OUTPUT_PIN, 0U);

    GPIO_PortClearInterruptFlags(TEST_IRQ_GPIO , 1U << TEST_IRQ_PIN);
    //GPIO_PortEnableInterrupts(TEST_IRQ_GPIO, 1U << TEST_IRQ_PIN);
    __DSB();

}

/*!
 * @brief Main function
 */
int main(void)
{
    /* Define the init structure for the output LED pin*/
    gpio_pin_config_t output_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};
    gpio_pin_config_t exi_config = {kGPIO_DigitalInput , 0, kGPIO_IntRisingOrFallingEdge};

    /* Board pin, clock, debug console init */
    /* M7 has its local cache and enabled by default,
     * need to set smart subsystems (0x28000000 ~ 0x3FFFFFFF)
     * non-cacheable before accessing this address region */
    BOARD_InitMemory();

    /* Board specific RDC settings */
    BOARD_RdcInit();

    BOARD_InitBootPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    PRINTF("\r\n Test Interrupt %d: 2023/11/16 14:46\r\n" , TEST_IRQ_TYPE);
    GPIO_PinSetInterruptConfig(TEST_IRQ_GPIO , TEST_IRQ_PIN , kGPIO_IntRisingOrFallingEdge);
    
    GPIO_PinInit(TEST_OUTPUT_GPIO , TEST_OUTPUT_PIN , &output_config);
    GPIO_PinInit(TEST_IRQ_GPIO , TEST_IRQ_PIN , &exi_config);
    
    GPIO_EnableInterrupts(TEST_IRQ_GPIO, 1U << TEST_IRQ_PIN);
    // EnableIRQ(TEST_IRQ_TYPE);
    NVIC_EnableIRQ(TEST_IRQ_TYPE);
    NVIC_SetPriority(TEST_IRQ_TYPE , 1);

    while (1)
    {
//         SDK_DelayAtLeastUs(100000, SDK_DEVICE_MAXIMUM_CPU_CLOCK_FREQUENCY);
// #if (defined(FSL_FEATURE_IGPIO_HAS_DR_TOGGLE) && (FSL_FEATURE_IGPIO_HAS_DR_TOGGLE == 1))
//         GPIO_PortToggle(EXAMPLE_LED_GPIO, 1u << EXAMPLE_LED_GPIO_PIN);
// #else
//         if (g_pinSet)
//         {
//             GPIO_PinWrite(EXAMPLE_LED_GPIO, EXAMPLE_LED_GPIO_PIN, 0U);
//             g_pinSet = false;
//         }
//         else
//         {
//             GPIO_PinWrite(EXAMPLE_LED_GPIO, EXAMPLE_LED_GPIO_PIN, 1U);
//             g_pinSet = true;
//         }
// #endif 
/* FSL_FEATURE_IGPIO_HAS_DR_TOGGLE */
    }
}
