#include "stdafx.h"
#include "Automobile.h"


Automobile::Automobile(char* bAM, int yOM, int aSOTC)
{
	brandAndModel = bAM;
	yearOfManufacture = yOM;
	averageSpeedOfTheCar = aSOTC;
}

Automobile::~Automobile()
{
}
