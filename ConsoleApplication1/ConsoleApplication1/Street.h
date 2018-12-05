#pragma once
#include "House.h"
#include <vector>
using std::vector;

class Street
{
private:
	double countOfpaint, countOfSquare,countOfParquet,countOfGlass;
	vector<House*> data;
public:
	Street(vector<House*>);
	~Street();

	double getCountOfpaint();

	double getCountOfSquaret();

	double getCountOfParquet();

	double getCountOfGlass();
};

