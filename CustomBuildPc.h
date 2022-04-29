#pragma once
#include "LeakedObjectDetector.h"

struct CustomBuildPc
{
    int numOfCpus = 3;
    int amountOfRamInGb = 32;
    int amountOfHddInGb;
    int numberOfOs = 1;
    int amountOfWattage;
    int photo = 50;

    CustomBuildPc();
    ~CustomBuildPc();

    struct Cpu
    {
        int numCpuCore = 2;
        std::string manufacturer = "Intel";
        std::string model = "Xeon";
        std::string program = "Photoshop";

        Cpu();
        ~Cpu();

        int numPhysicalCpus;
        float clockSpeedInGhz;

        void runProgram() const;
        float powerConsume(const float timeCpuRunningInMinutes, const int cpuUsage, const bool multiThreadingOn = true) const;
        float getTimeToCompile(const float sizeOfFile, const std::string compileError) const;
        float clockUp(float maxClockGain);

        void displayCpuTemp() const;
        float getCpuCondition(const float cpuTemp) const;
    };

    void writeProgram(const std::string language) const;
    void createVideo(const Cpu& cpuB, std::string nameOfCpu) const;
    void editPhoto() const;
    int photoPrint(const int photoYouWantToPrint);

    void getSizeOfHDDInGB() const;

    JUCE_LEAK_DETECTOR(CustomBuildPc)
};


