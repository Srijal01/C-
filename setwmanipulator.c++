//demonstrates setw manipulator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long pop1=2425678;
	cout<<setw(8)<<"LOCATION"<<setw(12)<<"POPULATION"<<endl;
	cout<<setw(8)<<"Patan"<<setw(12)<<pop1<<endl;
	cout<<setw(8)<<"Khotang"<<setw(12)<<pop1<<endl;
	cout<<setw(8)<<"Butwal"<<setw(12)<<pop1<<endl;
}
