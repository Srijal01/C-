#include<iostream>
using namespace std;
main()
{
	int length, width;
	cout<<"Length=";
	cin>>length;
	cout<<"Width=";
	cin>>width;
	int perimeter, area;
	perimeter= 2*(length+width);
	area= length*width;
	cout<<endl<<"Perimeter is "<<perimeter;
	cout<<endl<<"Area is "<<area<<endl;
}
