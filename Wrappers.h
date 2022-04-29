#pragma once

struct CustomBuildPc;
struct PhotoShoot;
struct Keyboard;
struct OperatingSystem;
struct SoftwareDevelopment;

struct CustomBuildPcWrapper
{
    CustomBuildPcWrapper( CustomBuildPc* ptr );
    ~CustomBuildPcWrapper();
    
    CustomBuildPc* customBuildPcPtr = nullptr;
};

struct PhotoShootWrapper
{
    PhotoShootWrapper( PhotoShoot* ptr );
    ~PhotoShootWrapper();
    
    PhotoShoot* photoShootPtr = nullptr;
};

struct KeyboardWrapper
{
    KeyboardWrapper( Keyboard* ptr );
    ~KeyboardWrapper();
    
    Keyboard* keyboardPtr = nullptr;
};

struct OperatingSystemWrapper
{
    OperatingSystemWrapper( OperatingSystem* ptr );
    ~OperatingSystemWrapper();
    
    OperatingSystem* operatingSystemPtr = nullptr;
};

struct SoftwareDevelopmentWrapper
{
    SoftwareDevelopmentWrapper( SoftwareDevelopment* ptr );
    ~SoftwareDevelopmentWrapper();
    
    SoftwareDevelopment* softwareDevelopmentPtr = nullptr;
};

