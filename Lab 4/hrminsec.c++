/*WAP to address the below problem using class and object concept.
	Hr.		Min.	Sec.
	a		b		c
+	d		e  		f
---------------------------
	x		y		z
#Assume necessary member variable and member function where necessary.*/
#include<iostream>
using namespace std;
class time
{
	int hr, min, sec;
	public:
		void gettime(int h, int m, int s)
		{
			hr= h;
			min= m;
			sec= s;
		}
		void puttime()
		{
			cout<<hr<<":"<<min<<":"<<sec;
		}
		void sum(time, time);
};
void time :: sum(time t1, time t2)
{
	sec = t1.sec + t2.sec;
	min = sec/60;
	sec = sec%60;
	min+=t1.min + t2.min;
	hr = min/60;
	min = min%60;
	hr+= t1.hr + t2.hr;	
}
int main()
{
	time t1, t2;
	int a, b, c, d, e, f;
	cout<<"Enter the time of t1: "<<endl;
	cout<<"Hour: ";
	cin>>a;
	cout<<"Minute: ";
	cin>>b;
	cout<<"Second: ";
	cin>>c;
	cout<<"Enter the time of t2: "<<endl;
	cout<<"Hour: ";
	cin>>d;
	cout<<"Minute: ";
	cin>>e;
	cout<<"Second: ";
	cin>>f;
	t1.gettime(a, b, c);
	t2.gettime(d, e, f);
	time t3;
	t3.sum(t1, t2);
	t1.puttime();
		cout<<"+";
	t2.puttime();
		cout<<"=";
	t3.puttime();
}
