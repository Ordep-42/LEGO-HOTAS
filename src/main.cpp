#include "config.h"

Keypad throttleBase = Keypad(makeKeymap(baseButtonMap), rowPins, colPins, ROWS, COLS);

Joystick_ Joystick(0x03, 0x04,
                  handleButtonCount + baseButtonCount, 0,
                  false, false, false,
                  true, true, false,
                  false, true,
                  false, false, false);

void setup() {

}

void loop() {
  
}
