#ifndef H_EXTCLOCKTYPE
#define H_EXTCLOCKTYPE
#include"clocktype.h"
#include<string>
using namespace std;
class extClockType : public clockType
{
public:
	void getTimeZone();
	void timeChange();
	void compareZones();
	extClockType();
	~extClockType();
private:
	string timeZone;
};



#endif

