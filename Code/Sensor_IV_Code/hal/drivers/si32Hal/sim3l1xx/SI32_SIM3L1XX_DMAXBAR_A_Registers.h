//-----------------------------------------------------------------------------
// Copyright (c) 2012 by Silicon Laboratories 
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User 
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v10/License_Agreement_v10.htm
// Original content and implementation provided by Silicon Laboratories.
//-----------------------------------------------------------------------------
//
// This file applies to the SIM3L1XX_DMAXBAR_A module
//
// Script: 0.61
// Version: 1

#ifndef __SI32_DMAXBAR_A_REGISTERS_H__
#define __SI32_DMAXBAR_A_REGISTERS_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct SI32_DMAXBAR_A_DMAXBAR0_Struct
{
   union
   {
      struct
      {
         // DMA Channel 0 Peripheral Select
         volatile uint32_t CH0SEL: 4;
         // DMA Channel 1 Peripheral Select
         volatile uint32_t CH1SEL: 4;
         // DMA Channel 2 Peripheral Select
         volatile uint32_t CH2SEL: 4;
         // DMA Channel 3 Peripheral Select
         volatile uint32_t CH3SEL: 4;
         // DMA Channel 4 Peripheral Select
         volatile uint32_t CH4SEL: 4;
         // DMA Channel 5 Peripheral Select
         volatile uint32_t CH5SEL: 4;
         // DMA Channel 6 Peripheral Select
         volatile uint32_t CH6SEL: 4;
         // DMA Channel 7 Peripheral Select
         volatile uint32_t CH7SEL: 4;
      };
      volatile uint32_t U32;
   };
};

#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_MASK  0x0000000F
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT  0
// Service DTM0 A data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DTM0_A_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DTM0_A_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DTM0_A_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service SPI0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SPI0_TX_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SPI0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SPI0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service AES0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_AES0_TX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_AES0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_AES0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service USART0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_USART0_RX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_USART0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_USART0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_RX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service I2C0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_TX_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_I2C0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service EPCA0 capture data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_EPCA0_CAPTURE_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_EPCA0_CAPTURE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_EPCA0_CAPTURE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service TIMER0L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service TIMER0H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_TIMER0H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service DMA0T0 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Service DMA0T0 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_DMA0T0_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH0SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_MASK  0x000000F0
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT  4
// Service DTM0 B data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DTM0_B_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DTM0_B_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DTM0_B_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service SPI0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SPI0_RX_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SPI0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SPI0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service AES0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_AES0_RX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_AES0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_AES0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service USART0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_USART0_TX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_USART0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_USART0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service SARADC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SARADC0_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SARADC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SARADC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service EPCA0 capture data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CAPTURE_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CAPTURE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CAPTURE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service EPCA0 control data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CONTROL_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CONTROL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_EPCA0_CONTROL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service TIMER1L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service TIMER1H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_TIMER1H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service DMA0T1 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Service DMA0T1 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_DMA0T1_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH1SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_MASK  0x00000F00
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT  8
// Service DTM0 C data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM0_C_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM0_C_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM0_C_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service DTM2 A data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM2_A_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM2_A_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DTM2_A_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service ENCDEC0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_ENCDEC0_TX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_ENCDEC0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_ENCDEC0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service AES0 XOR data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_AES0_XOR_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_AES0_XOR_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_AES0_XOR_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service SPI1 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SPI1_TX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SPI1_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SPI1_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service USART0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_USART0_RX_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_USART0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_USART0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_I2C0_RX_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service IDAC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_IDAC0_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_IDAC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_IDAC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service TIMER0L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0L_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service TIMER0H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0H_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_TIMER0H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service DMA0T0 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_RISE_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Service DMA0T0 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_FALL_VALUE  11
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_DMA0T0_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH2SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_MASK  0x0000F000
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT  12
// Service DTM0 D data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM0_D_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM0_D_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM0_D_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service DTM2 B data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM2_B_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM2_B_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DTM2_B_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service ENCDEC0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_ENCDEC0_RX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_ENCDEC0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_ENCDEC0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service SPI1 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SPI1_RX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SPI1_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SPI1_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service USART0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_USART0_TX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_USART0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_USART0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_RX_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service I2C0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_TX_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_I2C0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service TIMER1L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service TIMER1H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_TIMER1H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service DMA0T1 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Service DMA0T1 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_DMA0T1_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH3SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_MASK  0x000F0000
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT  16
// Service DTM1 A data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM1_A_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM1_A_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM1_A_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service DTM2 C data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM2_C_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM2_C_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DTM2_C_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service SPI1 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SPI0_TX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SPI0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SPI0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service AES0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_AES0_TX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_AES0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_AES0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service SARADC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SARADC0_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SARADC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SARADC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service EPCA0 capture data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CAPTURE_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CAPTURE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CAPTURE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service EPCA0 control data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CONTROL_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CONTROL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_EPCA0_CONTROL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service TIMER0L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service TIMER0H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_TIMER0H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service DMA0T0 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Service DMA0T0 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_DMA0T0_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH4SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_MASK  0x00F00000
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT  20
// Service DTM1 B data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM1_B_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM1_B_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM1_B_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service DTM2 D data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM2_D_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM2_D_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DTM2_D_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service SPI0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SPI0_RX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SPI0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SPI0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service AES0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_AES0_RX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_AES0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_AES0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service USART0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_USART0_RX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_USART0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_USART0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_I2C0_RX_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service IDAC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_IDAC0_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_IDAC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_IDAC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service EPCA0 control data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_EPCA0_CONTROL_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_EPCA0_CONTROL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_EPCA0_CONTROL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service TIMER1L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1L_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service TIMER1H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1H_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_TIMER1H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service DMA0T1 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_RISE_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Service DMA0T1 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_FALL_VALUE  11
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_DMA0T1_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH5SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_MASK  0x0F000000
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT  24
// Service DTM1 C data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM1_C_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM1_C_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM1_C_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service DTM2 A data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM2_A_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM2_A_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DTM2_A_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service ENCDEC0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_ENCDEC0_TX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_ENCDEC0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_ENCDEC0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service AES0 XOR data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_AES0_XOR_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_AES0_XOR_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_AES0_XOR_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service USART0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_USART0_TX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_USART0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_USART0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_RX_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service I2C0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_TX_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_I2C0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service SARADC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SARADC0_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SARADC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SARADC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service TIMER0L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0L_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service TIMER0H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0H_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_TIMER0H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service DMA0T0 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_RISE_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Service DMA0T0 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_FALL_VALUE  11
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_DMA0T0_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH6SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_MASK  0xF0000000
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT  28
// Service DTM1 D data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM1_D_VALUE  0U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM1_D_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM1_D_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service DTM2 B data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM2_B_VALUE  1U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM2_B_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DTM2_B_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service ENCDEC0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_ENCDEC0_RX_VALUE  2U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_ENCDEC0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_ENCDEC0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service SPI1 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SPI1_TX_VALUE  3U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SPI1_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SPI1_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service USART0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_USART0_RX_VALUE  4U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_USART0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_USART0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service IDAC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_IDAC0_VALUE  5U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_IDAC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_IDAC0_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service TIMER1L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1L_VALUE  6U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1L_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service TIMER1H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1H_VALUE  7U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_TIMER1H_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service DMA0T1 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_RISE_VALUE  8U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Service DMA0T1 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_FALL_VALUE  9U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_DMA0T1_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_UNASSIGNED_VALUE  15U
#define SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR0_CH7SEL_SHIFT)



