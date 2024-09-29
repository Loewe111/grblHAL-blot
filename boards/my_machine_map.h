/*
  Machine Map for Blot
  Limit Pins are optional
*/

#define BUILD_INFO "grblHAL on Blot"

// Define step pulse output pins.
#define STEP_PORT               GPIO_PIO_1
#define X_STEP_PIN              3 // D8
#define Y_STEP_PIN              2 // D10
#define Z_STEP_PIN              255 // NO Z AXIS

// Stepper direction output pins
#define DIRECTION_PORT          GPIO_OUTPUT
#define X_DIRECTION_PIN         4 // D7
#define Y_DIRECTION_PIN         1 // D9
#define Z_DIRECTION_PIN         255 // NO Z AXIS
#define DIRECTION_OUTMODE       GPIO_MAP

// Stepper enable pin
#define ENABLE_PORT             GPIO_OUTPUT
#define STEPPERS_ENABLE_PIN     27 // D1

// Define homing/hard limit switch input pins.
#define X_LIMIT_PIN             28 // D2, optional
#define Y_LIMIT_PIN             29 // D3, optional
#define Z_LIMIT_PIN             255 // NO Z AXIS
#define LIMIT_INMODE            GPIO_MAP


// #define SPINDLE_PORT            GPIO_OUTPUT
// #define SPINDLE_ENABLE_PIN      0 // D6
#define SPINDLE_PWM_PORT        GPIO_OUTPUT
#define SPINDLE_PWM_PIN         0 // D6
