#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"PT Ax^4 + Bx^2 + C  = 0"<<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	int Delta;
	int k = 0;
	int k1;
	int k2;
	Delta = b*b - 4*a*c;
	if(Delta < 0)
	{
		cout<<"PT Vo nghiem!!"<<endl;
	}
	else if(Delta == 0)
	{
		cout<<"PT co nghiem kep x = "<<-b/a<<endl;
	}
	else if(Delta > 0)
	{
		k1 = (-b + sqrt(Delta))/2*a;
		k2 = (-b - sqrt(Delta))/2*a;
		if(k1 > 0)
		{
			cout<<"x = "<<sqrt(k1)<<endl;
			cout<<"x = "<< -sqrt(k1)<<endl;
		}
		else if(k1 == 0)
		{
			cout<<"x = "<<sqrt(0)<<endl;
		}
		else if(k1 < 0 && k2 < 0)
		{
			cout<<"PT vo nghiem"<<endl;	
		}
		if(k2 > 0)
		{
			cout<<"x = "<<sqrt(k2)<<endl;
			cout<<"x = "<< -sqrt(k2)<<endl;
		}
		else if(k2 == 0)
		{
			cout<<"x = "<<sqrt(0)<<endl;
		}
	}
}