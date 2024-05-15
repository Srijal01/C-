//DEMONSTRATION OF POINTER ARITHMETIC
#include<iostream>
using namespace std;
int main()
{
	int arr[5]= {1,2,3,4,5};
	int *ptr= arr;
	cout<<"The value of *ptr is: "<<*ptr<<endl;
	cout<<"The value of *(ptr+1) is: "<<*(ptr+1)<<endl;
	cout<<"The value of *(ptr+2) is: "<<*(ptr+2)<<endl;
	return 0;
}
