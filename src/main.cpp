#include "config.h"

Keypad throttleBase = Keypad(makeKeymap(baseButtonMap), rowPins, colPins, ROWS, COLS);

Joystick_ Joystick(0x03, 0x04,
                  handleButtonCount + baseButtonCount, 0,
                  false, false, false,
                  true, true, false,
                  false, true,
                  false, false, false);

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

void checkHandleButtons() {
  for (int button = 0; button < handleButtonCount; button++) {
    int buttonState = digitalRead(handleButtonMap[button]);
    if (buttonState != lastButtonState[button]) {
      Joystick.setButton(handleButtonMap[button], buttonState);
      lastButtonState[button] = buttonState;
    }
  }
}

void checkThrottleBase() {
  if (throttleBase.getKeys()) {
    for (int button = 0; button < baseButtonCount; button++) {
      if (throttleBase.key[button].stateChanged) {
        switch (throttleBase.key[button].kstate) {
          case PRESSED:
            Joystick.setButton(throttleBase.key[button].kchar, 1);
            break;
          case IDLE:
            Joystick.setButton(throttleBase.key[button].kchar, 0);
            break;
        }
      }
    }
  }
}
