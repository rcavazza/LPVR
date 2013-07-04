/* system.h
 *
 * Machine generated for a CPU named "cpu" as defined in:
 * /root/LPM/workspace/demo_remix_syslib/../../DE3_SOPC.ptf
 *
 * Generated: 2013-07-05 01:46:34.902
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "DE3_SOPC"
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "STRATIXIII"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x01041030
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x01041030
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x01041030
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 50000000
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_BIG_ENDIAN 0
#define NIOS2_INTERRUPT_CONTROLLER_ID 0

#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x01020020
#define NIOS2_RESET_ADDR 0x01020000
#define NIOS2_BREAK_ADDR 0x01040820

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_CLOCK_CROSSING
#define __ALTERA_AVALON_SYSID
#define __TERASIC_I2S_TX
#define __ALTPLL

/*
 * jtag_uart configuration
 *
 */

#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_BASE 0x01041030
#define JTAG_UART_SPAN 8
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_READ_CHAR_STREAM ""
#define JTAG_UART_SHOWASCII 1
#define JTAG_UART_RELATIVEPATH 1
#define JTAG_UART_READ_LE 0
#define JTAG_UART_WRITE_LE 0
#define JTAG_UART_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 0
#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart

/*
 * onchip_mem configuration
 *
 */

#define ONCHIP_MEM_NAME "/dev/onchip_mem"
#define ONCHIP_MEM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEM_BASE 0x01020000
#define ONCHIP_MEM_SPAN 131072
#define ONCHIP_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEM_INIT_CONTENTS_FILE "onchip_mem"
#define ONCHIP_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEM_GUI_RAM_BLOCK_TYPE "Automatic"
#define ONCHIP_MEM_WRITEABLE 1
#define ONCHIP_MEM_DUAL_PORT 0
#define ONCHIP_MEM_SIZE_VALUE 131072
#define ONCHIP_MEM_SIZE_MULTIPLE 1
#define ONCHIP_MEM_USE_SHALLOW_MEM_BLOCKS 0
#define ONCHIP_MEM_INIT_MEM_CONTENT 1
#define ONCHIP_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEM_INSTANCE_ID "NONE"
#define ONCHIP_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEM_IGNORE_AUTO_BLOCK_TYPE_ASSIGNMENT 1
#define ONCHIP_MEM_CONTENTS_INFO ""
#define ALT_MODULE_CLASS_onchip_mem altera_avalon_onchip_memory2

/*
 * timer configuration
 *
 */

#define TIMER_NAME "/dev/timer"
#define TIMER_TYPE "altera_avalon_timer"
#define TIMER_BASE 0x00000000
#define TIMER_SPAN 32
#define TIMER_IRQ 2
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_ALWAYS_RUN 0
#define TIMER_FIXED_PERIOD 0
#define TIMER_SNAPSHOT 1
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_LOAD_VALUE 9999
#define TIMER_COUNTER_SIZE 32
#define TIMER_MULT 0.0010
#define TIMER_TICKS_PER_SEC 1000
#define TIMER_FREQ 10000000
#define ALT_MODULE_CLASS_timer altera_avalon_timer

/*
 * pio_led configuration
 *
 */

#define PIO_LED_NAME "/dev/pio_led"
#define PIO_LED_TYPE "altera_avalon_pio"
#define PIO_LED_BASE 0x00000030
#define PIO_LED_SPAN 16
#define PIO_LED_DO_TEST_BENCH_WIRING 0
#define PIO_LED_DRIVEN_SIM_VALUE 0
#define PIO_LED_HAS_TRI 0
#define PIO_LED_HAS_OUT 1
#define PIO_LED_HAS_IN 0
#define PIO_LED_CAPTURE 0
#define PIO_LED_DATA_WIDTH 4
#define PIO_LED_RESET_VALUE 0
#define PIO_LED_EDGE_TYPE "NONE"
#define PIO_LED_IRQ_TYPE "NONE"
#define PIO_LED_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_LED_FREQ 10000000
#define ALT_MODULE_CLASS_pio_led altera_avalon_pio

