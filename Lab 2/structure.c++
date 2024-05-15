//STRUCTURE
#include<iostream>
struct currency
{
	int rupees;
	float paisa;
};		//currency is name for struct currency
using namespace std;
int main()
{
	currency c1, c3;
	currency c2= {123,56.4};
	cout<<"Enter Rupees: ";
	cin>>c1.rupees;
	cout<<"Enter paisas: ";
	cin>>c1.paisa;
	c3.rupees= c1.rupees + c2.rupees;
	c3.paisa= c1.paisa +c2.paisa;
	if(c3.paisa>100.0)
	{
		c3.rupees++;
		c3.paisa-=100.0;
	}
	cout<<"Rs."<<c1.rupees<<" Ps."<<c1.paisa<<" + ";
	cout<<"Rs."<<c2.rupees<<" Ps."<<c2.paisa<<" = ";
	cout<<"Rs."<<c3.rupees<<" Ps."<<c3.paisa<<endl;
}

