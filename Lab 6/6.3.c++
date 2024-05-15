//WAP showing an example of binary operator overloading.
#include <iostream>
using namespace std;
class Complex
{
	private:
	    double real;
		double imaginary;
	public:
	    Complex(double r, double i) : real(r), imaginary(i) {}
	    Complex operator+(const Complex& other) const 
		{
	        double newReal = real + other.real;
	        double newImaginary = imaginary + other.imaginary;
	        return Complex(newReal, newImaginary);
	    }
	    void display() const 
		{
	        std::cout << real << " + " << imaginary << "i" << std::endl;
    	}
};
int main()
{
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);
    Complex result = num1 + num2; 
    std::cout << "Result of addition: ";
    result.display();
    return 0;
}