/*
 * pio_button configuration
 *
 */

#define PIO_BUTTON_NAME "/dev/pio_button"
#define PIO_BUTTON_TYPE "altera_avalon_pio"
#define PIO_BUTTON_BASE 0x00000020
#define PIO_BUTTON_SPAN 16
#define PIO_BUTTON_IRQ 4
#define PIO_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_BUTTON_DO_TEST_BENCH_WIRING 0
#define PIO_BUTTON_DRIVEN_SIM_VALUE 0
#define PIO_BUTTON_HAS_TRI 0
#define PIO_BUTTON_HAS_OUT 0
#define PIO_BUTTON_HAS_IN 1
#define PIO_BUTTON_CAPTURE 1
#define PIO_BUTTON_DATA_WIDTH 2
#define PIO_BUTTON_RESET_VALUE 0
#define PIO_BUTTON_EDGE_TYPE "FALLING"
#define PIO_BUTTON_IRQ_TYPE "EDGE"
#define PIO_BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_BUTTON_FREQ 10000000
#define ALT_MODULE_CLASS_pio_button altera_avalon_pio

/*
 * hdmi_tx_i2c_scl configuration
 *
 */

#define HDMI_TX_I2C_SCL_NAME "/dev/hdmi_tx_i2c_scl"
#define HDMI_TX_I2C_SCL_TYPE "altera_avalon_pio"
#define HDMI_TX_I2C_SCL_BASE 0x000000a0
#define HDMI_TX_I2C_SCL_SPAN 16
#define HDMI_TX_I2C_SCL_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_I2C_SCL_DRIVEN_SIM_VALUE 0
#define HDMI_TX_I2C_SCL_HAS_TRI 0
#define HDMI_TX_I2C_SCL_HAS_OUT 1
#define HDMI_TX_I2C_SCL_HAS_IN 0
#define HDMI_TX_I2C_SCL_CAPTURE 0
#define HDMI_TX_I2C_SCL_DATA_WIDTH 1
#define HDMI_TX_I2C_SCL_RESET_VALUE 0
#define HDMI_TX_I2C_SCL_EDGE_TYPE "NONE"
#define HDMI_TX_I2C_SCL_IRQ_TYPE "NONE"
#define HDMI_TX_I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_I2C_SCL_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_i2c_scl altera_avalon_pio

/*
 * hdmi_tx_i2c_sda configuration
 *
 */

#define HDMI_TX_I2C_SDA_NAME "/dev/hdmi_tx_i2c_sda"
#define HDMI_TX_I2C_SDA_TYPE "altera_avalon_pio"
#define HDMI_TX_I2C_SDA_BASE 0x000000b0
#define HDMI_TX_I2C_SDA_SPAN 16
#define HDMI_TX_I2C_SDA_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_I2C_SDA_DRIVEN_SIM_VALUE 0
#define HDMI_TX_I2C_SDA_HAS_TRI 1
#define HDMI_TX_I2C_SDA_HAS_OUT 0
#define HDMI_TX_I2C_SDA_HAS_IN 0
#define HDMI_TX_I2C_SDA_CAPTURE 0
#define HDMI_TX_I2C_SDA_DATA_WIDTH 1
#define HDMI_TX_I2C_SDA_RESET_VALUE 0
#define HDMI_TX_I2C_SDA_EDGE_TYPE "NONE"
#define HDMI_TX_I2C_SDA_IRQ_TYPE "NONE"
#define HDMI_TX_I2C_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_I2C_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_I2C_SDA_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_i2c_sda altera_avalon_pio

/*
 * clock_crossing_bridge configuration
 *
 */

