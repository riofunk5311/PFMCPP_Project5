#include "PhotoShoot.h"
#include <iostream>

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

