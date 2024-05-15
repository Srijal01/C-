//Write a program using new and delete operator.
#include<iostream>
#include<new>
using namespace std;
int main()
{
	int i,n;
	int *p;
	cout<<"How many numbers to input: ";
	cin>>i;
	p= new (nothrow) int[i];
	if(p==NULL)
		cout<<"Error: memory couldnot be allocated";
	else
	{
		for(n=0;n<i;n++)
		{
			cout<<"Enter numbers: ";
			cin>>p[n];
		}
		cout<<"You have entered: ";
		for(n=0;n<i;n++)
			cout<<p[n]<<" ";
		delete[] p;
	}
	return 0;
}

