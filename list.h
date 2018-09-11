#include <iostream>
using namespace std;
template <class T>
class List
{
	private:
		T a[100];
		int N;
	public:
		List()
		{
			N=0;
		};
		void Add(T v)
		{
			a[N]=v;
			N++;
		};
		void PrintAll() const
		{
			for (int i=0;i<N;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		};
		void Change(int pos, T value)
		{
			a[pos-1]=value;
		};
		int Count() const
		{
			return N;
		};
		void Insert(int pos, T newvalue)
		{
			N++;
			for (int i=N;i>=pos;i--)
			{
				a[i]=a[i-1];
			}
			a[pos-1]=newvalue;
		};
		void Delete(int pos)
		{
			for (int i=pos-1;i<N;i++)
			{
				a[i]=a[i+1];
			}
			N--;
		};
		void Swap(int pos1, int pos2)
		{
			T temp;
			temp = a[pos1-1];
			a[pos1-1]=a[pos2-1];
			a[pos2-1]=temp;
		};
		void Cout(T value)
		{
			int count=0;
			for (int i=0;i<N;i++)
			{
				if(a[i]==value)
				{
					count++;
					cout<<value<<" xuat hien "<<count<<" lan ";
					cout<<endl;
				}
			}
		};
		void Find(T value)
		{
				for (int i=0;i<N;i++)
				{
					if (a[i]==value)
					{
						cout<<value<<" xuat hien o vi tri "<<i+1<<endl;;
					}
				}
		};
		/*void DeleteNumber(T value)
		{
			bool flag = true;
			for (int i=0; i<N+1; i++)
				{
					if (a[i]==value)
					{
						flag = true;
						a[i]=a[i+1];
					}
				}
		}*/
};
