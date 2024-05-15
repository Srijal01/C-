//Illustration of class template
#include<iostream>
using namespace std;
#define max 20
template <class T>
class stack
{
	private:
		T s[max];
		int top;
	public:
		stack() 
		{ 
			top=-1;
		}
		void push(T x)
		{
			s[++top]=x;
		}
		T pop()
		{
			return s[top--];
		}
};
int main()
{
	stack <int> s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);
	cout<<"\nNumber Popped:"<<s1.pop();
	cout<<"\nNumber Popped:"<<s1.pop();
	s1.push(44);
	cout<<"\nNumber Popped:"<<s1.pop();
	stack <float> s2;
	s2.push(11.11);
	s2.push(22.22);
	s2.push(33.33);
	cout<<"\nNumber Popped:"<<s2.pop();
	cout<<"\nNumber Popped:"<<s2.pop(); 
	s2.push(44.44);
	cout<<"\nNumber Popped:"<<s2.pop();
	stack <char> s3;
	s3.push('A');
	s3.push('B');
	s3.push('C');
	cout<<"\nNumber Popped:"<<s3.pop();
	cout<<"\nCharcter Popped:"<<s3.pop();
	s3.push('D');
	cout<<"\nCharcter Popped:"<<s3.pop();
}
