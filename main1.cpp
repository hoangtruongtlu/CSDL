#include <iostream>
#include "list.cpp"
#include "date.h"
using namespace std;
int main()
{
	/*List<Date> ds;
	ds.Add(Date(6,9,2018));
	ds.Add(Date(31,12,2018));
	ds.PrintAll();*/
	List<int> ds;
	ds.Add(5);
	ds.Add(4);
	ds.Add(10);
	ds.Add(100);
	ds.Add(4);
	//ds.Change(1, 10);
	//ds.Insert(3, 50);
	ds.Delete(4);
	//ds.Swap(1,2);
	//ds.Cout(4);
	//ds.Find(4);
	//ds.DeleteNumber(4);
	ds.PrintAll();
	//cout<<"So phan tu la: "<<ds.Count()<<endl;
	return 0;
}