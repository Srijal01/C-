/*WAP using class and object which takes input as integer, float and character value and display each value. You are adviced 
to use proper member variable and member function with creation of object.*/
//example of function
//defination outside the class
#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		char name[20];
		char phone[10];
	public:
		//function declaration
		void getdata();
		void showdata();
};	//end of class
//defination of function outside class
void student::getdata()
{
	cout<<endl<<"Enter Roll No.: ";
	cin>>roll;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Phone: ";
	cin>>phone;
}
void student::showdata()
{
	cout<<"\tName: "<<name<<endl;
	cout<<"\tRoll No.: "<<roll<<endl;
	cout<<"\tPhone: "<<phone<<endl;
}
int main()
{
	student s1,s2;
	s1.getdata();
	s2.getdata();
	cout<<"First student: "<<endl;
	s1.showdata();
	cout<<"Second student: "<<endl;
	s2.showdata();
}
