#pragma once
#include "Automobile.h"

class Taxi :
	public Automobile
{
private:
	float fare;
	float totalMoneyThisCar;

public:
	Taxi(float fare, float totalMoneyThisCar);
	~Taxi();

	float AmountOfPaymentForATrip(float);
};