#define CLOCK_CROSSING_BRIDGE_NAME "/dev/clock_crossing_bridge"
#define CLOCK_CROSSING_BRIDGE_TYPE "altera_avalon_clock_crossing"
#define CLOCK_CROSSING_BRIDGE_BASE 0x00000000
#define CLOCK_CROSSING_BRIDGE_SPAN 512
#define CLOCK_CROSSING_BRIDGE_UPSTREAM_FIFO_DEPTH 2048
#define CLOCK_CROSSING_BRIDGE_DOWNSTREAM_FIFO_DEPTH 32
#define CLOCK_CROSSING_BRIDGE_DATA_WIDTH 32
#define CLOCK_CROSSING_BRIDGE_NATIVE_ADDRESS_WIDTH 7
#define CLOCK_CROSSING_BRIDGE_USE_BYTE_ENABLE 1
#define CLOCK_CROSSING_BRIDGE_USE_BURST_COUNT 0
#define CLOCK_CROSSING_BRIDGE_MAXIMUM_BURST_SIZE 8
#define CLOCK_CROSSING_BRIDGE_UPSTREAM_USE_REGISTER 0
#define CLOCK_CROSSING_BRIDGE_DOWNSTREAM_USE_REGISTER 0
#define CLOCK_CROSSING_BRIDGE_SLAVE_SYNCHRONIZER_DEPTH 3
#define CLOCK_CROSSING_BRIDGE_MASTER_SYNCHRONIZER_DEPTH 3
#define CLOCK_CROSSING_BRIDGE_DEVICE_FAMILY "STRATIXIII"
#define ALT_MODULE_CLASS_clock_crossing_bridge altera_avalon_clock_crossing

/*
 * sysid configuration
 *
 */

#define SYSID_NAME "/dev/sysid"
#define SYSID_TYPE "altera_avalon_sysid"
#define SYSID_BASE 0x00000170
#define SYSID_SPAN 8
#define SYSID_ID 0u
#define SYSID_TIMESTAMP 1299203513u
#define SYSID_REGENERATE_VALUES 0
#define ALT_MODULE_CLASS_sysid altera_avalon_sysid

/*
 * hdmi_tx_reset_n configuration
 *
 */

#define HDMI_TX_RESET_N_NAME "/dev/hdmi_tx_reset_n"
#define HDMI_TX_RESET_N_TYPE "altera_avalon_pio"
#define HDMI_TX_RESET_N_BASE 0x00000050
#define HDMI_TX_RESET_N_SPAN 16
#define HDMI_TX_RESET_N_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_RESET_N_DRIVEN_SIM_VALUE 0
#define HDMI_TX_RESET_N_HAS_TRI 0
#define HDMI_TX_RESET_N_HAS_OUT 1
#define HDMI_TX_RESET_N_HAS_IN 0
#define HDMI_TX_RESET_N_CAPTURE 0
#define HDMI_TX_RESET_N_DATA_WIDTH 1
#define HDMI_TX_RESET_N_RESET_VALUE 0
#define HDMI_TX_RESET_N_EDGE_TYPE "NONE"
#define HDMI_TX_RESET_N_IRQ_TYPE "NONE"
#define HDMI_TX_RESET_N_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_RESET_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_RESET_N_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_reset_n altera_avalon_pio

/*
 * hdmi_tx_irq_n configuration
 *
 */

#define HDMI_TX_IRQ_N_NAME "/dev/hdmi_tx_irq_n"
#define HDMI_TX_IRQ_N_TYPE "altera_avalon_pio"
#define HDMI_TX_IRQ_N_BASE 0x00000040
#define HDMI_TX_IRQ_N_SPAN 16
#define HDMI_TX_IRQ_N_IRQ 3
#define HDMI_TX_IRQ_N_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HDMI_TX_IRQ_N_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_IRQ_N_DRIVEN_SIM_VALUE 0
#define HDMI_TX_IRQ_N_HAS_TRI 0
#define HDMI_TX_IRQ_N_HAS_OUT 0
#define HDMI_TX_IRQ_N_HAS_IN 1
#define HDMI_TX_IRQ_N_CAPTURE 1
#define HDMI_TX_IRQ_N_DATA_WIDTH 1
#define HDMI_TX_IRQ_N_RESET_VALUE 0
#define HDMI_TX_IRQ_N_EDGE_TYPE "FALLING"
#define HDMI_TX_IRQ_N_IRQ_TYPE "EDGE"
#define HDMI_TX_IRQ_N_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_IRQ_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_IRQ_N_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_irq_n altera_avalon_pio

