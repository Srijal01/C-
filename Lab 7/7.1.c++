//WAP for Binary operator overloading->x1+x2=x,y1+y2=y.
#include <iostream>
using namespace std;
class Point 
{
	private:
	    double x;
	    double y;
	public:
	    Point(double x_val, double y_val) : x(x_val), y(y_val) {}
	    Point operator+(const Point& other) const 
		{
	        double new_x = x + other.x;
	        double new_y = y + other.y;
	        return Point(new_x, new_y);
	    }
    void display() const 
	{
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};
int main() 
{
    Point point1(1.0, 2.0);
    Point point2(3.0, 4.0);
    Point result = point1 + point2; 
    std::cout << "Result of addition:" << std::endl;
    result.display();
    return 0;
}
