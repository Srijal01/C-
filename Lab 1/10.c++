//WAP to illustrate local and global variables.
#include<iostream>
using namespace std;
int globalVar= 10;
void printVars()
{
	int localVar= 20;
	cout<<"Global variable: "<<globalVar<<endl;
	cout<<"Local variable: "<<localVar<<endl;
}
int main()
{
	printVars();
	globalVar= 30;
	printVars();
	return 0;
}