/*
 * i2s_tx configuration
 *
 */

#define I2S_TX_NAME "/dev/i2s_tx"
#define I2S_TX_TYPE "terasic_i2s_tx"
#define I2S_TX_BASE 0x01041020
#define I2S_TX_SPAN 16
#define I2S_TX_IRQ 1
#define I2S_TX_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_i2s_tx terasic_i2s_tx

/*
 * hdmi_rx_reset_n configuration
 *
 */

#define HDMI_RX_RESET_N_NAME "/dev/hdmi_rx_reset_n"
#define HDMI_RX_RESET_N_TYPE "altera_avalon_pio"
#define HDMI_RX_RESET_N_BASE 0x00000060
#define HDMI_RX_RESET_N_SPAN 16
#define HDMI_RX_RESET_N_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_RESET_N_DRIVEN_SIM_VALUE 0
#define HDMI_RX_RESET_N_HAS_TRI 0
#define HDMI_RX_RESET_N_HAS_OUT 1
#define HDMI_RX_RESET_N_HAS_IN 0
#define HDMI_RX_RESET_N_CAPTURE 0
#define HDMI_RX_RESET_N_DATA_WIDTH 1
#define HDMI_RX_RESET_N_RESET_VALUE 0
#define HDMI_RX_RESET_N_EDGE_TYPE "NONE"
#define HDMI_RX_RESET_N_IRQ_TYPE "NONE"
#define HDMI_RX_RESET_N_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_RESET_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_RESET_N_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_reset_n altera_avalon_pio

/*
 * hdmi_rx_i2c_scl configuration
 *
 */

#define HDMI_RX_I2C_SCL_NAME "/dev/hdmi_rx_i2c_scl"
#define HDMI_RX_I2C_SCL_TYPE "altera_avalon_pio"
#define HDMI_RX_I2C_SCL_BASE 0x000000c0
#define HDMI_RX_I2C_SCL_SPAN 16
#define HDMI_RX_I2C_SCL_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_I2C_SCL_DRIVEN_SIM_VALUE 0
#define HDMI_RX_I2C_SCL_HAS_TRI 0
#define HDMI_RX_I2C_SCL_HAS_OUT 1
#define HDMI_RX_I2C_SCL_HAS_IN 0
#define HDMI_RX_I2C_SCL_CAPTURE 0
#define HDMI_RX_I2C_SCL_DATA_WIDTH 1
#define HDMI_RX_I2C_SCL_RESET_VALUE 0
#define HDMI_RX_I2C_SCL_EDGE_TYPE "NONE"
#define HDMI_RX_I2C_SCL_IRQ_TYPE "NONE"
#define HDMI_RX_I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_I2C_SCL_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_i2c_scl altera_avalon_pio

/*
 * hdmi_rx_i2c_sda configuration
 *
 */

#define HDMI_RX_I2C_SDA_NAME "/dev/hdmi_rx_i2c_sda"
#define HDMI_RX_I2C_SDA_TYPE "altera_avalon_pio"
#define HDMI_RX_I2C_SDA_BASE 0x000000d0
#define HDMI_RX_I2C_SDA_SPAN 16
#define HDMI_RX_I2C_SDA_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_I2C_SDA_DRIVEN_SIM_VALUE 0
#define HDMI_RX_I2C_SDA_HAS_TRI 1
#define HDMI_RX_I2C_SDA_HAS_OUT 0
#define HDMI_RX_I2C_SDA_HAS_IN 0
#define HDMI_RX_I2C_SDA_CAPTURE 0
#define HDMI_RX_I2C_SDA_DATA_WIDTH 1
#define HDMI_RX_I2C_SDA_RESET_VALUE 0
#define HDMI_RX_I2C_SDA_EDGE_TYPE "NONE"
#define HDMI_RX_I2C_SDA_IRQ_TYPE "NONE"
#define HDMI_RX_I2C_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_I2C_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_I2C_SDA_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_i2c_sda altera_avalon_pio

