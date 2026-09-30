// SPDX-License-Identifier: Zlib
//
// Copyright (c) 2026 Antonio Niño Díaz

// Note: This library is still a prototype. The names of the registers in this
// file may change in the future.

#ifndef LIBATH6K_REGISTERS_H__
#define LIBATH6K_REGISTERS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <ath6k/types.h>

// Clock/RTC Registers
// -------------------

#define WLAN_RESET_CONTROL                  (*(vu32*)0x004000)
#define WLAN_XTAL_CONTROL                   (*(vu32*)0x004004)
#define WLAN_TCXO_DETECT                    (*(vu32*)0x004008)
#define WLAN_XTAL_TEST                      (*(vu32*)0x00400C)
#define WLAN_QUADRATURE                     (*(vu32*)0x004010)
#define WLAN_PLL_CONTROL                    (*(vu32*)0x004014)
#define WLAN_PLL_SETTLE                     (*(vu32*)0x004018)
#define WLAN_XTAL_SETTLE                    (*(vu32*)0x00401C)
#define WLAN_CPU_CLOCK                      (*(vu32*)0x004020)
#define WLAN_CLOCK_OUT                      (*(vu32*)0x004024)
#define WLAN_CLOCK_CONTROL                  (*(vu32*)0x004028)
#define WLAN_BIAS_OVERRIDE                  (*(vu32*)0x00402C)

// Watchdog Timer
#define WLAN_WDT_CONTROL                    (*(vu32*)0x004030)
#define WLAN_WDT_STATUS                     (*(vu32*)0x004034)
#define WLAN_WDT                            (*(vu32*)0x004038)
#define WLAN_WDT_COUNT                      (*(vu32*)0x00403C)
#define WLAN_WDT_RESET                      (*(vu32*)0x004040)

// Interrupt status
#define WLAN_INT_STATUS                     (*(vu32*)0x004044

// Low-Freq Timers
#define WLAN_LF_TIMER0                      (*(vu32*)0x004048)
#define WLAN_LF_TIMER_COUNT0                (*(vu32*)0x00404C)
#define WLAN_LF_TIMER_CONTROL0              (*(vu32*)0x004050)
#define WLAN_LF_TIMER_STATUS0               (*(vu32*)0x004054)
#define WLAN_LF_TIMER1                      (*(vu32*)0x004058)
#define WLAN_LF_TIMER_COUNT1                (*(vu32*)0x00405C)
#define WLAN_LF_TIMER_CONTROL1              (*(vu32*)0x004060)
#define WLAN_LF_TIMER_STATUS1               (*(vu32*)0x004064)
#define WLAN_LF_TIMER2                      (*(vu32*)0x004068)
#define WLAN_LF_TIMER_COUNT2                (*(vu32*)0x00406C)
#define WLAN_LF_TIMER_CONTROL2              (*(vu32*)0x004070)
#define WLAN_LF_TIMER_STATUS2               (*(vu32*)0x004074)
#define WLAN_LF_TIMER3                      (*(vu32*)0x004078)
#define WLAN_LF_TIMER_COUNT3                (*(vu32*)0x00407C)
#define WLAN_LF_TIMER_CONTROL3              (*(vu32*)0x004080)
#define WLAN_LF_TIMER_STATUS3               (*(vu32*)0x004084)

// High-Freq Timer
#define WLAN_HF_TIMER                       (*(vu32*)0x004088)
#define WLAN_HF_TIMER_COUNT                 (*(vu32*)0x00408C)
#define WLAN_HF_LF_COUNT                    (*(vu32*)0x004090)
#define WLAN_HF_TIMER_CONTROL               (*(vu32*)0x004094)
#define WLAN_HF_TIMER_STATUS                (*(vu32*)0x004098)

// Real-TIme Clock
#define WLAN_RTC_CONTROL                    (*(vu32*)0x00409C)
#define WLAN_RTC_TIME                       (*(vu32*)0x0040A0)
#define WLAN_RTC_DATE                       (*(vu32*)0x0040A4)
#define WLAN_RTC_SET_TIME                   (*(vu32*)0x0040A8)
#define WLAN_RTC_SET_DATE                   (*(vu32*)0x0040AC)
#define WLAN_RTC_SET_ALARM                  (*(vu32*)0x0040B0)
#define WLAN_RTC_CONFIG                     (*(vu32*)0x0040B4)
#define WLAN_RTC_ALARM_STATUS               (*(vu32*)0x0040B8)

