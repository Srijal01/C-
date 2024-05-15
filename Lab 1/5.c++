//WAP to illustrate pass by reference and return by reference.
#include<iostream>
int x=5, y=15;
int &setx();
void swap (int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
using namespace std;
int main()
{
	cout<<"Pass by reference"<<endl;
	int a=15, b=20;
	cout<<"Before swapping: a="<<a<<" and b="<<b<<endl;
	swap(a,b);
	cout<<"After swapping: a="<<a<<" and b="<<b<<endl;
	cout<<"___________________________________________"<<endl;
	cout<<"Return by reference"<<endl;
	setx()=y;
	cout<<"From Main x="<<x<<endl;
}
int &setx()
{
	cout<<endl<<"From Function x="<<x<<endl;
	return x;
}