/*
 * hdmi_rx_irq_n configuration
 *
 */

#define HDMI_RX_IRQ_N_NAME "/dev/hdmi_rx_irq_n"
#define HDMI_RX_IRQ_N_TYPE "altera_avalon_pio"
#define HDMI_RX_IRQ_N_BASE 0x00000070
#define HDMI_RX_IRQ_N_SPAN 16
#define HDMI_RX_IRQ_N_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_IRQ_N_DRIVEN_SIM_VALUE 0
#define HDMI_RX_IRQ_N_HAS_TRI 0
#define HDMI_RX_IRQ_N_HAS_OUT 0
#define HDMI_RX_IRQ_N_HAS_IN 1
#define HDMI_RX_IRQ_N_CAPTURE 0
#define HDMI_RX_IRQ_N_DATA_WIDTH 1
#define HDMI_RX_IRQ_N_RESET_VALUE 0
#define HDMI_RX_IRQ_N_EDGE_TYPE "NONE"
#define HDMI_RX_IRQ_N_IRQ_TYPE "NONE"
#define HDMI_RX_IRQ_N_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_IRQ_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_IRQ_N_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_irq_n altera_avalon_pio

/*
 * hdmi_rx_hpd_n configuration
 *
 */

#define HDMI_RX_HPD_N_NAME "/dev/hdmi_rx_hpd_n"
#define HDMI_RX_HPD_N_TYPE "altera_avalon_pio"
#define HDMI_RX_HPD_N_BASE 0x00000080
#define HDMI_RX_HPD_N_SPAN 16
#define HDMI_RX_HPD_N_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_HPD_N_DRIVEN_SIM_VALUE 0
#define HDMI_RX_HPD_N_HAS_TRI 0
#define HDMI_RX_HPD_N_HAS_OUT 1
#define HDMI_RX_HPD_N_HAS_IN 0
#define HDMI_RX_HPD_N_CAPTURE 0
#define HDMI_RX_HPD_N_DATA_WIDTH 2
#define HDMI_RX_HPD_N_RESET_VALUE 0
#define HDMI_RX_HPD_N_EDGE_TYPE "NONE"
#define HDMI_RX_HPD_N_IRQ_TYPE "NONE"
#define HDMI_RX_HPD_N_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_HPD_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_HPD_N_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_hpd_n altera_avalon_pio

/*
 * hdmi_rx_cec configuration
 *
 */

#define HDMI_RX_CEC_NAME "/dev/hdmi_rx_cec"
#define HDMI_RX_CEC_TYPE "altera_avalon_pio"
#define HDMI_RX_CEC_BASE 0x00000090
#define HDMI_RX_CEC_SPAN 16
#define HDMI_RX_CEC_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_CEC_DRIVEN_SIM_VALUE 0
#define HDMI_RX_CEC_HAS_TRI 1
#define HDMI_RX_CEC_HAS_OUT 0
#define HDMI_RX_CEC_HAS_IN 0
#define HDMI_RX_CEC_CAPTURE 0
#define HDMI_RX_CEC_DATA_WIDTH 2
#define HDMI_RX_CEC_RESET_VALUE 0
#define HDMI_RX_CEC_EDGE_TYPE "NONE"
#define HDMI_RX_CEC_IRQ_TYPE "NONE"
#define HDMI_RX_CEC_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_CEC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_CEC_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_cec altera_avalon_pio

/*
 * hdmi_rx0_ep_scl configuration
 *
 */

