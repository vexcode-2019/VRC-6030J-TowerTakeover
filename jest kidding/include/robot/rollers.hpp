/**
 * @file include/robot/rollers.hpp
 */ 
#pragma once
#include "robot/copycat.hpp"
namespace Rollers{
    void initialize();
    void setVelocity(float speed);
    double getPosition();
    int getIRCalibratedData();
    int getIRRawData();
    std::vector<MotorData> copyData();
    void runCopyCat(int velocity);
    double getMotorTemperature();
}