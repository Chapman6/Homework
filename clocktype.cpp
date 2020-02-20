
#include "clockType.h"

using namespace std;

void clockType::setTime(int years, int months, int days, int hours, int minutes, int seconds)
{
	yr = years;

	if (0 <= months && months < 13)
		mo = months;
	else
		mo = 1;

	if (0 <= days && days < 31)
		day = days;
	else
		day = 1;

	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

void clockType::getTime(int& years, int& months, int& days, int& hours, int& minutes, int& seconds) const
{
	years = yr;
	months = mo;
	days = day;
	hours = hr;
	minutes = min;
	seconds = sec;
}
void clockType::incrementYears()
{
	yr++;
}

void clockType::incrementMonths()
{
	mo++;
	if (mo > 12)
	{
		mo = 1;
		incrementYears();
	}
}

void clockType::incrementDays()
{
	day++;
	if (day > 31)
	{
		day = 1;
		incrementMonths();
	}
}

void clockType::incrementHours()
{
	hr++;
	if (hr > 23)
	{
		hr = 0;
		incrementDays();
	}

}

void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
	{
		min = 0;
		incrementHours();
	}
}

void clockType::incrementSeconds()
{
	sec++;

	if (sec > 59)
	{
		sec = 0;
		incrementMinutes();
	}
}

void clockType::printTime() const
{
	if (mo < 10)
		cout << "0";
	cout << mo << "-";

	if (day < 10)
		cout << "0";
	cout << day << "-";

	if (yr < 10)
		cout << "0";
	cout << yr << " Time:";

	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min < 10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec << endl;
}

bool clockType::equalTime(const clockType& otherClock) const
{
	return (hr == otherClock.hr
		&& min == otherClock.min
		&& sec == otherClock.sec);
}

clockType::clockType(int years, int months, int days, int hours, int minutes, int seconds)
{
	yr = years;

	if (0 <= months && months <= 12)
		mo = months;
	else
		mo = 1;

	if (0 < days && days <= 31)
		day = days;
	else
		day = 1;

	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

clockType::clockType()  //default constructor
{
	yr = 0;
	mo = 0;
	day = 0;
	hr = 0;
	min = 0;
	sec = 0;
}

clockType::~clockType()
{

}