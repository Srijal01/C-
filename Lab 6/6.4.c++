#include<iostream>
using namespace std;
class time
{
	int hrs,min,sec;
	public:
		time()
		{
			hrs=0;
			min=0;
			sec=0;
		}
	time(int h,int m,int s)
	{
		hrs=h;
		min=m;
		sec=s;
	}
	void show()
	{
		cout<<hrs<<":"<<min<<":"<<sec<<endl;
	}
	void operator++() 
	{
		++sec; 
		min=min+sec/60;
		sec=sec%60; 
		hrs=hrs+min/60;
		min=min%60;
	}
}; 
int main()
{
	time t1(3,56,55);
	time t2(4,58,59);
	time t3(5,59,59);
	cout<<"Initial values:"<<endl;
	cout<<"t1 is:"; 
	t1.show();
	cout<<"t2 is:"; 
	t2.show();
	cout<<"t3 is:"; 
	t3.show();
	++t1; 
	++t2; 
	++t3;
	cout<<"\nAfter increment:"<<endl;
	cout<<"t1 is:"; 
	t1.show();
	cout<<"t2 is: "; 
	t2.show();
	cout<<"t3 is:"; 
	t3.show();
}
