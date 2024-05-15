//WAP for Overloading insertion(<<) and  extraction(>>) operator.
#include<iostream>
using namespace std;
class currency
{
	int rupees;
	int paisa;
	public:
		currency()
		{
			rupees=paisa=0;
		}
		currency(int ,int);
	friend istream& operator>>(istream&,currency&);
	friend ostream& operator<<(ostream&,currency&);
}; 
currency::currency(int r,int p)
{
	rupees =r; 
	paisa =p; 
}
istream& operator>>(istream& get,currency &m)
{
	get>>m.rupees;
	get>>m.paisa;
	return get;
}
ostream& operator<<(ostream& put, currency &m)
{
	put<<"Rs:"<<m.rupees;
	put<<" Ps:"<<m.paisa<<endl;
	return put;
}
int main()
{
	currency c1,c2;
	cout<<"Enter currency c1:";
	cin>>c1;
	cout<<"Enter currency c2:";
	cin>>c2;
	currency c3(41,52);
	cout<<"c1 is :"<<c1<<endl;
	cout<<"c2 is :"<<c2<<endl;
	cout<<"c3 is :"<<c3<<endl;
}
