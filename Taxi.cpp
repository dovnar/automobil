#include "stdafx.h"
#include "Taxi.h"
#include "Automobile.h"


Taxi::Taxi(float fare, float totalMoneyThisCar)
{

}

Taxi::~Taxi()
{
}

float Taxi::AmountOfPaymentForATrip(float time)
{
	float result = Automobile::ComputeDistance(time);

}
