//WAP to calculate area and circumference of a circle.
#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
	float r,a,c;
	cout<<"Enter radius: ";
	cin>>r;
	a= pi * r * r;
	c= 2 * pi * r;
	cout<<"The area of a circle is "<<a<<endl;
	cout<<"The circumference of a circle is "<<c<<endl;
	return 0;
}
