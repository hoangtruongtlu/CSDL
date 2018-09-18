#ifndef list_h
#define list_h
#include "node.h"
template <class T>

class List
{
private:
	Node<T> *data;
public:
	List()
	{
		data = 0;
	};

	void Add(T value)
	{
		Node<T> *n = new Node<T>;
		n->head = value;
		n->tail = 0;

		if(data == 0)
		{
			data = n;
		}
		else{
			Node<T> *p = data;
			while(p->tail != 0)
				p = p->tail;
			p->tail = n;				
		}
	};
	void Delete(int pos)
	{
		if(pos == 1)
			data = data -> tail;
		else{
			Node<T> *p = data;
			for(int i=1; i<pos-1; i++)
				p = p->tail;
			p->tail = p->tail->tail;

		}
	};
	void printAll() const
	{
		Node<T> *p = data;
		while(p!=0)
		{
			cout<<p->head;
			p = p->tail;
		}
	};

	
};

#endif