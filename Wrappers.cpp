
#include "Wrappers.h"
#include "CustomBuildPc.h"
#include "PhotoShoot.h"
#include "Keyboard.h"
#include "OperatingSystem.h"
#include "SoftwareDevelopment.h"

CustomBuildPcWrapper::CustomBuildPcWrapper( CustomBuildPc* ptr ) : customBuildPcPtr( ptr ) { }
CustomBuildPcWrapper::~CustomBuildPcWrapper()
{
    delete customBuildPcPtr;
}

PhotoShootWrapper::PhotoShootWrapper( PhotoShoot* ptr ) : photoShootPtr( ptr ) { }
PhotoShootWrapper::~PhotoShootWrapper()
{
    delete photoShootPtr;
}

KeyboardWrapper::KeyboardWrapper( Keyboard* ptr ) : keyboardPtr( ptr ) { }
KeyboardWrapper::~KeyboardWrapper()
{
    delete keyboardPtr;
}

OperatingSystemWrapper::OperatingSystemWrapper( OperatingSystem* ptr ) : operatingSystemPtr ( ptr ) { }
OperatingSystemWrapper::~OperatingSystemWrapper()
{
    delete operatingSystemPtr;
}

SoftwareDevelopmentWrapper::SoftwareDevelopmentWrapper( SoftwareDevelopment* ptr ) : softwareDevelopmentPtr( ptr ) { }
SoftwareDevelopmentWrapper::~SoftwareDevelopmentWrapper()
{
    delete softwareDevelopmentPtr;
}


