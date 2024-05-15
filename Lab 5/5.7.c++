//WAP to illustrate the example of static member function.
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		double length;
		double breadth;
	public:
		static int objectCount;
		Rectangle(double l = 2.0, double b = 2.0)
		{
			cout<<"Constructor called."<<endl;
			length = l;
			breadth = b;
			objectCount++;
		}
		static int getCount()
		{
			return objectCount;
		}
};
int Rectangle::objectCount = 0;
int main()
{
	cout<<"Initial Stage Count: ";
	cout<<Rectangle::getCount()<<endl;
	Rectangle rect1(3.5,1.5);
	Rectangle rect2(10.5,6.0);
	cout<<"Final Stage Count: ";
	cout<<Rectangle::getCount()<<endl;
}
