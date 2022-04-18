/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 The purpose of this project part is to show you how accessing member variables of objects INSIDE member functions is very similar to accessing member variables of objects OUTSIDE of member functions, via the 'this' keyword and arrow (->) operator and via the '.' operator.
 This project part will break the D.R.Y. rule, but that is fine for the purpose of this project part.
 
 Instructions:
 1) if you don't have any std::cout statements in main() that access member variables of your U.D.Ts
         write some.
    You can copy some from your Project3's main() if needed.

 2) Do the following for EVERY std::cout statement in main() that uses the UDT member variables and functions:
    a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
    b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
    c) call that member function AFTER your std::cout statement in main.
    NOTE: if your member functions being called in main() use std::cout statements, you don't need to create duplicates of these functions.  you only need to create member functions for the std::cout statements that exist in main().
        
 3) you should see 2 (almost) identical messages in the program output for each member function you add:
    one for the std::cout line, and one for the member function's output
 
 4) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
 example:
 */
#include <iostream>
namespace Example
{
    //a User-Defined Type
    struct MyFoo
    {
        MyFoo();
        ~MyFoo();
        
        void printDetailedMemberInfo();
        
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };

    MyFoo::MyFoo() { std::cout << "creating MyFoo" << std::endl; }
    MyFoo::~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
        
	// 2a) the member function whose function body is almost identical to the std::cout statement in main.
    //Remember to NAME FUNCTIONS WHAT THEY DO.
    void MyFoo::printDetailedMemberInfo() //function name contains a verb!!!
    { 
        // 2b) explicitly using 'this' inside this member function.
        std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; 
    }  
    
    int main()
    {
        //an instance of the User-Defined Type named mf
        MyFoo mf;
        
        // 1) a std::cout statement that uses mf's member variables
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl; 
        
        // 2c) calling mf's member function.  the member function's body is almost identical to the cout statement above.
        mf.printDetailedMemberInfo();
        return 0;
    }
}

/*

 Ignore the Atomic.h and LeakedObjectDetector.h files for now.
 You will use those in Part 3 of this project.
*/

#include<iostream>

/*
 copied UDT 1:
 */

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
    };

    void writeProgram(std::string language);
    void createVideo(Cpu& cpuB, std::string nameOfCpu);
    void editPhoto();
    void photoPrint(int photoYouWantToPrint);
};

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

void CustomBuildPc::photoPrint(int photoYouWantToPrint)
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
    return;
}

/*
 copied UDT 2:
 */

struct PhotoShoot
{
    int numCameras = 4;
    int numHairMakeUpArtists;
    int numModel = 8;
    std::string nameOfCompanies = "Apple";

    PhotoShoot();
    ~PhotoShoot();

    int amountOfMemoryCard;
    float amountOfClothes;

    struct Camera
    {
        double shutterSpeed { 0.000125 }; 
        bool isMirrorLess = true;
        std::string brand = "Nikon";
        std::string model;
        std::string typeOfLens;

        Camera();
        ~Camera();

        void shootVideo();
        void changeLens();
        int takePhoto();
        void countModel(int personTaken);
    };

    void makePr();
    void makeNewFashionStyle(Camera& cameraA);
    int bookStudio(int daysToShoot, int numOfCrews);
    int callHairMakeArtist(int personToBeShot);
};

PhotoShoot::PhotoShoot() : 
amountOfMemoryCard(512),
amountOfClothes(25.0f)
{
    std::cout << "PhotoShoot being constructed!" << std::endl;
}

PhotoShoot::~PhotoShoot()
{
    std::cout << "PhotoShoot being destructed!" << std::endl;    
}

PhotoShoot::Camera::Camera() : 
model("Z9"),
typeOfLens("Standard")
{
    std::cout << "Camera being constructed!" << std::endl;
}

PhotoShoot::Camera::~Camera()
{
    std::cout << "Camera being destructed!" << std::endl;    
}

void PhotoShoot::makePr()
{
    std::cout << "PhotoShoot::makePr() " << nameOfCompanies << std::endl;
}

void PhotoShoot::makeNewFashionStyle(Camera &cameraA)
{
    std::cout << "We need " << amountOfMemoryCard << " of Memory Card and " << amountOfClothes << " of clothes" << std::endl;
    std::cout << cameraA.brand << std::endl;
}

int PhotoShoot::bookStudio(int daysToShoot, int numOfCrews)
{
    std::cout << "We need " << daysToShoot << " studio days and " << numOfCrews << " Crews" << std::endl;
    return 0;
}

void PhotoShoot::Camera::shootVideo()
{
    if ( isMirrorLess == false)
    {
        std::string anotherLens = "parfoca";
    }

    std::cout << "We use " << model << std::endl;
}

void PhotoShoot::Camera::changeLens()
{
    std::cout << "PhotoShoot::Camera::changeLens() "<< typeOfLens << std::endl;
}

