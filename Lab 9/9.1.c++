// WAP for writing to disk file
#include<fstream>
using namespace std;
int main()
{ 
	ofstream outf("myfile.txt");
	outf<<"File demonstration program\n";
	outf<<"These strings are written to disk\n";
}
