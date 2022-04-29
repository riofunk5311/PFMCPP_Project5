#include "OperatingSystem.h"
#include "CustomBuildPc.h"
#include <iostream>

OperatingSystem::OperatingSystem()
{
    std::cout << "OperatingSystem is being constructed!" << std::endl;
}

OperatingSystem::~OperatingSystem()
{
    std::cout << "OperatingSystem is being destructed!" << std::endl;
}

void OperatingSystem::monitorActivity(int amountRamInUse)
{
    int ramAvailable = customBuildPc.amountOfRamInGb - amountRamInUse;
    std::string program = cpu.program;
    
    std::cout << ramAvailable << " GB available" << std::endl;
    std::cout << program << " is now running" << std::endl;
}

int OperatingSystem::photoFinder()
{
    auto photo = customBuildPc.photo;
    
    for ( int i = 1; i <= photo; ++i )
    {
        std::cout << i << " photos are found" << std::endl;
    }
    return photo;
}

void OperatingSystem::displayNameOfOS()
{
    std::cout << "Name of OS: " << this->nameOfOS << std::endl;
}

