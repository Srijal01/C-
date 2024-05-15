//WAP o illustrate the example of friend class.
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void get()
		{
			cout<<"Input a of A: ";
			cin>>a;
		}
	friend class B;
};
class B
{
	private:
		int b;
	public:
		void get()
		{
			cout<<"Input b of B: ";
			cin>>b;
		}
	void sum(A x, B y)
	{
		cout<<"The sum of data of both class: ";
		cout<<(x.a + y.b);
	}
};
int main()
{
	A objA;
	objA.get();
	B objB;
	objB.get();
	objB.sum(objA, objB);
	return 0;
}
