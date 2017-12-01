// time with struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
struct tm {
	int tm_sec; //seconds
	int tm_min; //minutes
	int tm_hour; //hours
	int tm_mday; //day of month
	int tm_mon; //month of year
	int tm_year; //year
	int tm_wday; //days since sunday
	int tm_yday; //days since january 1st
	int tm_isdst; //hours of daylight savings time 
};
*/
int _tmain(int argc, _TCHAR* argv[])
{
	time_t now=time(0);

	cout <<" Number of sec since January 1, 1970 " << now << endl;

	tm *ltm=localtime(&now);

	cout << "Year: "<< 1900 + ltm->tm_year << endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<<  ltm->tm_mday << endl;
    cout << "Time: "<< 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":";
    cout << 1 + ltm->tm_sec << endl;
	system("pause");
	return 0;
}

