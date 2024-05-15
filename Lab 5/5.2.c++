//WAP to calculate area of rectangle using the concept of constructor.
#include<iostream>
using namespace std;
class Rectangle
{
	int width, height;
	public:
		Rectangle(int, int);	//constructor declaration
		int area()
		{
			return (width*height);
		}
};
Rectangle::Rectangle(int a, int b)	//constructor definition
{
	width = a;
	height = b;
}
int main()
{
	Rectangle rect (3,4);
	cout<<"THe area of rectangle is: "<<rect.area()<<endl;
	return 0;
}
