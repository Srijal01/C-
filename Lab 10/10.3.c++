//Simple Illustration of exception handling
#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 20;
	}
	catch (int x)
	{
		cout<<"An exception occurred: exception no:"<<x<<endl;
	}
	return 0;
}