struct SI32_DMAXBAR_A_DMAXBAR1_Struct
{
   union
   {
      struct
      {
         // DMA Channel 8 Peripheral Select
         volatile uint32_t CH8SEL: 4;
         // DMA Channel 9 Peripheral Select
         volatile uint32_t CH9SEL: 4;
                  uint32_t reserved0: 24;
      };
      volatile uint32_t U32;
   };
};

#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_MASK  0x0000000F
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT  0
// Service DTM2 C data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DTM2_C_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DTM2_C_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DTM2_C_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service SPI0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI0_TX_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service SPI1 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI1_RX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI1_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SPI1_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service USART0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_USART0_TX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_USART0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_USART0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_I2C0_RX_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service SARADC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SARADC0_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SARADC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SARADC0_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service EPCA0 capture data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_EPCA0_CAPTURE_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_EPCA0_CAPTURE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_EPCA0_CAPTURE_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service TIMER0L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0L_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service TIMER0H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_TIMER0H_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service DMA0T0 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Service DMA0T0 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_DMA0T0_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH8SEL_SHIFT)

#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_MASK  0x000000F0
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT  4
// Service DTM2 D data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DTM2_D_VALUE  0
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DTM2_D_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DTM2_D_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service SPI0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SPI0_RX_VALUE  1
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SPI0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SPI0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service I2C0 RX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_RX_VALUE  2
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_RX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_RX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service I2C0 TX data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_TX_VALUE  3
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_TX_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_I2C0_TX_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service IDAC0 data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_IDAC0_VALUE  4
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_IDAC0_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_IDAC0_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service EPCA0 capture data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CAPTURE_VALUE  5
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CAPTURE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CAPTURE_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service EPCA0 control data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CONTROL_VALUE  6
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CONTROL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_EPCA0_CONTROL_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service TIMER1L overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1L_VALUE  7
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1L_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1L_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service TIMER1H overflow data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1H_VALUE  8
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1H_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_TIMER1H_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service DMA0T1 rising edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_RISE_VALUE  9
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_RISE_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_RISE_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Service DMA0T1 falling edge data requests.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_FALL_VALUE  10
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_FALL_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_DMA0T1_FALL_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)
// Unassigned.
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_UNASSIGNED_VALUE  15
#define SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_UNASSIGNED_U32 \
   (SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_UNASSIGNED_VALUE << SI32_DMAXBAR_A_DMAXBAR1_CH9SEL_SHIFT)



typedef struct SI32_DMAXBAR_A_Struct
{
   struct SI32_DMAXBAR_A_DMAXBAR0_Struct           DMAXBAR0       ; // Base Address + 0x0
   volatile uint32_t                               DMAXBAR0_SET;
   volatile uint32_t                               DMAXBAR0_CLR;
   uint32_t                                        reserved0;
   struct SI32_DMAXBAR_A_DMAXBAR1_Struct           DMAXBAR1       ; // Base Address + 0x10
   volatile uint32_t                               DMAXBAR1_SET;
   volatile uint32_t                               DMAXBAR1_CLR;
   uint32_t                                        reserved1;
} SI32_DMAXBAR_A_Type;

#ifdef __cplusplus
}
#endif

#endif // __SI32_DMAXBAR_A_REGISTERS_H__

//-eof--------------------------------------------------------------------------