int PhotoShoot::Camera::takePhoto()
{
    if ( isMirrorLess )
    {
       std::cout << brand << std::endl;
    }
    int photoTaken = 2;
    return photoTaken;
}

void PhotoShoot::Camera::countModel(int personTaken)
{
    PhotoShoot photoShoot;
    
    for ( int i = 1; i < personTaken; ++i )
    {
        std::cout << i << " Person is done" << std::endl;
        std::cout << photoShoot.numModel - 1 << " models left" << std::endl;
        photoShoot.numModel -= 1;
    }
    return;
}

int PhotoShoot::callHairMakeArtist(int personToBeShot)
{
    int i = 1;
    numHairMakeUpArtists = 1;

    while( i < personToBeShot )
    {
        std::cout << i << " model here" << std::endl;
        std::cout << "we need " << numHairMakeUpArtists << " hair make up artists" << std::endl;

        ++i;
        ++numHairMakeUpArtists;
    }
    
    return numHairMakeUpArtists;
}

/*
 copied UDT 3:
 */

struct Keyboard
{
    Keyboard();
    ~Keyboard();

    int numUsbPorts;
    int characterTyped;
    int numKeysTyped;
    float distanceKeyTravel;
    std::string keyLanguage;
    float bluetoothChannel;
   
    int typeCharacters();
    void connectToUsb(int numPortsConnected);
    void sendKeyCommands(int keyInput, std::string keyLayout);
    int deleteCharacter(int pressDeleteKey);
};

Keyboard::Keyboard() : 
numUsbPorts(2),
characterTyped(40),
numKeysTyped(20),
distanceKeyTravel(15.0f),
keyLanguage("US"),
bluetoothChannel(2.0f)
{
    std::cout << "Keyboard being constructed!" << std::endl;
}

Keyboard::~Keyboard()
{
    std::cout << "Keyboard being destructed!" << std::endl;
}

int Keyboard::typeCharacters()
{
    std::cout << "Keyboard::typeCharacters() " << characterTyped << std::endl;
    return characterTyped;
}

void Keyboard::connectToUsb(int numPortsConnected)
{
    if ( numPortsConnected == 2 )
    {
        std::cout << "All USB Ports Are Connected" << std::endl;
    }

    std::cout << numUsbPorts << " usb ports are being used" << std::endl;
}

void Keyboard::sendKeyCommands(int keyInput, std::string keyLayout)
{
    if ( keyInput == 109 )
    {
        std::cout << "It is Apple Keyboard " << keyLayout << std::endl;
    }
}

int Keyboard::deleteCharacter(int pressDeleteKey)
{
    if ( pressDeleteKey >= characterTyped )
    {
        std::cout << "You deleted all words" << std::endl;
    }
    else
    {
        for ( int i = 1; i <= pressDeleteKey; ++i )
        {
            std::cout << "You deleted " << i << " character(s)" << std::endl;
            characterTyped -= 1;
        }

        std::cout << "You deleted all words" << std::endl;
    }
    return characterTyped;
}

/*
 new UDT 4:
 with 2 member functions
 */

struct OperatingSystem
{
    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    OperatingSystem();
    ~OperatingSystem();

    void monitorActivity(int amountOfRamInUse);
    int photoFinder();
};

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

/*
 new UDT 5:
 with 2 member functions
 */

struct SoftwareDevelopment
{
    SoftwareDevelopment();
    ~SoftwareDevelopment();

    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    void setUpIDE(std::string nameOfOS, int amountOfHddInGb);
    void installFrameWork(std::string nameOfFrameWork);
};

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

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    CustomBuildPc customBuildPc;
    CustomBuildPc::Cpu cpu;

    customBuildPc.editPhoto();
    customBuildPc.writeProgram("C++");
    customBuildPc.createVideo(cpu, "AMD");
    customBuildPc.photoPrint(35);

    std::cout << "You edited "<< customBuildPc.photo << " photos" << std::endl;
    
    cpu.runProgram();
    cpu.powerConsume(10, 40, true);
    cpu.getTimeToCompile(150.0f, "Compile Error");

    auto newCpuClock = cpu.clockUp(1.0f);
    std::cout << newCpuClock << std::endl;

    Keyboard keyboard;
    keyboard.typeCharacters();
    keyboard.connectToUsb(3);
    keyboard.sendKeyCommands(10, "US-EN");

    std::cout << "How many characters are typed? " << keyboard.characterTyped << std::endl;

    auto charLeft = keyboard.deleteCharacter(34);
    std::cout << "There are " << charLeft << " characters left" << std::endl;

    // UDT 4
    OperatingSystem operatingSystem;
    operatingSystem.monitorActivity(12);
    auto photo = operatingSystem.photoFinder();
    std::cout << photo << std::endl;

    // UDT 5
    SoftwareDevelopment softwaredevelopment;
    softwaredevelopment.setUpIDE("macOS", 1000);
    softwaredevelopment.installFrameWork("Juce");
    
    std::cout << "good to go!" << std::endl;
}
