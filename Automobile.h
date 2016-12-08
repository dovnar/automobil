#pragma once
class Automobile
{
private:
	char* brandAndModel;
	int yearOfManufacture;
	int averageSpeedOfTheCar;
public:
	Automobile(char* bAM, int yOM, int aSOTC);
	~Automobile();
	char* GetBrandAndModel()const
	{
		return brandAndModel;
	}
	int GetYearOfManufacture()
	{
		return yearOfManufacture;
	}
	int GetAverageSpeedOfTheCar()
	{
		return averageSpeedOfTheCar;
	}
	float ComputeDistance(float time)
	{
		return (averageSpeedOfTheCar * time);
	}
};