#define WLAN_UART_WAKEUP                    (*(vu32*)0x0040BC)
#define WLAN_RESET_CAUSE                    (*(vu32*)0x0040C0)
#define WLAN_SYSTEM_SLEEP                   (*(vu32*)0x0040C4)
#define WLAN_SDIO_WRAPPER                   (*(vu32*)0x0040C8)
#define WLAN_MAC_SLEEP_CONTROL              (*(vu32*)0x0040CC)
#define WLAN_KEEP_AWAKE                     (*(vu32*)0x0040D0)

#define WLAN_LPO_CAL_TIME                   (*(vu32*)0x0040D4)
#define WLAN_LPO_INIT_DIVIDEND_INT          (*(vu32*)0x0040D8)
#define WLAN_LPO_INIT_DIVIDEND_FRACTION     (*(vu32*)0x0040DC)
#define WLAN_LPO_CAL                        (*(vu32*)0x0040E0)
#define WLAN_LPO_CAL_TEST_CONTROL           (*(vu32*)0x0040E4)
#define WLAN_LPO_CAL_TEST_STATUS            (*(vu32*)0x0040E8)

#define WLAN_CHIP_ID                        (*(vu32*)0x0040EC)
#define WLAN_DERIVED_RTC_CLK                (*(vu32*)0x0040F0)
#define MAC_PCU_SLP32_MODE                  (*(vu32*)0x0040F4)
#define MAC_PCU_SLP32_WAKE                  (*(vu32*)0x0040F8)
#define MAC_PCU_SLP32_INC                   (*(vu32*)0x0040FC)
#define MAC_PCU_SLP_MIB1                    (*(vu32*)0x004100)
#define MAC_PCU_SLP_MIB2                    (*(vu32*)0x004104)
#define MAC_PCU_SLP_MIB3                    (*(vu32*)0x004108)
#define MAC_PCU_SLP_BEACON                  (*(vu32*)0x00410C)

#define WLAN_POWER_REG                      (*(vu32*)0x004110)
#define WLAN_CORE_CLK_CTRL                  (*(vu32*)0x004114)

//#define PAD0                                ((vu8*)0x004118) // 0..7
#define SDIO_SETUP_CIRCUIT                  ((vu32*)0x004120) // 0..7
#define SDIO_SETUP_CONFIG                   (*(vu32*)0x004140)
#define CPU_SETUP_CONFIG                    (*(vu32*)0x004144)
//#define PAD1                                ((vu8*)0x004148) // 0..23
#define CPU_SETUP_CIRCUIT                   ((vu32*)0x004160) // 0..7
#define BB_SETUP_CONFIG                     (*(vu32*)0x004180)
//#define PAD2                                ((vu8*)0x004184) // 0..27
#define BB_SETUP_CIRCUIT                    ((vu32*)0x0041A0) // 0..7

#define WLAN_GPIO_WAKEUP_CONTROL            (*(vu32*)0x0041C0)

// Memory Controller
// -----------------

// Rom Patches
#define WLAN_MC_TCAM_VALID                  ((vu32*)0x008000) // 0..31
#define WLAN_MC_TCAM_MASK                   ((vu32*)0x008080) // 0..31
#define WLAN_MC_TCAM_COMPARE                ((vu32*)0x008100) // 0..31
#define WLAN_MC_TCAM_TARGET                 ((vu32*)0x008180) // 0..31

// ADDR_ERROR
#define WLAN_ADDR_ERROR_CONTROL             (*(vu32*)0x008200)
#define WLAN_ADDR_ERROR_STATUS              (*(vu32*)0x008204)

// Serial UART
// -----------

#define WLAN_UART_RBR   (*(vu32*)0x00C000)  // RX Data FIFO (R) (when DLAB=0)
#define WLAN_UART_THR   (*(vu32*)0x00C000)  // TX Data FIFO (W) (when DLAB=0)
#define WLAN_UART_DLL   (*(vu32*)0x00C000)  // Baudrate Divisor LSB (R/W) (when DLAB=1)
#define WLAN_UART_IER   (*(vu32*)0x00C004)  // Interrupt Control (R/W)    (when DLAB=0)
#define WLAN_UART_DLH   (*(vu32*)0x00C004)  // Baudrate Divisor MSB (R/W) (when DLAB=1)
#define WLAN_UART_IIR   (*(vu32*)0x00C008)  // Interrupt Status (R)
#define WLAN_UART_FCR   (*(vu32*)0x00C008)  // FIFO Control (W)
#define WLAN_UART_LCR   (*(vu32*)0x00C00C)  // Character Format Control (R/W)
#define WLAN_UART_MCR   (*(vu32*)0x00C010)  // Handshaking Control (R/W)
#define WLAN_UART_LSR   (*(vu32*)0x00C014)  // RX/TX Status (R) (W=don't do)
#define WLAN_UART_MSR   (*(vu32*)0x00C018)  // Handshaking Status (R) (W=don't do)
#define WLAN_UART_SCR   (*(vu32*)0x00C01C)  // Scratch (R/W)
#define WLAN_UART_SRBR  (*(vu32*)0x00C020)  // (mirror of RBR?)          (when DLAB=0?)
//#define PAD0            ((vu8*)0x00C024)    // 0..3
#define WLAN_UART_SIIR  (*(vu32*)0x00C028)  // (mirror or IIR?)
#define WLAN_UART_xMWR  (*(vu32*)0x00C02C)  // Whatever "M Write Register?"
//#define PAD1            ((vu8*)0x00C030h    // 0..3
#define WLAN_UART_SLSR  (*(vu32*)0x00C034)  // (mirror or LSR?) <-- used by AR6002 ROM
#define WLAN_UART_SMSR  (*(vu32*)0x00C038)  // (mirror of MSR?)
#define WLAN_UART_xMRR  (*(vu32*)0x00C03C)  // Whatever "M Read Register?"

