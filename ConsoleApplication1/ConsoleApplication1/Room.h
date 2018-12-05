#pragma once
#include <string>
#include "Window.h"
#include "Parquet.h"
#include <vector>
using std::vector;
using namespace std;

class Room
{
private:
	double l, w, h;
	string s;
	double square;
	vector<Window*> data;
	Parquet* parquet;



public:
	Room(double, double, double, string, double,vector<Window*>,Parquet*);

	~Room();

	double getSquere();

	double getl();

	double getw();
	
	double geth();

	string gets();

	vector<Window*> getWin();

	Parquet* getParquet();


};

