//WAP for constructor in base class.
#include <iostream>
using namespace std;
class Animal 
{
	public:
	    Animal(string name) : name(name) 
		{
	        cout << "Animal constructor called." << endl;
	    }
	    void speak() 
		{
	        cout << name << " makes a sound." << endl;
	    }
	protected:
	    string name;
};
class Dog : public Animal 
{
	public:
	    Dog(string name, string breed) : Animal(name), breed(breed) 
		{
	        cout << "Dog constructor called." << endl;
	    }
	    void bark() 
		{
	        cout << name << " (a " << breed << " dog) barks." << endl;
	    }
	protected:
	    string breed;
};
int main() 
{
    Dog myDog("Buddy", "Golden Retriever");
    myDog.speak();
    myDog.bark();
    return 0;
}
