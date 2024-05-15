//WAP to illustrate the example of copy constructor.
#include<iostream>
#include<conio.h>
class Code
{
	private:
		int id;
	public:
		Code() {}	//default
		Code(int a)
		{
			id = a;
		}
		Code(Code &x)	//reference object argument
		{
			id = x.id;
		}
		int display()
		{
			return id;
		}
};	//end of class defination
using namespace std;
int main()
{
	Code p0;
	Code p1(55);
	Code p2(p1);	//copy constructor
	Code p4(p2);
	Code p3 = (p1);
	cout<<"\n Code p1 = "<<p1.display();
	cout<<"\n Code p2 = "<<p2.display();
	cout<<"\n Code p3 = "<<p3.display();
	cout<<"\n Code p4 = "<<p4.display();
}
