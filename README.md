# Ball and Beam PID Learning Apparatus

A hands-on learning apparatus designed and implemented to demonstrate the behavior of PID controllers using a classic Ball and Beam system. This project is part of a control systems design task focused on real-time system modeling, tuning, and analysis.

## 🎯 Objectives

- Build a Ball and Beam system with real-time PID control
- Allow external tuning of PID parameters (P, I, D)
- Show responses via Arduino Serial Plotter and Oscilloscope
- Demonstrate:
  - P, I, D, PI, PD, PID Control
  - Underdamped, Critically Damped, and Overdamped responses

## 🛠️ Hardware Components

- Arduino Uno
- Servo Motor (or DC motor with H-bridge)
- Linear Potentiometer or Infrared Distance Sensor (for ball position feedback)
- Ball and Beam Mechanical Setup (custom built)
- External knobs (potentiometers) for PID parameter tuning
- Oscilloscope for output trigger analysis

## 📐 Control System Design

- State Variables: Ball Position, Beam Angle
- Input: Motor control (PWM)
- Output: Ball position
- External PID tuning via potentiometers connected to analog inputs
- PID implementation in Arduino code

## 📊 Response Display

- **Serial Plotter**: Visualizes ball position in real time
- **Oscilloscope**: Shows trigger-based waveform responses

## 📋 Features Demonstrated

- ✅ P Controller
- ✅ I Controller
- ✅ D Controller
- ✅ PI Controller
- ✅ PD Controller
- ✅ PID Controller
- ✅ Underdamping
- ✅ Critical Damping
- ✅ Overdamping

## 📽️ Demo

Here’s a demo of the apparatus:
👉 [Demo Video]([PID Controller for Balance the Ball in Beam .mp4](https://github.com/SujeewBandara/ball-beam-pid-learning-apparatus/blob/main/PID%20Controller%20for%20Balance%20the%20Ball%20in%20Beam%20.mp4))

## 👨‍🔧 Implementation Notes

- PID tuning was done using external potentiometers connected to Arduino analog pins.
- Damping characteristics were varied through code-level changes to PID coefficients.

## 📚 Learning Outcomes

- Understanding of real-time control implementation
- Hands-on experience with mechanical-electronic system integration
- PID controller tuning and stability analysis

