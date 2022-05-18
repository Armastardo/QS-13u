#pragma once

#include "config_common.h"

#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0001
#define MANUFACTURER    quark.works
#define PRODUCT         qs13

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B6, B0, D0, C5 }
#define MATRIX_COL_PINS { C6, B5, B4, D6, B3, B2, D5, D4, B1, D3, D2, D1}
#define UNUSED_PINS  { B7, C2, C4, C7 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING 5

