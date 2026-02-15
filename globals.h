#ifndef CONFIG_HPP
#define CONFIG_HPP

#include "pros/apix.h"
#include "lemlib/api.hpp"

// ----------------------
// Motor Groups
// ----------------------
extern pros::MotorGroup left_motor_group;
extern pros::MotorGroup right_motor_group;

// ----------------------
// Other Motors
// ----------------------
extern pros::Motor intakeBottom;
extern pros::Motor intakeTop;

// ----------------------
// Pneumatics
// ----------------------
extern pros::adi::DigitalOut matchLoader;  // little will
extern pros::adi::DigitalOut descore;  // little blocker / doinker
extern pros::adi::DigitalOut outake;  // little blocker / doinker

// ----------------------
// Sensors
// ----------------------
extern pros::Imu imu;
extern pros::Rotation vertical_encoder;
extern lemlib::TrackingWheel vertical_tracking_wheel;

extern lemlib::OdomSensors sensors;

// ----------------------
// PID Controllers
// ----------------------
extern lemlib::ControllerSettings lateral_controller;
extern lemlib::ControllerSettings angular_controller;

// ----------------------
// Drivetrain + Chassis
// ----------------------
extern lemlib::Drivetrain drivetrain;
extern lemlib::Chassis chassis;

extern bool descoreState; // Descore mech
extern bool matchLoadState; // Little Will
extern bool outakeState; // The Piston for scoring middle and long

#endif  // CONFIG_HPP