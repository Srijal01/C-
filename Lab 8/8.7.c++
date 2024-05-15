//WAP for Pure Virtual function example using inheritance.
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()=0;
};
class Derv1: public Base
{
	public:
		void show()
		{
			cout<<"\n I am Derv1 class";
		}
};
class Derv2: public Base
{
	public:
		void show()
		{
			cout<<"\n I am Derv2 class";
		}
};
int main()
{
	Derv1 dv1;
	Derv2 dv2;
	Base *ptr;
	ptr=&dv1;
	ptr->show();
	ptr=&dv2;
	ptr->show();
}
