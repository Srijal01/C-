//WAP using namespace.
#include<iostream>
using namespace std;
namespace first
{
	int var= 5;
	int value()
	{
		return var;
	}
}
namespace second
{
	double var= 3.1416;
	double value()
	{
		return 2*var;
	}
}
int main()
{
	cout<<"Variable from First: "<<first::var<<endl;
	cout<<"Value from First: "<<first::value()<<endl;
	cout<<"Variable form Second: "<<second::var<<endl;
	cout<<"Value from Second: "<<second::value()<<endl;
	return 0;
}
