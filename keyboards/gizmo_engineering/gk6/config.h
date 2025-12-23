#pragma once

// RGB Matrix
#define IS31FL3731_I2C_ADDRESS_1 IS31FL3731_I2C_ADDRESS_GND
#define IS31FL3731_I2C_ADDRESS_2 IS31FL3731_I2C_ADDRESS_VCC
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 25

// Unicode
#define UNICODE_CYCLE_PERSIST false
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE, UNICODE_MODE_MACOS, UNICODE_MODE_LINUX

// One shot
#define ONESHOT_TAP_TOGGLE 3					// Tapping this number of times holds the key until tapped once again.
#define ONESHOT_TIMEOUT 5000					// Time (in ms) before the one shot key is released

// Auto shift
#define AUTO_SHIFT_TIMEOUT 175
#define NO_AUTO_SHIFT_TAB

// Caps word
#define CAPS_WORD_IDLE_TIMEOUT 0				// Time (in ms) before the caps word is automattically disabled. Set to 0 to never time out