#define HDMI_RX0_EP_SCL_NAME "/dev/hdmi_rx0_ep_scl"
#define HDMI_RX0_EP_SCL_TYPE "altera_avalon_pio"
#define HDMI_RX0_EP_SCL_BASE 0x00000100
#define HDMI_RX0_EP_SCL_SPAN 16
#define HDMI_RX0_EP_SCL_DO_TEST_BENCH_WIRING 0
#define HDMI_RX0_EP_SCL_DRIVEN_SIM_VALUE 0
#define HDMI_RX0_EP_SCL_HAS_TRI 1
#define HDMI_RX0_EP_SCL_HAS_OUT 0
#define HDMI_RX0_EP_SCL_HAS_IN 0
#define HDMI_RX0_EP_SCL_CAPTURE 0
#define HDMI_RX0_EP_SCL_DATA_WIDTH 1
#define HDMI_RX0_EP_SCL_RESET_VALUE 0
#define HDMI_RX0_EP_SCL_EDGE_TYPE "NONE"
#define HDMI_RX0_EP_SCL_IRQ_TYPE "NONE"
#define HDMI_RX0_EP_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX0_EP_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX0_EP_SCL_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx0_ep_scl altera_avalon_pio

/*
 * hdmi_rx0_ep_sda configuration
 *
 */

#define HDMI_RX0_EP_SDA_NAME "/dev/hdmi_rx0_ep_sda"
#define HDMI_RX0_EP_SDA_TYPE "altera_avalon_pio"
#define HDMI_RX0_EP_SDA_BASE 0x000000f0
#define HDMI_RX0_EP_SDA_SPAN 16
#define HDMI_RX0_EP_SDA_DO_TEST_BENCH_WIRING 0
#define HDMI_RX0_EP_SDA_DRIVEN_SIM_VALUE 0
#define HDMI_RX0_EP_SDA_HAS_TRI 1
#define HDMI_RX0_EP_SDA_HAS_OUT 0
#define HDMI_RX0_EP_SDA_HAS_IN 0
#define HDMI_RX0_EP_SDA_CAPTURE 0
#define HDMI_RX0_EP_SDA_DATA_WIDTH 1
#define HDMI_RX0_EP_SDA_RESET_VALUE 0
#define HDMI_RX0_EP_SDA_EDGE_TYPE "NONE"
#define HDMI_RX0_EP_SDA_IRQ_TYPE "NONE"
#define HDMI_RX0_EP_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX0_EP_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX0_EP_SDA_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx0_ep_sda altera_avalon_pio

/*
 * hdmi_rx1_ep_scl configuration
 *
 */

#define HDMI_RX1_EP_SCL_NAME "/dev/hdmi_rx1_ep_scl"
#define HDMI_RX1_EP_SCL_TYPE "altera_avalon_pio"
#define HDMI_RX1_EP_SCL_BASE 0x000000e0
#define HDMI_RX1_EP_SCL_SPAN 16
#define HDMI_RX1_EP_SCL_DO_TEST_BENCH_WIRING 0
#define HDMI_RX1_EP_SCL_DRIVEN_SIM_VALUE 0
#define HDMI_RX1_EP_SCL_HAS_TRI 1
#define HDMI_RX1_EP_SCL_HAS_OUT 0
#define HDMI_RX1_EP_SCL_HAS_IN 0
#define HDMI_RX1_EP_SCL_CAPTURE 0
#define HDMI_RX1_EP_SCL_DATA_WIDTH 1
#define HDMI_RX1_EP_SCL_RESET_VALUE 0
#define HDMI_RX1_EP_SCL_EDGE_TYPE "NONE"
#define HDMI_RX1_EP_SCL_IRQ_TYPE "NONE"
#define HDMI_RX1_EP_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX1_EP_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX1_EP_SCL_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx1_ep_scl altera_avalon_pio

/*
 * hdmi_rx1_ep_sda configuration
 *
 */

