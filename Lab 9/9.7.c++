// WAP for reading object from disk file
#include<fstream>
#include<iostream>
using namespace std;
class emp
{
	char empname[20];
	int eno;
	float sal;
	public:
		void showdata()
		{
			cout<<"\nName:"<<empname<<endl;
			cout<<"Emp NO:"<<eno<<endl;
			cout<<"Salary:"<<sal<<endl;
		}
};
int main()
{
emp em;
ifstream fin("emp.dat");
fin.read((char*)&em,sizeof(em));
cout<<"Object detail from file";
em.showdata();
}

