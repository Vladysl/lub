#include "stdafx.h"
#include "Flat.h"
#include "Parquet.h"


Flat::Flat(int count, vector<Room*> room)
{
	this->count - count;
	this->data = room;
}

Flat::~Flat()
{
}

int Flat::getCount()
{
	return this->count;
}

vector<Room*> Flat::getRooms()
{
	return data;
}

double Flat::getAreas()
{
	double temp = 0;
	for (Room* var : data) {
		temp += var->getl()*var->getw()*var->geth();
	}
	return temp;
}

double Flat::getParquet()
{
	double temp = 0;
	for (Room* var : data) {
		temp += var->getParquet()->getl()*var->getParquet()->getw();
	}
	return temp;
}

double Flat::getWindows()
{
	double temp = 0;
	for (Room* var : data) {
		for(Window* obj : var->getWin()){
			temp += obj->getl()*obj->getw();
		}	
	}
	return temp;
}

double Flat::countGreen()
{
	double temp = 0;
	for (Room* var : data) {
		if (var->gets() == "green")
			temp += var->getSquere();
	}
	return temp;
}

double Flat::countBlack()
{
	double temp = 0;
	for (Room* var : data) {
		if (var->gets() == "black")
			temp += var->getSquere();
	}
	return temp;
}