#define HDMI_RX1_EP_SDA_NAME "/dev/hdmi_rx1_ep_sda"
#define HDMI_RX1_EP_SDA_TYPE "altera_avalon_pio"
#define HDMI_RX1_EP_SDA_BASE 0x00000110
#define HDMI_RX1_EP_SDA_SPAN 16
#define HDMI_RX1_EP_SDA_DO_TEST_BENCH_WIRING 0
#define HDMI_RX1_EP_SDA_DRIVEN_SIM_VALUE 0
#define HDMI_RX1_EP_SDA_HAS_TRI 1
#define HDMI_RX1_EP_SDA_HAS_OUT 0
#define HDMI_RX1_EP_SDA_HAS_IN 0
#define HDMI_RX1_EP_SDA_CAPTURE 0
#define HDMI_RX1_EP_SDA_DATA_WIDTH 1
#define HDMI_RX1_EP_SDA_RESET_VALUE 0
#define HDMI_RX1_EP_SDA_EDGE_TYPE "NONE"
#define HDMI_RX1_EP_SDA_IRQ_TYPE "NONE"
#define HDMI_RX1_EP_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX1_EP_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX1_EP_SDA_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx1_ep_sda altera_avalon_pio

/*
 * hdmi_rx_sync configuration
 *
 */

#define HDMI_RX_SYNC_NAME "/dev/hdmi_rx_sync"
#define HDMI_RX_SYNC_TYPE "altera_avalon_pio"
#define HDMI_RX_SYNC_BASE 0x00000120
#define HDMI_RX_SYNC_SPAN 16
#define HDMI_RX_SYNC_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_SYNC_DRIVEN_SIM_VALUE 0
#define HDMI_RX_SYNC_HAS_TRI 0
#define HDMI_RX_SYNC_HAS_OUT 1
#define HDMI_RX_SYNC_HAS_IN 0
#define HDMI_RX_SYNC_CAPTURE 0
#define HDMI_RX_SYNC_DATA_WIDTH 1
#define HDMI_RX_SYNC_RESET_VALUE 0
#define HDMI_RX_SYNC_EDGE_TYPE "NONE"
#define HDMI_RX_SYNC_IRQ_TYPE "NONE"
#define HDMI_RX_SYNC_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_SYNC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_SYNC_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_sync altera_avalon_pio

/*
 * hdmi_tx_disp_mode configuration
 *
 */

#define HDMI_TX_DISP_MODE_NAME "/dev/hdmi_tx_disp_mode"
#define HDMI_TX_DISP_MODE_TYPE "altera_avalon_pio"
#define HDMI_TX_DISP_MODE_BASE 0x00000130
#define HDMI_TX_DISP_MODE_SPAN 16
#define HDMI_TX_DISP_MODE_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_DISP_MODE_DRIVEN_SIM_VALUE 0
#define HDMI_TX_DISP_MODE_HAS_TRI 0
#define HDMI_TX_DISP_MODE_HAS_OUT 1
#define HDMI_TX_DISP_MODE_HAS_IN 0
#define HDMI_TX_DISP_MODE_CAPTURE 0
#define HDMI_TX_DISP_MODE_DATA_WIDTH 4
#define HDMI_TX_DISP_MODE_RESET_VALUE 0
#define HDMI_TX_DISP_MODE_EDGE_TYPE "NONE"
#define HDMI_TX_DISP_MODE_IRQ_TYPE "NONE"
#define HDMI_TX_DISP_MODE_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_DISP_MODE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_DISP_MODE_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_disp_mode altera_avalon_pio

/*
 * hdmi_tx_mode_change configuration
 *
 */

#define HDMI_TX_MODE_CHANGE_NAME "/dev/hdmi_tx_mode_change"
#define HDMI_TX_MODE_CHANGE_TYPE "altera_avalon_pio"
#define HDMI_TX_MODE_CHANGE_BASE 0x00000140
#define HDMI_TX_MODE_CHANGE_SPAN 16
#define HDMI_TX_MODE_CHANGE_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_MODE_CHANGE_DRIVEN_SIM_VALUE 0
#define HDMI_TX_MODE_CHANGE_HAS_TRI 0
#define HDMI_TX_MODE_CHANGE_HAS_OUT 1
#define HDMI_TX_MODE_CHANGE_HAS_IN 0
#define HDMI_TX_MODE_CHANGE_CAPTURE 0
#define HDMI_TX_MODE_CHANGE_DATA_WIDTH 1
#define HDMI_TX_MODE_CHANGE_RESET_VALUE 0
#define HDMI_TX_MODE_CHANGE_EDGE_TYPE "NONE"
#define HDMI_TX_MODE_CHANGE_IRQ_TYPE "NONE"
#define HDMI_TX_MODE_CHANGE_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_MODE_CHANGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_MODE_CHANGE_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_mode_change altera_avalon_pio

