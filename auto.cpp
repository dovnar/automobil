// auto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Automobile.h"
//#include "Taxi.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Automobile a1("bmw 325i", 1998, 108);
	std::cout << a1.ComputeDistance(1.25);
	return 0;
}

