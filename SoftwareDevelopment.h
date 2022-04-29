#pragma once
#include "LeakedObjectDetector.h"
#include "CustomBuildPc.h"

struct SoftwareDevelopment
{
    SoftwareDevelopment();
    ~SoftwareDevelopment();

    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    void displaySystemInfo();

    void setUpIDE(std::string nameOfOS, int amountOfHddInGb);
    void installFrameWork(std::string nameOfFrameWork);
    int getRamAmountInGB();

    JUCE_LEAK_DETECTOR(SoftwareDevelopment)
};

