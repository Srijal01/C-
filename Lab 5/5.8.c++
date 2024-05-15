/*WAP to address the below problem using class and object concept by using friend function:
	hr		min
	------------
	a		b
 +  d  		e
 ---------------
 	x		y
Assume necessary member variable and member function where necessary.*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int hrs, min;
	public:
		void gettime(int h, int m)
		{
			hrs = h;
			min = m;
		}
		void showtime()
		{
			cout<<hrs<<":"<<min;
		}
	friend Time sum (Time, Time);
};
Time sum(Time t1, Time t2)
{
	Time t3;
	t3.min = t1.min + t2.min;
	t3.hrs = t3.min/60;
	t3.min = t3.min%60;
	t3.hrs += t1.hrs + t2.hrs;
	return t3;
}
int main()
{
	Time t1;
	t1.gettime(3,45);
	Time t2;
	t2.gettime(2,55);
	Time t3;
	t3 = sum(t1, t2);
	t1.showtime();
	cout<<"+";
	t2.showtime();
	cout<<"=";
	t3.showtime();
	return 0;
}