// Serial I2C/SPI Interface
// ------------------------

#define SI_CONFIG       (*(vu32*)0x010000)
#define SI_CS           (*(vu32*)0x010004)
#define SI_TX_DATA0     (*(vu32*)0x010008)
#define SI_TX_DATA1     (*(vu32*)0x01000C)
#define SI_RX_DATA0     (*(vu32*)0x010010)
#define SI_RX_DATA1     (*(vu32*)0x010014)

// GPIO Registers
// --------------

#define WLAN_GPIO_OUT           (*(vu32*)0x014000) // GPIO Output Data
#define WLAN_GPIO_OUT_W1TS      (*(vu32*)0x014004) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_OUT_W1TC      (*(vu32*)0x014008)

#define WLAN_GPIO_ENABLE        (*(vu32*)0x01400C) // GPIO Output Enable
#define WLAN_GPIO_ENABLE_W1TS   (*(vu32*)0x014010) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_ENABLE_W1TC   (*(vu32*)0x014014)

#define WLAN_GPIO_IN            (*(vu32*)0x014018) // GPIO Input

#define WLAN_GPIO_STATUS        (*(vu32*)0x01401C) // GPIO Interrupt Status
#define WLAN_GPIO_STATUS_W1TS   (*(vu32*)0x014020) // (direct, and Write-1-To-Set/Clr)
#define WLAN_GPIO_STATUS_W1TC   (*(vu32*)0x014024)

#define WLAN_GPIO_PIN0          (*(vu32*)0x014028) // GPIO0  Bluetooth coex BT_PRIORITY
#define WLAN_GPIO_PIN1          (*(vu32*)0x01402C) // GPIO1  Bluetooth coex WLAN_ACTIVE
#define WLAN_GPIO_PIN2          (*(vu32*)0x014030) // GPIO2  Bluetooth coex BT_FREQ    ;I2C SCL
#define WLAN_GPIO_PIN3          (*(vu32*)0x014034) // GPIO3  Bluetooth coex BT_ACTIVE  ;I2C SDA
#define WLAN_GPIO_PIN4          (*(vu32*)0x014038) // GPIO4  SDIO/GSPI interface select
#define WLAN_GPIO_PIN5          (*(vu32*)0x01403C) // GPIO5  SDIO/GSPI interface select
#define WLAN_GPIO_PIN6          (*(vu32*)0x014040) // GPIO6
#define WLAN_GPIO_PIN7          (*(vu32*)0x014044) // GPIO7  TRST for JTAG debug
#define WLAN_GPIO_PIN8          (*(vu32*)0x014048) // GPIO8  external 32kHz clock in
#define WLAN_GPIO_PIN9          (*(vu32*)0x01404C) // GPIO9  I2C SCL  or SPI CLK
#define WLAN_GPIO_PIN10         (*(vu32*)0x014050) // GPIO10 I2C SDA  or SPI MISO
#define WLAN_GPIO_PIN11         (*(vu32*)0x014054) // GPIO11 UART RXD or SPI MOSI
#define WLAN_GPIO_PIN12         (*(vu32*)0x014058) // GPIO12 UART TXD or SPI /CS
#define WLAN_GPIO_PIN13         (*(vu32*)0x01405C) // GPIO13 Reset in for JTAG debug
#define WLAN_GPIO_PIN14         (*(vu32*)0x014060) // GPIO14 UART CTS
#define WLAN_GPIO_PIN15         (*(vu32*)0x014064) // GPIO15 UART RTS
#define WLAN_GPIO_PIN16         (*(vu32*)0x014068) // GPIO16
#define WLAN_GPIO_PIN17         (*(vu32*)0x01406C) // GPIO17
#define SDIO_PIN                (*(vu32*)0x014070) // Config: Pad Pull/Strength
#define CLK_REQ_PIN             (*(vu32*)0x014074) // Config: Pad Pull/Strength/AteOeLow

