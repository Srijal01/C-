//WAP to illustrate simple example of constructor.
#include<iostream>
using namespace std;
class Test
{
	private:
		int a;
		char b;
	public:
		Test()
		{
			a= 0;
			b='#';
			cout<<"Constructor Executed !"<<endl;
		}
		void show()
		{
			cout<<"a= "<<a<<" b= "<<b<<endl;
		}
};	//end of class
int main()
{
	cout<<"Creating an Object: "<<endl;
	Test T1;
	cout<<"Object T1: "<<endl;
	T1.show();
	cout<<"Press Any Key.....";
	cin.get();
	cout<<"Creating another Object:"<<endl;
	Test T2;
	cout<<"Object T2: "<<endl;
	T2.show();
}
