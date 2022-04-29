#pragma once
#include "LeakedObjectDetector.h"

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

    void getOutPutChar() const;
   
    int typeCharacters() const;
    void connectToUsb(const int numPortsConnected) const;
    void sendKeyCommands(const int keyInput, const std::string keyLayout) const;
    int deleteCharacter(const int pressDeleteKey);

    JUCE_LEAK_DETECTOR(Keyboard)
};