#define WLAN_SIGMA_DELTA        (*(vu32*)0x014078)
#define WLAN_DEBUG_CONTROL      (*(vu32*)0x01407C)
#define WLAN_DEBUG_INPUT_SEL    (*(vu32*)0x014080)
#define WLAN_DEBUG_OUT          (*(vu32*)0x014084)
#define LA_CONTROL              (*(vu32*)0x014088)
#define LA_CLOCK                (*(vu32*)0x01408C)
#define LA_STATUS               (*(vu32*)0x014090)
#define LA_TRIGGER_SAMPLE       (*(vu32*)0x014094)
#define LA_TRIGGER_POSITION     (*(vu32*)0x014098)
#define LA_PRE_TRIGGER          (*(vu32*)0x01409C)
#define LA_POST_TRIGGER         (*(vu32*)0x0140A0)
#define LA_FILTER_CONTROL       (*(vu32*)0x0140A4)
#define LA_FILTER_DATA          (*(vu32*)0x0140A8)
#define LA_FILTER_WILDCARD      (*(vu32*)0x0140AC)
#define LA_TRIGGERA_DATA        (*(vu32*)0x0140B0)
#define LA_TRIGGERA_WILDCARD    (*(vu32*)0x0140B4)
#define LA_TRIGGERB_DATA        (*(vu32*)0x0140B8)
#define LA_TRIGGERB_WILDCARD    (*(vu32*)0x0140BC)
#define LA_TRIGGER              (*(vu32*)0x0140C0)
#define LA_FIFO                 (*(vu32*)0x0140C4)
#define LA_DATA                 ((vu32*)0x0140C8) // 0..1

#define ANT_PIN                 (*(vu32*)0x0140D0) // Config: Pad Pull/Strength
#define ANTD_PIN                (*(vu32*)0x0140D4) // Config: Pad Pull
#define GPIO_PIN                (*(vu32*)0x0140D8) // Config: Pad Pull/Strength
#define GPIO_H_PIN              (*(vu32*)0x0140DC) // Config: Pad Pull
#define BT_PIN                  (*(vu32*)0x0140E0) // Config: Pad Pull/Strength
#define BT_WLAN_PIN             (*(vu32*)0x0140E4) // Config: Pad Pull
#define SI_UART_PIN             (*(vu32*)0x0140E8) // Config: Pad Pull/Strength
#define CLK32K_PIN              (*(vu32*)0x0140EC) // Config: Pad Pull

#define WLAN_RESET_TUPLE_STATUS (*(vu32*)0x0140F0)

// MBOX Registers
// --------------

#define WLAN_MBOX_FIFO                      ((vu32*)0x018000) // 0..3
#define WLAN_MBOX_FIFO_STATUS               (*(vu32*)0x018010)
#define WLAN_MBOX_DMA_POLICY                (*(vu32*)0x018014)

#define WLAN_MBOX0_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018018)
#define WLAN_MBOX0_DMA_RX_CONTROL           (*(vu32*)0x01801C) // MBOX 0
#define WLAN_MBOX0_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018020)
#define WLAN_MBOX0_DMA_TX_CONTROL           (*(vu32*)0x018024)

#define WLAN_MBOX1_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018028)
#define WLAN_MBOX1_DMA_RX_CONTROL           (*(vu32*)0x01802C) // MBOX 1
#define WLAN_MBOX1_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018030)
#define WLAN_MBOX1_DMA_TX_CONTROL           (*(vu32*)0x018034)

#define WLAN_MBOX2_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018038)
#define WLAN_MBOX2_DMA_RX_CONTROL           (*(vu32*)0x01803C) // MBOX 2
#define WLAN_MBOX2_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018040)
#define WLAN_MBOX2_DMA_TX_CONTROL           (*(vu32*)0x018044)

#define WLAN_MBOX3_DMA_RX_DESCRIPTOR_BASE   (*(vu32*)0x018048)
#define WLAN_MBOX3_DMA_RX_CONTROL           (*(vu32*)0x01804C) // MBOX 3
#define WLAN_MBOX3_DMA_TX_DESCRIPTOR_BASE   (*(vu32*)0x018050)
#define WLAN_MBOX3_DMA_TX_CONTROL           (*(vu32*)0x018054)

#define WLAN_MBOX_INT_STATUS                (*(vu32*)0x018058) // Interrupt
#define WLAN_MBOX_INT_ENABLE                (*(vu32*)0x01805C)

