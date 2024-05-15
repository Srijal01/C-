//WAP for writing object to disk file
#include<fstream>
#include<iostream>
using namespace std;
class emp
{
	char empname[20];
	int eno;
	float sal;
	public:
	void getdata()
	{
		cout<<"Enter Name:"; cin>>empname;
		cout<<"Enter Emp No:"; cin>>eno;
		cout<<"Enter salary:"; cin>>sal;
	}
};
int main()
{
	emp em;
	cout<<"Enter the detail of employee"<<endl;
	em.getdata();
	ofstream fout("emp.dat");
	fout.write((char*)&em,sizeof(em));
	cout<<"Object written to file";
}
