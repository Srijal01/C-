//Basic to user defined.
#include<iostream>
using namespace std;
class Length
{
	private:
		int m;
		int cm;
	public:
		Length()
		{ 
			m=0; 
			cm=0; 
		}
		Length(float len)
		{
			m=int(len);
			cm=(len-m)*100;
		}
	void showLength()
	{
		cout<<m<<" meter ,"<<cm<<" cm"<<endl;
	}
}; 
int main()
{
	float L1;
	cout<<"\nEnter lengrh(in float):";
	cin>>L1;
	Length L2=L1;
	cout<<"Input:"<<L1<<endl;
	cout<<"Converted to :";
	L2.showLength();
}
