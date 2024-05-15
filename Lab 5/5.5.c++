//Write a program to show the destructor call such that it prints the message "Memory is released".
#include<iostream>
using namespace std;
class MyClass 
{
	public:
    	MyClass() 
		{
        	std::cout << "Object created" << std::endl;
    	}
    	~MyClass() 
		{
        	std::cout << "Memory is released" << std::endl;
    	}
};
int main()
{
    MyClass obj1;
    MyClass obj2; 
    return 0;
}
