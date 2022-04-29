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

    void getOutPutChar();
   
    int typeCharacters();
    void connectToUsb(int numPortsConnected);
    void sendKeyCommands(int keyInput, std::string keyLayout);
    int deleteCharacter(int pressDeleteKey);

    JUCE_LEAK_DETECTOR(Keyboard)
};

