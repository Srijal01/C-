//EXAMPLE SHOWING USE OF ARRAY AND POINTER
#include<iostream>
using namespace std;
int main()
{
	int a[5]= {1,2,3,4,5};
	int *b;
	b= &a[0];	//or b=a;
	int i;
	for(i=0; i<5; i++)
		cout<<"a["<<i<<"]="<<a[i]<<",";
	cout<<endl;
	for(i=0; i<5; i++)
		cout<<"*(b+"<<i<<")="<<*(b+i)<<",";
	cout<<endl;
	for(i=0; i<5; i++)
		cout<<"*(a+"<<i<<")="<<(a+i)<<",";
	cout<<endl;
	for(i=0; i<5; i++)
		cout<<"b["<<i<<"]="<<b[i]<<",";
	cout<<endl;	
	for(i=0; i<5; i++)
		cout<<"(a+"<<i<<")="<<(a+i)<<",";
	cout<<endl;
	for(i=0; i<5; i++)
		cout<<"(b+"<<i<<")="<<(b+i)<<",";
	cout<<endl;
}
	
