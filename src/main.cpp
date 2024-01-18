#include "config.h"

Keypad throttleBase = Keypad(makeKeymap(baseButtonMap), rowPins, colPins, ROWS, COLS);

Joystick_ Joystick(0x03, 0x04,
                  handleButtonCount + baseButtonCount, 0,
                  false, false, false,
                  true, true, false,
                  false, true,
                  false, false, false);

void initJoystick();
void checkHandleButtons();
void checkThrottleBase();
void updateJoystick();

void setup() {
  initJoystick();
}

void loop() {
  updateJoystick();
  delay(10);
}

void initJoystick() {
  Joystick.begin();
  for (int button = 0; button < handleButtonCount; button++) {
    pinMode(handleButtonMap[button], INPUT_PULLUP);
    lastButtonState[button] = 0;
  }
  Joystick.setThrottleRange(0, 930);
}

void updateJoystick() {
  checkHandleButtons();
  checkThrottleBase();

  throttleState = analogRead(throttlePin);
  Joystick.setThrottle(throttleState);

  thumbXAxis = analogRead(thumbXPin);
  Joystick.setXAxis(thumbXAxis);

  thumbYAxis = analogRead(thumbYPin);
  Joystick.setYAxis(thumbYAxis);
}