#include<iostream>
class Coordinate
{
	private:
		int x;
		int y;
	public:
		Coordinate (int x = 0, int y = 0):x(x), y(y)
		{
		}
		Coordinate operator + (const Coordinate & other)
		{
			Coordinate result;
			result.x = x + other.x;
			result.y = y + other.y;
			return result;
		}
		void display()
		{
			std::cout<<"("<<x<<","<<y<<")"<<std::endl;
		}
};
int main()
{
	int x, y, a, b;
	std::cout<<"Enter the x-coordinate of the first point: ";
	std::cin>>x;
	std::cout<<"Enter the y-coordinate of the first point: ";
	std::cin>>y;
	std::cout<<"Enter the x-coordinate of the second point: ";
	std::cin>>a;
	std::cout<<"Enter the y-coordinate of the second point: ";
	std::cin>>b;
	Coordinate m(x, y);
	Coordinate n(a, b);
	Coordinate sum = m + n;
	std::cout<<"The sum of the coordinates is: ";
	sum.display();
	return 0;
}
