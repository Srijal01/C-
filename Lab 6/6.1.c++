//WAP showing an example of unary operator overloading.
#include<iostream>
using namespace std;
class Counter
{
	private:
		unsigned int count;
	public:
		Counter()
		{
			count = 0;
		}
		Counter(int a)
		{
			count = a;
		}
	int getCount()
	{
		return count;
	}
	void operator ++()
	{
		count ++;
	}
	void operator ++(int)
	{
		count ++;
	}
};
int main()
{
	Counter c1;
	Counter c2(10);
	cout<<"c1= "<<c1.getCount()<<endl;
	cout<<"c2= "<<c2.getCount()<<endl;
	cout<<"After increment: "<<endl;
	c1++;
	c2++;
	++c2;
	cout<<"c1= "<<c1.getCount()<<endl;
	cout<<"c2= "<<c2.getCount()<<endl;
}
