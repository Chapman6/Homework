#include "extClockType.h"

using namespace std;

int main()
{
	extClockType c1;
	c1.setTime(4, 4, 4, 4, 4, 4);
	c1.printTime();
	c1.getTimeZone();
	c1.timeChange();
	c1.compareZones();
	return 0;
}