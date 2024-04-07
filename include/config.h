#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <Joystick.h>
#include <Keypad.h>

#define baseButtonCount 9
#define ROWS 3
#define COLS 3
#define handleButtonCount 2

/*                 +-----+
        +----------| USB |----------+
        |          +-----+          |
    D1  | [ ]1/TX            RAW[ ] |
    D0  | [ ]0/RX            GND[ ] |
        | [ ]GND             RST[ ] |
        | [ ]GND             VCC[ ] |
    D2  | [M]2/SDA   ___      A3[P] |   D21
    D3  |~[M]3/SCL  /   \     A2[ ] |   D20
    D4  | [M]4/A6  / PRO \    A1[J] |   D19
    D5  |~[M]5     \  µ  /    A0[J] |   D18
    D6  |~[M]6/A    \___/ SCK/15[B] |   D15
    D7  | [M]7           MISO/14[B] |   D14
    D8  | [ ]8/A8        MOSI/16[ ] |   D16
    D9  |~[ ]9/A9         A10/10[ ]~|   D10
        |                           |
        +---------------------------+
*/

//------------------------------------------
// [T] Throttle potentiometer
//------------------------------------------
#define throttlePin A3

unsigned int throttleState;

//------------------------------------------
// [J] Thumbstick axis
//------------------------------------------
#define thumbXPin A1
#define thumbYPin A0

unsigned int thumbXAxis, thumbYAxis;

//------------------------------------------
// [B] Handle Buttons
//------------------------------------------
const int handleButtonPins[handleButtonCount] = {14, 15};
const int handleButtonMap[handleButtonCount] = {9, 10};
int lastButtonState[handleButtonCount];

//------------------------------------------
// [M] Base button matrix
//------------------------------------------
byte rowPins[ROWS] = {2, 3, 4};
byte colPins[COLS] = {5, 6, 7};

char baseButtonMap[ROWS][COLS] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8}
};

void initJoystick();
void updateJoystick();
void checkHandleButtons();
void checkThrottleBase();

#endif
