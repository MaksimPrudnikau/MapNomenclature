#pragma once
class Map
{
	struct Angle
	{
		int grad;
		int min;
		int sec;
	}x_angle, y_angle;

	double x, y;

public:
	Map();
	void showAngles();
	void importCoordinates();
	void calculate();
private:
	void transferGradToGradMin();
};

