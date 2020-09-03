#pragma once
#include "Header.h"
#include "Maps.h"

Map::Map()
{
	Angle angle = { 0,0 };
	x = 0;
	y = 0;
}

void Map::importCoordinates()
{
	cout << "¬ведите координаты" << endl;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
}

void Map::transferGradToGradMin()
{
	x_angle.grad = trunc(x);
	x_angle.min = (x - x_angle.grad) * 60;
	x_angle.sec = (((x - x_angle.grad) * 60) - x_angle.min) * 60;

	y_angle.grad = trunc(y);
	y_angle.min = (y - y_angle.grad) * 60;
	y_angle.sec = (((y - y_angle.grad) * 60) - y_angle.min) * 60;
}

void Map::showAngles()
{
	cout << x_angle.grad << "\xB0" << x_angle.min << "\x27" << x_angle.sec << "\x22 с.ш." << endl;
	cout << y_angle.grad << "\xB0" << y_angle.min << "\x27" << y_angle.sec << "\x22 в.д." << endl;
}

void Map::calculate()
{
	transferGradToGradMin();
}