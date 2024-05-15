//WAP for Base and Derive class constructor.
#include<iostream>
using namespace std;
class Base
{
	protected: 
		int x;
	public:
		Base(int a)
		{
			x=a;
			cout<<"1 args Base Constructor"<<endl;
		}
		void showX()
		{ 
			cout<<"x="<<x<<endl;
		}
}; 
class Derived : public Base
{
	int y;
	public:
		Derived(int a,int b):Base(a)
		{
			y=b;
			cout<<"2 args Derive Constructor"<<endl;
		}
		void showY()
		{ 
			cout<<"y="<<y<<endl;
		}
};
int main ( )
{
	Derived objd(3,4);
	objd.showX();
	objd.showY();
}
