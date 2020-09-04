#pragma once
#include "Header.h"
#include "Maps.h"

Map::Map()
{
	x_angle = y_angle = { 0,0 };
	x = 0;
	y = 0;
}

void Map::importCoordinates()
{
	/*cout << "¬ведите координаты" << endl;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;*/
	x = 54.002507;
	y = 27.951434;
}

void Map::transferGradToGradMin()
{
	x_angle.grad = trunc(abs(x));
	x_angle.min = (x - x_angle.grad) * 60;
	x_angle.sec = (((x - x_angle.grad) * 60) - x_angle.min) * 60;

	y_angle.grad = trunc(abs(y));
	y_angle.min = (y - y_angle.grad) * 60;
	y_angle.sec = (((y - y_angle.grad) * 60) - y_angle.min) * 60;
}

void Map::set_1Letter()
{
	int number = trunc((x_angle.grad + 4) / 4);
	card.Letter = TimeZone[number - 1];
	latitude_remainder.grad = x_angle.grad - (number * 4 - 4);
	latitude_remainder.min = x_angle.min;
}

void Map::set_1value()
{

}

void Map::showAngles()
{
	cout << x_angle.grad << "\xB0" << x_angle.min << "\x27" << x_angle.sec << "\x22 с.ш." << endl;
	cout << y_angle.grad << "\xB0" << y_angle.min << "\x27" << y_angle.sec << "\x22 в.д." << endl;
}

void Map::calculate()
{
	transferGradToGradMin();
	set_1Letter();
} 