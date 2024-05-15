//WAP to demonstrate Inline function.
#include<iostream>
inline float lbstokg(float pound)
{
	return (0.453592*pound);
}
using namespace std;
int main()
{
	float lbs1=50, lbs2=100;
	cout<<"Weight in Kg: "<<lbstokg(lbs1)<<endl;
	cout<<"Weight in Kg: "<<lbstokg(lbs2)<<endl;
}
