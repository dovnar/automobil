#pragma once
class Automobile
{
private:
	char* brandAndModel;
	int yearOfManufacture;
protected:
	float averageSpeedOfTheCar;
	
public:
	Automobile(char* bAM, int yOM, float aSOTC);
	Automobile(float, float);
	Automobile();
	virtual ~Automobile();

	char* GetBrandAndModel()const
	{
		return brandAndModel;
	}
	int GetYearOfManufacture()const
	{
		return yearOfManufacture;
	}
	float GetAverageSpeedOfTheCar()const
	{
		return averageSpeedOfTheCar;
	}

	float ComputeDistance(float time);
};

