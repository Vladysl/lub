#pragma once
#include "Room.h"
#include <vector>
using std::vector;

class Flat
{
private:
	int count;
	vector<Room*> data;

public:
	Flat(int, vector<Room*>);
	~Flat();

	int getCount();

	vector<Room*> getRooms();

	double getAreas();

	double getParquet();

	double getWindows();

	double countGreen();

	double countBlack();

};

