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

* [Button] (./UML/Button.hh), Input Pin Adapter.
* [Capsule] (./UML/Capsule.hh), Abstract Behaviour.
* [Clock] (./UML/Clock.hh), Timed Capsule with Counter.
* [Connector] (./UML/Connector.hh), Abstract Connector.
* [Controller] (./UML/Controller.hh), Run-time Scheduler.
* [Counter] (./UML/Counter.hh), Event Counter.
* [Display] (./UML/Display.hh), Connector Probe to LCD.
* [Join] (./UML/Join.hh), Control Flow.
* [LED] (./UML/LED.hh), Output Pin Adapter.
* [Probe] (./UML/Probe.hh), Connector Trace.
* [Relay] (./UML/Relay.hh), Output Pin Adapter with trigger range.
* [TimedCapsule] (./UML/TimedCapsule.hh), Periodic Capsule.
* [TimedProbe] (./UML/TimedProbe.hh), Periodic Connector Trace.
* [Trigger] (./UML/Trigger.hh), Interrupt Pin Adapter.
* [Voltmeter] (./UML/Voltmeter.hh), Analog Pin Adapter.

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

