#include <iostream>
using namespace std;
class Sample
{
	private :
		int x;
	public :
		Sample()
		{
			x=0;
		}
		Sample(int a)
		{
			x=a;
		}
	int getValue()
	{
		return x;
	}
	Sample operator ++(int)
	{
		Sample temp;
		temp.x = x++;
		return temp;
	}
	Sample operator ++()
	{
		Sample temp; 	
		temp.x = ++x;
		return temp;
	}
};
int main()
{
	Sample obj1;
	Sample obj2(10);
	cout<<"Intial obj1= "<<obj1.getValue()<<endl;
	cout<<"Intial obj2= "<<obj2.getValue()<<endl;
	obj2++;
	++obj1;
	cout<<"After increment:"<<endl;
	cout<<"obj1="<<obj1.getValue()<<endl;
	cout<<"obj2="<<obj2.getValue()<<endl;
	Sample obj3,obj4;
	obj3=obj2++;
	obj4=++obj1;
	cout<<"After assignment:"<<endl;
	cout<<"obj2="<<obj2.getValue()<<endl;
	cout<<"obj3="<<obj3.getValue()<<endl;
	cout<<"obj1="<<obj1.getValue()<<endl;
	cout<<"obj4="<<obj4.getValue()<<endl;
}
