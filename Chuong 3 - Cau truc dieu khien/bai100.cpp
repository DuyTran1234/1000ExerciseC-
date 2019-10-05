#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"GIAI PT BAC 2: Ax^2 + Bx + C = 0"<<endl;
	double a,b,c;
	double Delta = 0;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	Delta = b*b - 4*a*c;
	if(Delta < 0)
	{
		cout<<"PT vo nghiem"<<endl;
	}
	else if(Delta == 0)
	{
		cout<<"PT co nghiem kep x = "<<-b/a<<endl;
	}
	else if(Delta > 0)
	{
		cout<<"PT co 2 nghiem phan biet"<<endl;
		cout<<"x1 = "<<(-b + sqrt(Delta))/2*a<<endl;
		cout<<"x2 = "<<(-b - sqrt(Delta))/2*a<<endl;
	}
	
}