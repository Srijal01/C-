//WAP for reading from disk file
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	const int LEN = 100;
	char text[LEN];
	ifstream infile("myfile.txt");
	while(infile) 
	{
		infile.getline(text,LEN); 
		cout<<endl<<text; 
	}
}
