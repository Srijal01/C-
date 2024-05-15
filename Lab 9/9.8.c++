//WAP for writing and reading objects from disk file
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
	char name[20];
	int roll;
	char add[20];
	public:
		void readdata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter Roll. no.:";
			cin>>roll;
			cout<<"Enter address:";
			cin>>add;
		}
		void showdata()
		{
			cout<<setw(10)<<roll<<setiosflags(ios::left)<<setw(10)<<name<<setiosflags(ios::left)<<setw(10)<<add<<endl;
		}
};
int main()
{
	student s[5],r[5];
	fstream file;
	file.open("record.dat", ios::in|ios::out);
	cout<<"enter detail for 5 students:\n";
	for(int i=0;i<5;i++)
	{
		s[i].readdata();
		file.write((char*)&s[i],sizeof(s[i]));
	}
	file.seekg(0);
	cout<<"Output from file"<<endl;
	cout<<setiosflags(ios::left)<<setw(10)<<"RollNo"<<setiosflags(ios::left)<<setw(10)<<"Name"<<setiosflags(ios::left)<<setw(10)<<"Address"<<endl;
	for(int i=0;i<5;i++)
	{
		file.read((char*)&s[i],sizeof(s[i]));
		s[i].showdata();
	}
	file.close();
}
