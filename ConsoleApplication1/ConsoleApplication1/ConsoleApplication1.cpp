#include "stdafx.h"
#include "Room.h"
#include "Window.h"
#include "Street.h"
#include "Flat.h"
#include "House.h"
#include <string>
#include <vector>
#include<iostream>
using namespace std;


int main()
{
	vector<Window*> *win = new vector<Window*>();
	win->push_back(new Window(1.0, 1.0));

	Room* obj = new Room(10.0,10.0,10.0,"green",3.0,*win,new Parquet(10.0,10.0));
	Room* obj2 = new Room(20.0, 20.0, 20.0, "black", 60.0, *win, new Parquet(20.0, 20.0));
	vector<Room*> *room = new vector<Room*>();

	room->push_back(obj);
	room->push_back(obj2);

	Flat* flat = new Flat(2,*room);

	vector<Flat*> *flats = new vector<Flat*>();
	flats->push_back(flat);

	House* house = new House(2, 1,*flats);

	vector<House*> *houses = new vector<House*>();
	houses->push_back(house);
	Street* street = new Street(*houses);

	cout <<"Final square of house: " <<street->getCountOfSquaret() << endl;
	cout <<"Final square of parquet: " <<street->getCountOfParquet() << endl;
	cout <<"Final square of glass: " <<street->getCountOfGlass() << endl;

		int temp;
		cin >> temp;

    return 0;
}

