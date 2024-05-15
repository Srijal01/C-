//Illustration of File I/O with fstream class
#include<iostream> 
#include<fstream>
#include<process.h>
using namespace std;
int main()
{
	fstream fout;
	int i, count, percentage;
	char name[20];
	cout<<"Enter no of student:";
	cin>>count;
	fout.open("student.in",ios::out);
	if(fout.fail()) 
	{
		cout<<"Error: student.in Create/open fail";
		exit(1);
	}
	fout<<count<<' ';
	for (i=0;i<count;i++)
	{
		cout<<"Name:";
		cin>>name;
		cout<<"Percentage:";
		cin>>percentage;
		fout<<name<<' '<<percentage<<' ';
	}
	fout.close();
}
