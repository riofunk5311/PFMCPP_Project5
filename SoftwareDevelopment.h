#pragma once
#include "LeakedObjectDetector.h"
#include "CustomBuildPc.h"

struct SoftwareDevelopment
{
    SoftwareDevelopment();
    ~SoftwareDevelopment();

    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    void displaySystemInfo() const;

    void setUpIDE(const std::string nameOfOS, const int amountOfHddInGb) const;
    void installFrameWork(const std::string nameOfFrameWork) const;
    int getRamAmountInGB() const;

    JUCE_LEAK_DETECTOR(SoftwareDevelopment)
};

