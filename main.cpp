#include "Header.h"
#include "Maps.h"
int main()
{
	setlocale(LC_CTYPE, "rus");
	Map map;
	map.importCoordinates();

	map.calculate();
	
	map.showAngles();
	return 0;
}