#define WLAN_INT_HOST                       (*(vu32*)0x018060)
//#define PAD0                                ((vu8*)0x018064) // 0..27
#define WLAN_LOCAL_COUNT                    ((vu32*)0x018080) // 0..7
#define WLAN_COUNT_INC                      ((vu32*)0x0180A0) // 0..7
#define WLAN_LOCAL_SCRATCH                  ((vu32*)0x0180C0) // 0..7
#define WLAN_USE_LOCAL_BUS                  (*(vu32*)0x0180E0)
#define WLAN_SDIO_CONFIG                    (*(vu32*)0x0180E4)
#define WLAN_MBOX_DEBUG                     (*(vu32*)0x0180E8)
#define WLAN_MBOX_FIFO_RESET                (*(vu32*)0x0180EC)
#define WLAN_MBOX_TXFIFO_POP                (*(vu32*)0x0180F0) // 0..3
#define WLAN_MBOX_RXFIFO_POP                (*(vu32*)0x018100) // 0..3
#define WLAN_SDIO_DEBUG                     (*(vu32*)0x018110)
//#define PAD1                                (*(vu8*)0x018114) // 0..7915
#define WLAN_HOST_IF_WINDOW                 ((vu32*)0x01A000) // 0..2047

// Analog Intf Registers
// ---------------------

#define SYNTH_SYNTH1        (*(vu32*)0x01C000)
#define SYNTH_SYNTH2        (*(vu32*)0x01C004)
#define SYNTH_SYNTH3        (*(vu32*)0x01C008)
#define SYNTH_SYNTH4        (*(vu32*)0x01C00C)
#define SYNTH_SYNTH5        (*(vu32*)0x01C010)
#define SYNTH_SYNTH6        (*(vu32*)0x01C014)
#define SYNTH_SYNTH7        (*(vu32*)0x01C018)
#define SYNTH_SYNTH8        (*(vu32*)0x01C01C)

#define RF5G_RF5G1          (*(vu32*)0x01C020)
#define RF5G_RF5G2          (*(vu32*)0x01C024)

#define RF2G_RF2G1          (*(vu32*)0x01C028)
#define RF2G_RF2G2          (*(vu32*)0x01C02C)

#define TOP_GAIN            (*(vu32*)0x01C030)
#define TOP_TOP             (*(vu32*)0x01C034)

#define BIAS_BIAS_SEL       (*(vu32*)0x01C038)
#define BIAS_BIAS1          (*(vu32*)0x01C03C)
#define BIAS_BIAS2          (*(vu32*)0x01C040)
#define BIAS_BIAS3          (*(vu32*)0x01C044)

#define TXPC_TXPC           (*(vu32*)0x01C048)
#define TXPC_MISC           (*(vu32*)0x01C04C)

#define RXTXBB_RXTXBB1      (*(vu32*)0x01C050)
#define RXTXBB_RXTXBB2      (*(vu32*)0x01C054)
#define RXTXBB_RXTXBB3      (*(vu32*)0x01C058)
#define RXTXBB_RXTXBB4      (*(vu32*)0x01C05C)

#define ADDAC_ADDAC1        (*(vu32*)0x01C060)
//#define ???                 ((vu8*)0x01C064) // 0..0x1B

// More Analog Intf Registers
// --------------------------

#define SW_OVERRIDE         (*(vu32*)0x01C080)
#define SIN_VAL             (*(vu32*)0x01C084)
#define SW_SCLK             (*(vu32*)0x01C088)
#define SW_CNTL             (*(vu32*)0x01C08C)

// MAC PCU Registers
// -----------------

