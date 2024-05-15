//Function Pointer example
#include<iostream>
using namespace std;
int square (int n)	//square function
{
	return n*n;
}
int main()
{
	int x;
	int (*fptr) (int);	//fptr is pointer to a function
	fptr= square;	//assigning address of square()
	cout<<"Enter integer x: ";
	cin>>x;
	int sq; 	//declares a variable sq
	sq= (*fptr) (x);
	cout<<"The square of "<<x<<" is: "<<sq<<endl;
}

