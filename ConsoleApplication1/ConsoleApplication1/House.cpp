#include "stdafx.h"
#include "House.h"
#include <vector>
using std::vector;



House::House(int numberOfFLoors, int numberOfFLats, vector<Flat*> flats)
{
	this->numberOfFLats = numberOfFLats;
	this->numberOfFLoors = numberOfFLoors;
	this->data = flats;
}

House::~House()
{
}

int House::getNumberOfFloors()
{
	return numberOfFLoors;
}

int House::getNumberOfFLats()
{
	return numberOfFLats;
}

vector<Flat*> House::getFlats()
{
	return data;
}