#define REG_STA_ID0                     (*(vu32*)0x028000) // MAC_PCU_STA_ADDR_L32
#define REG_STA_ID1                     (*(vu32*)0x028004) // MAC_PCU_STA_ADDR_U16
#define REG_BSS_ID0                     (*(vu32*)0x028008) // MAC_PCU_BSSID_L32
#define REG_BSS_ID1                     (*(vu32*)0x02800C) // MAC_PCU_BSSID_U16
#define MAC_PCU_REG_BCNRSSI             (*(vu32*)0x028010) // MAC_PCU_BCN_RSSI_AVE
#define REG_TIME_OUT                    (*(vu32*)0x028014) // MAC_PCU_ACK_CTS_TIMEOUT
#define MAC_PCU_REG_BCNSIG              (*(vu32*)0x028018) // MAC_PCU_BCN_RSSI_CTL
#define REG_USEC                        (*(vu32*)0x02801C) // MAC_PCU_USEC_LATENCY
#define REG_BEACON                      (*(vu32*)0x028020)
#define REG_CFP_PERIOD                  (*(vu32*)0x028024) // (MAC_???)PCU_MAX_CFP_DUR
#define REG_TIMER0                      (*(vu32*)0x028028)
#define REG_TIMER1                      (*(vu32*)0x02802C)
#define REG_TIMER2                      (*(vu32*)0x028030)
#define REG_TIMER3                      (*(vu32*)0x028034)
#define REG_CFP_DUR                     (*(vu32*)0x028038) // (MAC_???)PCU_MAX_CFP_DUR
#define REG_RX_FILTER                   (*(vu32*)0x02803C) // MAC_PCU_RX_FILTER
#define REG_MCAST_FIL0                  (*(vu32*)0x028040) // MAC_PCU_MCAST_FILTER_L32
#define REG_MCAST_FIL1                  (*(vu32*)0x028044) // MAC_PCU_MCAST_FILTER_U32
#define MAC_PCU_REG_DIAGSW              (*(vu32*)0x028048) // MAC_PCU_DIAG_SW
#define REG_TSF_L32                     (*(vu32*)0x02804C)
#define REG_TSF_U32                     (*(vu32*)0x028050)
#define REG_TST_ADDAC                   (*(vu32*)0x028054) // MAC_PCU_TST_ADDAC
#define REG_DEF_ANT                     (*(vu32*)0x028058) // MAC_PCU_DEF_ANTENNA
#define MAC_PCU_REG_MUTE_MASKS0         (*(vu32*)0x02805C) // MAC_PCU_AES_MUTE_MASK_0
#define MAC_PCU_REG_MUTE_MASKS1         (*(vu32*)0x028060) // MAC_PCU_AES_MUTE_MASK_1
#define MAC_PCU_REG_GATED_CLKS          (*(vu32*)0x028064) // MAC_PCU_GATED_CLKS
#define MAC_PCU_REG_OBS2                (*(vu32*)0x028068) // MAC_PCU_OBS_BUS_2
#define MAC_PCU_REG_OBS1                (*(vu32*)0x02806C) // MAC_PCU_OBS_BUS_1

#define REG_LAST_TSTP                   (*(vu32*)0x028080) // MAC_PCU_LAST_BEACON_TSF (?)
#define REG_NAV                         (*(vu32*)0x028084) // MAC_PCU_NAV
#define REG_RTS_OK                      (*(vu32*)0x028088) // MAC_PCU_RTS_SUCCESS_CNT
#define REG_RTS_FAIL                    (*(vu32*)0x02808C) // MAC_PCU_RTS_FAIL_CNT
#define REG_ACK_FAIL                    (*(vu32*)0x028090) // MAC_PCU_ACK_FAIL_CNT
#define REG_FCS_FAIL                    (*(vu32*)0x028094) // MAC_PCU_FCS_FAIL_CNT
#define REG_BEACON_CNT                  (*(vu32*)0x028098) // MAC_PCU_BEACON_CNT

