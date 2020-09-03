#include "Header.h"

void importCoordinates(double& x, double& y)
{
	cout << "¬ведите координаты" << endl;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	double x, y;
	importCoordinates(x, y);
	return 0;
}