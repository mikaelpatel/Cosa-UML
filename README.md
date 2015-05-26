# Cosa-UML

This Cosa library is an implementation of the UML Capsules and
Connectors. Together with Cosa FSM and device drivers this library
allow a declarative approach to concurrent system design and
implementation.

This library takes a radical different approach to implementation as
the Connectors are the holders of global state. C++ assignment
operator overloading and template classes are used to embedd UML
Capsules and Connectors.

There is a rich set of support Capsules and Connectors. These include
(in alphabetical order).

* Button, Input Pin Adapter.
* Capsule, Abstract Behaviour.
* Clock, Timed Capsule with Counter.
* Connector, Abstract Connector.
* Controller, Run-time Scheduler.
* Counter, Event Counter.
* Display, Connector Probe to LCD.
* Join, Control Flow.
* LED, Output Pin Adapter.
* Probe, Connector Trace.
* Relay, Output Pin Adapter with trigger range.
* TimedCapsule, Periodic Capsule.
* TimedProbe, Periodic Connector Trace.
* Trigger, Interrupt Pin Adapter.
* Voltmeter, Analog Pin Adapter.

# Install

To use this library you must download and install the [Arduino IDE] (http://www.arduino.cc/en/Main/Software) (or
GCC AVR toolchain) and [Cosa] (https://github.com/mikaelpatel/Cosa).

Download and unzip the Cosa-UML library into your sketchbook
libraries directory. Rename from Cosa-UML-master to
UML.

The UML library and examples should be found in the Arduino IDE
File>Sketchbook menu. Open the CosaUMLCapsules example sketch. Select
the Cosa core by selecting one of the Cosa boards in the Tools>Board
menu.

# References

1. A UML Profile for Modeling Complex Real-Time Architectures, Bran
Selic, Rational Software Inc., http://www.omg.org/news/meetings/workshops/presentations/realtime2001/6-3_Selic.presentation.pdf

