#include "stdafx.h"
#include "Room.h"
#include "Window.h"
#include <vector>
using std::vector;

using namespace std;

	Room::Room(double l, double w, double h, string s, double square, vector<Window*> window, Parquet* parquet) {
		this->l = l;
		this->w = w;
		this->h = h;
		this->s = s;
		this->square = square;
		this->data = window;
		this->parquet = parquet;
	}

	Room::~Room() {}
	

	double Room::getSquere() {
		return square;
	}

	double Room::getl()
	{
		return l;
	}

	double Room::getw()
	{
		return w;
	}

	double Room::geth()
	{
		return h;
	}

	string Room::gets()
	{
		return s;
	}

	vector<Window*> Room::getWin()
	{
		return data;
	}

	Parquet * Room::getParquet()
	{
		return parquet;
	}


