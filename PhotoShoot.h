#pragma once
#include "LeakedObjectDetector.h"

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

    JUCE_LEAK_DETECTOR(PhotoShoot)
};

