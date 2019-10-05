#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	int Delta = 0;
	cout<<"PT AX^2 + BX + C = 0"<<endl;
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
		cout<<"PT co nghiem kep la x = "<<-b/static_cast<double>(a)<<endl;
	}
	else if(Delta > 0)
	{
		cout<<"x1 = "<<(-b + sqrt(Delta) ) / 2*a<<endl;
		cout<<"x2 = "<<(-b - sqrt(Delta) ) / 2*a<<endl;
	}
	
}