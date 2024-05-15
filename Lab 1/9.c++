//WAP that converts a temperature from Celsius to Fahrenheit. [Hint: C= 5/9(F-32)]
#include<iostream>
using namespace std;
int main()
{
	double celsius, farenheit;
	cout<<"Enter a temperature in Celsius: ";
	cin>>celsius;
	farenheit= (celsius* 9.0/5.0)+ 32.0;
	cout<<celsius<<"degree Celsius is equal to "<<farenheit<<"degree Farenheit."<<endl;
	return 0;
}
