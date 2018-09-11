#include <iostream>
#include "list.h"
using namespace std;
int main()
{
	List<int> ds;
	ds.Add(5);
	ds.Add(4);
	ds.Add(10);
	ds.Add(100);
	ds.Add(4);
	//ds.Change(1, 10);
	//ds.Insert(3, 50);
	//ds.Delete(4);
	//ds.Swap(1,2);
	//ds.Cout(4);
	ds.Find(4);
	//ds.DeleteNumber(4);
	//ds.PrintAll();
	//cout<<"So phan tu la: "<<ds.Count()<<endl;
	return 0;
}