/*
 * hdmi_tx_vpg_color configuration
 *
 */

#define HDMI_TX_VPG_COLOR_NAME "/dev/hdmi_tx_vpg_color"
#define HDMI_TX_VPG_COLOR_TYPE "altera_avalon_pio"
#define HDMI_TX_VPG_COLOR_BASE 0x00000150
#define HDMI_TX_VPG_COLOR_SPAN 16
#define HDMI_TX_VPG_COLOR_DO_TEST_BENCH_WIRING 0
#define HDMI_TX_VPG_COLOR_DRIVEN_SIM_VALUE 0
#define HDMI_TX_VPG_COLOR_HAS_TRI 0
#define HDMI_TX_VPG_COLOR_HAS_OUT 1
#define HDMI_TX_VPG_COLOR_HAS_IN 0
#define HDMI_TX_VPG_COLOR_CAPTURE 0
#define HDMI_TX_VPG_COLOR_DATA_WIDTH 2
#define HDMI_TX_VPG_COLOR_RESET_VALUE 0
#define HDMI_TX_VPG_COLOR_EDGE_TYPE "NONE"
#define HDMI_TX_VPG_COLOR_IRQ_TYPE "NONE"
#define HDMI_TX_VPG_COLOR_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_TX_VPG_COLOR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_TX_VPG_COLOR_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_tx_vpg_color altera_avalon_pio

/*
 * hdmi_rx_edid_wp configuration
 *
 */

#define HDMI_RX_EDID_WP_NAME "/dev/hdmi_rx_edid_wp"
#define HDMI_RX_EDID_WP_TYPE "altera_avalon_pio"
#define HDMI_RX_EDID_WP_BASE 0x00000160
#define HDMI_RX_EDID_WP_SPAN 16
#define HDMI_RX_EDID_WP_DO_TEST_BENCH_WIRING 0
#define HDMI_RX_EDID_WP_DRIVEN_SIM_VALUE 0
#define HDMI_RX_EDID_WP_HAS_TRI 0
#define HDMI_RX_EDID_WP_HAS_OUT 1
#define HDMI_RX_EDID_WP_HAS_IN 0
#define HDMI_RX_EDID_WP_CAPTURE 0
#define HDMI_RX_EDID_WP_DATA_WIDTH 1
#define HDMI_RX_EDID_WP_RESET_VALUE 1
#define HDMI_RX_EDID_WP_EDGE_TYPE "NONE"
#define HDMI_RX_EDID_WP_IRQ_TYPE "NONE"
#define HDMI_RX_EDID_WP_BIT_CLEARING_EDGE_REGISTER 0
#define HDMI_RX_EDID_WP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HDMI_RX_EDID_WP_FREQ 10000000
#define ALT_MODULE_CLASS_hdmi_rx_edid_wp altera_avalon_pio

/*
 * pll configuration
 *
 */

#define PLL_NAME "/dev/pll"
#define PLL_TYPE "altpll"
#define PLL_BASE 0x01000000
#define PLL_SPAN 16
#define ALT_MODULE_CLASS_pll altpll

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       ONCHIP_MEM
#define ALT_RODATA_DEVICE     ONCHIP_MEM
#define ALT_RWDATA_DEVICE     ONCHIP_MEM
#define ALT_EXCEPTIONS_DEVICE ONCHIP_MEM
#define ALT_RESET_DEVICE      ONCHIP_MEM

/*
 * The text section is initialised so no bootloader will be required.
 * Set a variable to tell crt0.S to provide code at the reset address and
 * to initialise rwdata if appropriate.
 */

#define ALT_NO_BOOTLOADER


#endif /* __SYSTEM_H_ */
