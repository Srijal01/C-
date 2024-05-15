//Multiple inheritance
#include <iostream>
using namespace std;
class A 
{
	public:
	    void displayA() 
		{
	        cout << "This is class A." << endl;
	    }
};
class B 
{
	public:
	    void displayB() 
		{
	        cout << "This is class B." << endl;
	    }
};
class C : public A, public B 
{
	public:
    	void displayC() 
		{
        	cout << "This is class C." << endl;
    	}
};
int main() 
{
    C objC;
    objC.displayA();
    objC.displayB();
    objC.displayC();
    return 0;
}
