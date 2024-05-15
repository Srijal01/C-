//WAP for illustrate of virtual destructor.
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual ~Base()
		{
			cout<<"Base Destryed"<<endl;
		}
};
class Derv1:public Base
{
	public:
		~Derv1()
		{
			cout<<"Derived1 destroyed"<<endl;
		}
};
class Derv2:public Base
{
	public:
		~Derv2()
		{
			cout<<"Derived2 destroyed"<<endl;
		}
};
int main()
{
	Base *pBase = new Derv1;
	delete pBase;
}
