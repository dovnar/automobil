#include "stdafx.h"
#include "Automobile.h"


Automobile::Automobile(char* bAM, int yOM, float aSOTC)
{
	brandAndModel = bAM;
	yearOfManufacture = yOM;
	averageSpeedOfTheCar = aSOTC;
}

Automobile::Automobile()
{

}

Automobile::~Automobile()
{
	std::cout << "the car has crashed... " << std::endl;
}

float Automobile::ComputeDistance(float time)
{
	return (averageSpeedOfTheCar * time);
}
