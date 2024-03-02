#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <Joystick.h>
#include <Keypad.h>

#define baseButtonCount 9
#define ROWS 3
#define COLS 3
#define handleButtonCount 2
#define throttlePin A2
#define thumbXPin A1
#define thumbYPin A0

const int handleButtonMap[handleButtonCount] = {9, 10};
const int handleButtonPins[handleButtonCount] = {14, 15};
int lastButtonState[handleButtonCount];

unsigned int throttleState, thumbXAxis, thumbYAxis;

char baseButtonMap[ROWS][COLS] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8}
};

byte rowPins[ROWS] = {2, 3, 4};
byte colPins[COLS] = {5, 6, 7};

void initJoystick();
void updateJoystick();
void checkHandleButtons();
void checkThrottleBase();

#endif
