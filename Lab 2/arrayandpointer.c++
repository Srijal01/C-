//Array and Pointer
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b;
	b= a;	//assign address of array a to b
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	b= b+2;	//OK, increases address to 3rd element
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	//a=a+2;
	//error
}
