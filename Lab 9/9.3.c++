//WAP for writing and reading of user input to file
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream fout("test.txt");
	cout<<"Enter the Name:";
	char name[20];
	cin>>name; 
	fout<<name<<endl; 
	cout<<"Enter telephone:";
	int tel;
	cin>>tel; 
	fout<<tel; 
	fout.close(); 
	ifstream fin("test.txt");
	char n[20];
	int t;
	fin>>n; 
	fin>>t; 
	cout<<endl<<"The name is: "<<n;
	cout<<endl<<"Telephone no: " <<t;
	fin.close();
}
