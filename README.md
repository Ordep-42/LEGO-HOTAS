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

I also wanted to have some kind of thumbstick...

### Step 3: Build an enclosure and a handle for the main throttle

