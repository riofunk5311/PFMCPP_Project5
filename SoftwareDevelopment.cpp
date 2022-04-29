#include "SoftwareDevelopment.h"
#include "CustomBuildPc.h"
#include <iostream>

SoftwareDevelopment::SoftwareDevelopment()
{
    std::cout << "Software Development being constructed!" << std::endl;
}

SoftwareDevelopment::~SoftwareDevelopment()
{
    std::cout << "Software Development being destructed!" << std::endl;
}

void SoftwareDevelopment::setUpIDE(std::string nameOfOS, int amountOfHddInGb)
{
    if ( amountOfHddInGb > 50 )
    {
        std::cout << "Configuration: " << nameOfOS << " \nCPU: " << cpu.manufacturer << std::endl;
        std::cout << "Installation will begin" << std::endl;
    }
}

void SoftwareDevelopment::installFrameWork(std::string nameOfFrameWork)
{
    int minRam = customBuildPc.amountOfRamInGb - 16;
    int minHDD = customBuildPc.amountOfHddInGb - 1880;
    std::cout << nameOfFrameWork << " will require " << minHDD << " gb space and " << minRam << " gb of RAM" << std::endl;
}

void SoftwareDevelopment::displaySystemInfo()
{
    std::cout << "System Info: " << this->getRamAmountInGB() << std::endl;
}

int SoftwareDevelopment::getRamAmountInGB()
{
    std::cout << "Amount of RAM: " << customBuildPc.amountOfRamInGb << std::endl;
    return customBuildPc.amountOfRamInGb;
}

