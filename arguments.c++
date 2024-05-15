#include<iostream>
using namespace std;
void char_line(); //function with no arguments
void char_line(int);  //function with one int argument
void char_line(char);  //function with one char argument
void char_line(int, char);  //function with one int and one char arguments
int main()
{
	char_line();
	cout<<endl;
	char_line(30);
	cout<<endl;
	char_line('*');
	cout<<endl;
	char_line(50,'$');
	return 0;
}
void char_line()
{
	for(int i=0;i<50;i++)
	cout<<'_';	
}
void char_line(int n)
{
	for(int i=0;i<n;i++)
	cout<<'*';
}
void char_line(char ch)
{
	for(int i=0;i<40;i++)
	cout<<ch;
}
void char_line(int n, char ch)
{
	for(int i=0;i<n;i++)
	cout<<ch;
}
