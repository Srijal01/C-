//WAP for Concatenating string objects->s1+s2.
#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char str[100];
	public:
		String()
		{
			strcpy(str,"");
		}
		String(char *mystr)
		{
			strcpy(str,mystr);
		}
	void showStr()
	{
		cout<<str<<endl;
	}
	String operator +(String s)
	{
		String temp;
		temp=str;
		strcat(temp.str,s.str);
		return temp;
	}
};
int main()
{
	String s1="Tribhuvan";
	String s2="University";
	String s3;
	s3=s1+s2;
	s1.showStr();
	cout<<" + ";
	s2.showStr(); 
	cout<<" = ";
	s3.showStr();
}
