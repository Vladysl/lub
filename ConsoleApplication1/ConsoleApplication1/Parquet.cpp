#include "stdafx.h"
#include "Parquet.h"




Parquet::Parquet(double l , double w)
{
	this->l = l;
	this->w = w;
}

Parquet::~Parquet()
{
}

double Parquet::getl()
{
	return this->l;
}

double Parquet::getw()
{
	return this->w;
}