#define MAC_PCU_REG_XRMODE              (*(vu32*)0x0280C0) // MAC_PCU_XRMODE
#define MAC_PCU_REG_XRDEL               (*(vu32*)0x0280C4) // MAC_PCU_XRDEL
#define MAC_PCU_REG_XRTO                (*(vu32*)0x0280C8) // MAC_PCU_XRTO
#define MAC_PCU_REG_XRCRP               (*(vu32*)0x0280CC) // MAC_PCU_XRCRP
#define MAC_PCU_REG_XRSTMP              (*(vu32*)0x0280D0) // MAC_PCU_XRSTMP
#define MAC_PCU_REG_SLP1                (*(vu32*)0x0280D4) // MAC_PCU_SLP1
#define MAC_PCU_REG_SLP2                (*(vu32*)0x0280D8) // MAC_PCU_SLP2
//#define MAC_PCU_REG_SLP3                (*(vu32*)0x0280DC) // MAC_PCU_SLP3
#define MAC_PCU_REG_BSSMSKL             (*(vu32*)0x0280E0) // MAC_PCU_ADDR1_MASK_L32
#define MAC_PCU_REG_BSSMSKH             (*(vu32*)0x0280E4) // MAC_PCU_ADDR1_MASK_U16
#define MAC_PCU_REG_TPC                 (*(vu32*)0x0280E8) // MAC_PCU_TPC
#define MAC_PCU_REG_TFC                 (*(vu32*)0x0280EC) // MAC_PCU_TX_FRAME_CNT
#define MAC_PCU_REG_RFC                 (*(vu32*)0x0280F0) // MAC_PCU_RX_FRAME_CNT
#define MAC_PCU_REG_RCC                 (*(vu32*)0x0280F4) // MAC_PCU_RX_CLEAR_CNT
#define MAC_PCU_REG_CC                  (*(vu32*)0x0280F8) // MAC_PCU_CYCLE_CNT
#define MAC_PCU_REG_QT1                 (*(vu32*)0x0280FC) // MAC_PCU_QUIET_TIME_1
#define MAC_PCU_REG_QT2                 (*(vu32*)0x028100) // MAC_PCU_QUIET_TIME_2
#define MAC_PCU_REG_TSF                 (*(vu32*)0x028104)
#define MAC_PCU_REG_NOACK               (*(vu32*)0x028108) // MAC_PCU_QOS_NO_ACK
#define MAC_PCU_REG_PHYERR              (*(vu32*)0x02810C) // MAC_PCU_PHY_ERROR_MASK
#define MAC_PCU_REG_XRLAT               (*(vu32*)0x028110) // MAC_PCU_XRLAT
#define MAC_PCU_REG_ACKSIFS_RESERVED    (*(vu32*)0x028114)
#define MAC_PCU_REG_MICQOSCTL           (*(vu32*)0x028118) // MAC_PCU_MIC_QOS_CONTROL
#define MAC_PCU_REG_MICQOSSEL           (*(vu32*)0x02811C) // MAC_PCU_MIC_QOS_SELECT
#define MAC_PCU_REG_MISCMODE            (*(vu32*)0x028120) // MAC_PCU_MISC_MODE
#define MAC_PCU_REG_FILTOFDM            (*(vu32*)0x028124) // MAC_PCU_FILTER_OFDM_CNT
#define MAC_PCU_REG_FILTCCK             (*(vu32*)0x028128) // MAC_PCU_FILTER_CCK_CNT
#define MAC_PCU_REG_PHYCNT1             (*(vu32*)0x02812C) // MAC_PCU_PHY_ERR_CNT_1
#define MAC_PCU_REG_PHYCNTMASK1         (*(vu32*)0x028130) // MAC_PCU_PHY_ERR_CNT_1_MASK
#define MAC_PCU_REG_PHYCNT2             (*(vu32*)0x028134) // MAC_PCU_PHY_ERR_CNT_2
#define MAC_PCU_REG_PHYCNTMASK2         (*(vu32*)0x028138) // MAC_PCU_PHY_ERR_CNT_2_MASK
#define MAC_PCU_REG_TSFTHRESH           (*(vu32*)0x02813C) // MAC_PCU_TSF_THRESHOLD
//#define MAC_PCU_REG_TSFCAL              (*(vu32*)0x028140) // Misc
#define MAC_PCU_REG_PHYERR_EIFS         (*(vu32*)0x028144) // MAC_PCU_PHY_ERROR_EIFS_MASK
//#define MAC_PCU_REG_SYNC1               (*(vu32*)0x028148) // Time
//#define MAC_PCU_REG_SYNC2               (*(vu32*)0x02814C) // Misc
//#define MAC_PCU_REG_SYNC3               (*(vu32*)0x028150) // MCAST Addr_L
//#define MAC_PCU_REG_SYNC4               (*(vu32*)0x028154) // MCAST Addr_U
//#define MAC_PCU_REG_SYNC5               (*(vu32*)0x028158) // RX Time
//#define MAC_PCU_REG_SYNC6               (*(vu32*)0x02815C) // INC
//#define MAC_PCU_REG_SYNC7               (*(vu32*)0x028160) // Last Time
//#define MAC_PCU_REG_SYNC8               (*(vu32*)0x028164) // Updated Time
#define MAC_PCU_REG_PHYCNT3             (*(vu32*)0x028168) // MAC_PCU_PHY_ERR_CNT_3
#define MAC_PCU_REG_PHYCNTMASK3         (*(vu32*)0x02816C) // MAC_PCU_PHY_ERR_CNT_3_MASK
#define MAC_PCU_REG_BTMODE              (*(vu32*)0x028170) // MAC_PCU_BLUETOOTH_MODE
#define MAC_PCU_REG_BTWEIGHT            (*(vu32*)0x028174) // MAC_PCU_BLUETOOTH_WEIGHTS
#define MAC_PCU_REG_HCF                 (*(vu32*)0x028178) // MAC_PCU_HCF_TIMEOUT
#define MAC_PCU_REG_BTMODE2             (*(vu32*)0x02817C) // MAC_PCU_BLUETOOTH_MODE2
#define MAC_PCU_REG_BFCOEF1             ((vu32*)0x028180) // 0..7

#define MAC_PCU_REG_BFCOEF2             (*(vu32*)0x0281C0)
#define MAC_PCU_REG_KCMASK              (*(vu32*)0x0281C4)

#define MAC_PCU_REG_TXSIFS              (*(vu32*)0x0281D0) // MAC_PCU_TXSIFS

