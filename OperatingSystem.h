#pragma once
#include "LeakedObjectDetector.h"
#include "CustomBuildPc.h"

struct OperatingSystem
{
    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    OperatingSystem();
    ~OperatingSystem();

    std::string nameOfOS { "MacOS" };

    void monitorActivity(const int amountOfRamInUse);
    int photoFinder();
    void displayNameOfOS() const;

    JUCE_LEAK_DETECTOR(OperatingSystem)
};

