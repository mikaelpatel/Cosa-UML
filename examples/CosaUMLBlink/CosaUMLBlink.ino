/**
 * @file CosaUMLBlink.ino
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2015, Mikael Patel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * @section Description
 * Classical blink example sketch using UML Timed Capsule.
 *
 * @section Diagram
 *
 *    Blink
 *  +--------+
 *  |  led1  |
 *  |        |
 *  |        |
 *  +--------+
 *   [512 ms]
 *
 * This file is part of the Arduino Che Cosa project.
 */

#include <UML.h>
#include "Cosa/OutputPin.hh"
#include "Cosa/Watchdog.hh"

using namespace UML;

class Blink : public TimedCapsule, private OutputPin {
public:
  /**
   * Default period for clock (in ms).
   */
  static const uint16_t DEFAULT_TIMEOUT = 512;

  /**
   * Construct Blink with given pin and period in milli-seconds.
   * @param[in] scheduler.
   * @param[in] pin (default Board::LED).
   * @param[in] ms period (default 512 ms).
   */
  Blink(Job::Scheduler* scheduler,
	Board::DigitalPin pin = Board::LED, uint16_t ms = DEFAULT_TIMEOUT) :
    TimedCapsule(scheduler, ms),
    OutputPin(pin, 0)
  {}

  /**
   * @override{UML::Capsule}
   * Toggle LED pin.
   */
  virtual void behavior()
  {
    toggle();
  }
};

Watchdog::Scheduler scheduler;
Blink led1(&scheduler);

void setup()
{
  // Start the UML run-time and scheduler timed capsule
  UML::begin();
  led1.start();
}

void loop()
{
  // Service Events and scheduled Capsules
  UML::service();
}
