#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Matrix pins: Row 01..04 -> PA0..PA3 */
#define MATRIX_ROW_PINS { A0, A1, A2, A3 }

/* Matrix pins: Col 01..12 -> PB15..PB12, PB7..PB0 */
#define MATRIX_COL_PINS { B15, B14, B13, B12, B7, B6, B5, B4, B3, B2, B1, B0 }

#define DIODE_DIRECTION COL2ROW

/* WS2812 RGB Matrix (Data on PB16, P-MOSFET Power Gate on PA10) */
#define WS2812_DI_PIN B16
#define RGB_MATRIX_LED_COUNT 46
#define RGB_POWER_PIN A10
#define RGB_POWER_ON_STATE 0

/* Battery Voltage ADC (PA14 = AIN4 on CH582M) */
#define BATTERY_ADC_PIN A14

