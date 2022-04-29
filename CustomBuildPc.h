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

        void runProgram();
        float powerConsume(float timeCpuRunningInMinutes, int cpuUsage, bool multiThreadingOn = true);
        float getTimeToCompile(float sizeOfFile, std::string compileError);
        float clockUp(float maxClockGain);

        void displayCpuTemp();
        float getCpuCondition(float cpuTemp);
    };

    void writeProgram(std::string language);
    void createVideo(Cpu& cpuB, std::string nameOfCpu);
    void editPhoto();
    int photoPrint(int photoYouWantToPrint);

    void getSizeOfHDDInGB();

    JUCE_LEAK_DETECTOR(CustomBuildPc)
};


