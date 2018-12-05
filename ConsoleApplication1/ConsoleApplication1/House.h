#pragma once
#include "Flat.h"
#include <vector>
using std::vector;
class House
{
public:
	int numberOfFLoors,numberOfFLats;
	vector<Flat*> data;
	House(int,int, vector<Flat*>);
	~House();

	int getNumberOfFloors();

	int getNumberOfFLats();

	vector<Flat*> getFlats();
};

