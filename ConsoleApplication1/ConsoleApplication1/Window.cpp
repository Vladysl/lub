#include "stdafx.h"
#include "Window.h"
using namespace std;


Window::Window(double l, double w)
{
	this->l = l;
	this->w = w;
}

double Window::getl()
{
	return l;
}

double Window::getw()
{
	return w;
}
