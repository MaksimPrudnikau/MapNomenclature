#pragma once

const static char TimeZone[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'Y', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V' };

class Map
{
	struct Angle
	{
		int grad;
		int min;
		int sec;
	}x_angle, y_angle, latitude_remainder, longtitude_remainder;

	double x, y;
	
	struct Card
	{
		char Letter;
		int
			_1value,
			_2value;
		char
			_2Letter,
			_3letter;
		int 
			_3value;
	}card;

public:
	Map();
	void showAngles();
	void importCoordinates();
	void calculate();
private:
	void transferGradToGradMin();
	void set_1Letter();
	void set_1value();
};

