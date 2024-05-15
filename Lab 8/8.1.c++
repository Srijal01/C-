//WAP for Single Inheritance (one base and one derive class).
#include<iostream>
using namespace std;
class One
{
	protected:
		int count;
	public:
		One() 
		{
			count=0;
		}
		void show()
		{
			cout<<"count="<<count<<endl;
		}
		void operator ++()
		{
			count++;
		}
};
class Two: public One 
{
	public:
		void operator--()
		{
			count--;
		}
};
int main()
{
	Two obj2;
	++obj2;
	++obj2;
	obj2.show();
	--obj2;
	obj2.show();
}