#define MAC_PCU_REG_TXOP_X              (*(vu32*)0x0281EC) // MAC_PCU_TXOP_X
#define MAC_PCU_REG_TXOP_0_3            (*(vu32*)0x0281F0) // MAC_PCU_TXOP_0_3
#define MAC_PCU_REG_TXOP_4_7            (*(vu32*)0x0281F4) // MAC_PCU_TXOP_4_7
#define MAC_PCU_REG_TXOP_8_11           (*(vu32*)0x0281F8) // MAC_PCU_TXOP_8_11
#define MAC_PCU_REG_TXOP_12_15          (*(vu32*)0x0281FC) // MAC_PCU_TXOP_12_15
#define MAC_PCU_REG_GNRCTMR_N           ((vu32*)0x028200) // 0..7 | GENERIC_TIMERSxxx?
#define MAC_PCU_REG_GNRCTMR_P           ((vu32*)0x028220) // 0..7 | GENERIC_TIMERSxxx?
#define MAC_PCU_REG_GNRCTMR_M           (*(vu32*)0x028240) // MAC_PCU_GENERIC_TIMERS_MODE
#define MAC_PCU_REG_SLP32_MODE          (*(vu32*)0x028244)
#define MAC_PCU_REG_SLP32_WAKE          (*(vu32*)0x028248)
#define MAC_PCU_REG_SLP32_TSF_INC       (*(vu32*)0x02824C)
#define MAC_PCU_REG_SLPMIB1             (*(vu32*)0x028250)
#define MAC_PCU_REG_SLPMIB2             (*(vu32*)0x028254)
#define MAC_PCU_REG_SLPMIB3             (*(vu32*)0x028258)
#define MAC_PCU_REG_MISCMODE2           (*(vu32*)0x02825C) // MAC_PCU_MISC_MODE2
#define MAC_PCU_REG_SLP4                (*(vu32*)0x028260)
#define MAC_PCU_REG_SLP5                (*(vu32*)0x028264)

#define MAC_PCU_REG_MCICTL              (*(vu32*)0x028268)
#define MAC_PCU_REG_MCIISR              (*(vu32*)0x02826C)
#define MAC_PCU_REG_MCIIER              (*(vu32*)0x028270)
#define MAC_PCU_REG_MCIWLP              (*(vu32*)0x028274)
#define MAC_PCU_REG_MCIARW              (*(vu32*)0x028278)
#define MAC_PCU_REG_MCIARR              (*(vu32*)0x02827C)
#define MAC_PCU_REG_MCIADW              (*(vu32*)0x028280)
#define MAC_PCU_REG_MCIADR              (*(vu32*)0x028284)
#define MAC_PCU_REG_MCIFRW              (*(vu32*)0x028288)
#define MAC_PCU_REG_MCIFRR              (*(vu32*)0x02828C)
#define MAC_PCU_REG_MCIQRW              (*(vu32*)0x028290)
#define MAC_PCU_REG_MCIQRR              (*(vu32*)0x028294)
#define MAC_PCU_REG_MCIGRW              (*(vu32*)0x028298)
#define MAC_PCU_REG_MCIGRR              (*(vu32*)0x02829C)
#define MAC_PCU_REG_MCISTAT             (*(vu32*)0x0282A0)

#define MAC_PCU_REG_BASIC_RATE_SET0     (*(vu32*)0x0282A4) // MAC_PCU_BASIC_RATE_SET0
#define MAC_PCU_REG_BASIC_RATE_SET1     (*(vu32*)0x0282A8) // MAC_PCU_BASIC_RATE_SET1
#define MAC_PCU_REG_BASIC_RATE_SET2     (*(vu32*)0x0282AC) // MAC_PCU_BASIC_RATE_SET2
#define MAC_PCU_REG_SEC_BSSID_L32       (*(vu32*)0x0282B0) // MAC_PCU_BSSID2_L32
#define MAC_PCU_REG_SEC_BSSID_U16       (*(vu32*)0x0282B4) // MAC_PCU_BSSID2_U16

#define MAC_PCU_REG_FTYPE               ((vu32*)0x028500) // 0..0x3F

#define MAC_PCU_REG_ACKSIFSMEM_RESERVED ((vu32*)0x028680) // 0..0x1F
#define MAC_PCU_REG_DUR                 ((vu32*)0x028700) // 0..0x1F

#define MAC_PCU_REG_RTD                 ((vu32*)0x0287C0) // 0..7
#define MAC_PCU_REG_DTR                 ((vu32*)0x0287E0) // 0..7
#define MAC_PCU_REG_KC                  ((vu32*)0x028800) // 0..0x3FF |  KC = KEY_CACHE ?

#ifdef __cplusplus
}
#endif

#endif // LIBATH6K_REGISTERS_H__
