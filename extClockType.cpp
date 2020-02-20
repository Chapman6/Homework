#include "extClockType.h"
void extClockType::getTimeZone()
{
	cout << "Input time zone of user. This can only use American time zones. Apologies for any inconvience. Options are est, cst, mst, pst, ast, hst.\n";
	string timezone;
	cin >> timezone;
	timeZone = timezone;
}

void extClockType::timeChange()
{
	if (timeZone == "cst")
		hr--;
	else if (timeZone == "mst")
		hr = hr - 2;
	else if (timeZone == "pst")
		hr = hr - 3;
	else if (timeZone == "ast")
		hr = hr - 4;
	else if (timeZone == "hst")
		hr = hr - 5;
	else if (timeZone == "est")
		hr = hr;
	else
	{
		cout << "Invalid time-zone.\n";
		getTimeZone();
	}
	if (hr < 0)
	{
		day--;
		hr = 24 + hr;
	}
}

void extClockType::compareZones()
{
	string comparison, dummy;
	dummy = timeZone;
	cout << "Input time zone to compare. Options are est, cst, mst, pst, ast, hst.";
	cin >> comparison;
	cout << "The first time-zone time is ";
	printTime();
	timeZone = comparison;
	timeChange();
	cout << "The second time-zone time is ";
	printTime();
	timeZone = dummy;
	timeChange();
}

extClockType::extClockType()
{
	timeZone = "est";
}
extClockType::~extClockType()
{

}