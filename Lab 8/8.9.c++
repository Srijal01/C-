//WAP for illustrate of virtual base class.
#include <iostream>
using namespace std;
class Animal 
{
	public:
	    virtual void speak() 
		{
	        std::cout << "Animal speaks" << std::endl;
	    }
};
class Dog : public virtual Animal 
{
	public:
	    void speak() override 
		{
	        std::cout << "Dog barks" << std::endl;
	    }
};
class Cat : public virtual Animal 
{
	public:
	    void speak() override 
		{
	        std::cout << "Cat meows" << std::endl;
	    }
};
class Pet : public Dog, public Cat 
{
	public:
	    void speak() override 
		{
	        Dog::speak();
	        Cat::speak();
	    }
};
int main() 
{
    Pet myPet;
    myPet.speak();
    return 0;
}
