//EXAMPLE : DEMONSTRATION OF POINTER
#include<iostream>
using namespace std;
int main()
{
	int a;	//a is an integer
	int *aPtr;	//aPtr is a pointer to an integer
	a= 7;	//a is initialized to 7
	aPtr= &a;	//aPtr set to address of a
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The value of aPtr is "<<aPtr<<endl;
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of *aPtr is "<<*aPtr<<endl;
	cout<<"Showing that * and & are inverses of each other."<<endl;
	cout<<"&*aPtr= "<<&*aPtr<<endl<<"*&aPtr= "<<*&aPtr;
}
