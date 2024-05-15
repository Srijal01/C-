//WAP for Virtual function example using inheritance.
#include<iostream>
using namespace std;
class parent
{
	private :
		int a ;
	public:
		parent() 
		{ 
			a = 1 ; 
		}
		virtual void display()
		{ 
			cout <<"\nvalue from parent class :"<<a ;
		}
};
class child1: public parent
{
	int a ;
	public:
		child1() 
		{ 
			a = 2;
		}
		void display()
		{ 
			cout<<"\nValue from child1 is :"<<a;
		}
};
class child2 : public parent
{ 
	int a;
	public:
	child2() 
	{ 
		a = 3;
	}
	void display()
	{ 
		cout <<" \n Value from child2 is:"<<a;
	}
};
int main()
{
	parent *baseptr;
	parent p;
	baseptr = &p;
	baseptr->display();
	child1 c1;
	child2 c2;
	baseptr = &c1 ;
	baseptr->display();
	baseptr = &c2 ;
	baseptr->display(); 
}
