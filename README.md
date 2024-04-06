# LEGO Hands On Throttle And Stick (Stick WIP)

#### An Arduino Pro Micro based HOTAS setup built entirely with LEGO pieces

### Project Overview

The goal of this project is to create a fully functional HOTAS system using LEGO as the main building material. The Arduino Pro Micro is used to interface with the computer and translate the inputs from the controls into commands that can be recognized by games.

Keep in mind that I made this HOTAS as a personal project and this github repository is merely a way to share my experience.

### Step 1: Choose a platform

After hours of countless research I've decided to use the Arduino Pro Micro. The main reasons being cost and ease of programming. It has the Atmega32U4 as the main controller, which is one of the cheapest MCUs with native HID support. Therefore the computer can see it as a mouse, keyboard or joystick without needing extra hardware or complex programming. 

Since It's a kind of official Arduino model, it has all the benefits of the Arduino eco-system. Which means there are thousands of projects and documentation on the internet around DIY gamepads and similar setups. In this project I use two libraries from the Arduino eco-system, the Joystick library and the Keypad library.
 
### Step 2: Choose features

So, now that theres a MCU platform to use, time to choose what features shall this HOTAS have. Well, the first part is obviously a throttle. Here we have two options, using potentiometers or hall-effect sensors, each has their pros and cons. In this project I used potentiometers because they're readly available and I had plenty of them already on-hand, specifically rotary potentiometers (Theres also the option of using sliding potentiometers, but I only had rotaries on-hand).

I also wanted to have some kind of thumbstick, so I got one of those joystick modules, because They were the cheapest I could find. It works on 5V and has a button, like on a XBOX or Playstation gamepad, so thats a plus. Now I have one button and three axis, one from the throttle and two from the thumbstick, I still wanted at least one or two more buttons directly on the throttle handle itself, and some other buttons on the base of the throttle.

In the end I went with a 3x3 button matrix on the base of the throttle, which gives me 9 buttons, and thats plenty for my use case (mainly arcade games and some simulators) while costing only 6 pins on the Pro Micro.

### Step 3: Build an enclosure and a handle for the main throttle

Normally what you would see here is some complex 3D printing or models and maybe some woodworking or metalworkorking. But, I don't have access to a 3D printer, neither had a way to do woodworking nor metalworking, so I had to do with what I have, in this case, LEGO pieces from my childhood.

First I built a handle for the throttle, I tried to the best I could to copy the design of the F-14/F-18 throttle handles, for that I used some LEGO Technic pieces and plates to get something similar in shape to the aforementioned throttle handles. In the first prototype of this project the handle itself didn't move in relation to the throttle lever, but I'm going to use it on top of my desk, so when at full throttle my hand stays in on top of the handle in a way that isn't very ergonomic nor natural, so I modified the way the handle mounts to the lever, which enables it to rotate up a bit, just enough so my hand isn't being awkwardly stretched.

[WIP]

### Setp 4: Develop the code
[WIP]
