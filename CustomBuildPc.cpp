
#include "CustomBuildPc.h"
#include <iostream>

CustomBuildPc::CustomBuildPc() :
amountOfHddInGb(2000),
amountOfWattage(600)
{
    std::cout << "CustomBuildPc being constructed!" << std::endl;
}

CustomBuildPc::~CustomBuildPc()
{
    std::cout << "CustomBuildPc being destructed!" << std::endl;
}

CustomBuildPc::Cpu::Cpu() :
numPhysicalCpus(4),
clockSpeedInGhz(2.8f)
{
    std::cout << "Cpu being constructed!" << std::endl;
}

CustomBuildPc::Cpu::~Cpu()
{
    std::cout << "Cpu being destructed!" << std::endl;
}

void CustomBuildPc::Cpu::runProgram()
{
    std::cout << "Cpu is running at " << clockSpeedInGhz << " Hz" << " on " << numPhysicalCpus << " CPUs" <<  std::endl;
    std::cout << "CustonBuildPc::Cpu::runProgram() " << program << std::endl;
}

float CustomBuildPc::Cpu::powerConsume(float timeCpuRunningInMinutes, int cpuUsage, bool multiThreadingOn)
{
    if ( multiThreadingOn == true && cpuUsage == 5 )
    {
        std::cout << "Power Consumption is high" << std::endl;
    }

    return clockSpeedInGhz * timeCpuRunningInMinutes;
}

float CustomBuildPc::Cpu::getTimeToCompile(float sizeOfFile, std::string compileError)
{
    if ( sizeOfFile > 100.0f )
    {
        std::cout << compileError << std::endl;
    }
    
    return sizeOfFile;
}

void CustomBuildPc::writeProgram(std::string language)
{
    std::cout << language << std::endl;
}

void CustomBuildPc::createVideo(Cpu &cpuB, std::string nameOfCpu)
{
     std::cout << cpuB.numCpuCore << "\n" << nameOfCpu << std::endl;
}

void CustomBuildPc::editPhoto()
{
    std::cout << "Amount of wattage: " << amountOfWattage << std::endl;
    std::cout << "CustomBuildPc::editPhoto() " << photo << std::endl;
}

float CustomBuildPc::Cpu::clockUp(float maxClockGain)
{
    std::cout << "Base Clock is " << clockSpeedInGhz << std::endl;
    float clockIncrement = 0.1f;
    float newBaseClock;

    if ( maxClockGain >= 1.0f )
    {
        for ( float i = 0.1f; i <= maxClockGain; i += clockIncrement )
        {
            newBaseClock = i + clockSpeedInGhz;
            std::cout << "Running at " << newBaseClock << " Ghz " << std::endl;
        }
    }
    else
    {
        std::cout << "Cpu is not running properly" << std::endl;
    }

    return 0;
}

int CustomBuildPc::photoPrint(int photoYouWantToPrint)
{
    int i = 1;
    if ( photoYouWantToPrint <= photo)
    {
        while ( i < photoYouWantToPrint )
        {
            std::cout << "Printed " << i << " photo" << std::endl;
            std::cout << (photo - 1) << " left" << std::endl;
            ++i;
            --photo;
        }
        std::cout << "Totally " << photoYouWantToPrint << " are printed" << std::endl;
    }
    return photoYouWantToPrint;
}

// 2a
float CustomBuildPc::Cpu::getCpuCondition(float cpuTemp)
{
    if ( cpuTemp <= 80.0f )
    {
        std::cout << "Cpu is running normal" << std::endl;
    }
    return cpuTemp;
}

void CustomBuildPc::Cpu::displayCpuTemp()
{
    std::cout << "Get Cpu Temp: " << this->getCpuCondition(60.0f) << std::endl;
}

void CustomBuildPc::getSizeOfHDDInGB()
{
    std::cout << "Get size of HDD: " << this->amountOfHddInGb << std::endl;
}

