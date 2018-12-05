#include "stdafx.h"
#include "Street.h"
#include "Flat.h"
#include<iostream>
using namespace std;


Street::Street(vector<House*> house)
{
	this->data = house;
	countOfSquare = 0;
	countOfParquet = 0;
	countOfGlass = 0;
	countOfpaint = 0;

	for (House* var : data)
	{
		for (Flat* obj : var->getFlats()) {
			countOfSquare += obj->getAreas();
			countOfParquet += obj->getParquet();
			countOfGlass += obj->getWindows();
			cout<<"Green paint"<< obj->countGreen()<<endl;
			cout << "BLack paint" << obj->countBlack() << endl;
		}
	}
}

Street::~Street()
{
}

double Street::getCountOfpaint()
{
	return countOfpaint;
}

double Street::getCountOfSquaret()
{
	return countOfSquare;
}

double Street::getCountOfParquet()
{
	return countOfParquet;
}

double Street::getCountOfGlass()
{
	return countOfGlass;
}
