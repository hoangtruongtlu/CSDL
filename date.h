#include <iostream>
using namespace std;
class Date
{
private:
	int d;
	int m;
	int y;
public:
	Date()
	{
		d=1;
		m=1;
		y=200;
	};
	Date(int day, int month, int year)
	{
		d=day;
		m=month;
		y=year;
	};
	friend ostream & operator<<(ostream &out, const Date &d)
	{
		out<<d.d<<"-"<<d.m<<"-"<<d.y;
		return out;
	}
};