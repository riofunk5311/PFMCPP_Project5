#include "Keyboard.h"
#include <iostream>

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

int Keyboard::typeCharacters() const
{
    std::cout << "Keyboard::typeCharacters() " << characterTyped << std::endl;
    return characterTyped;
}

void Keyboard::connectToUsb(const int numPortsConnected) const
{
    if ( numPortsConnected == 2 )
    {
        std::cout << "All USB Ports Are Connected" << std::endl;
    }

    std::cout << numUsbPorts << " usb ports are being used" << std::endl;
}

void Keyboard::sendKeyCommands(const int keyInput, const std::string keyLayout) const
{
    if ( keyInput == 109 )
    {
        std::cout << "It is Apple Keyboard " << keyLayout << std::endl;
    }
}

int Keyboard::deleteCharacter(const int pressDeleteKey)
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

void Keyboard::getOutPutChar() const
{
    std::cout << "How many characters are typed? " << this->characterTyped << std::endl;
}

