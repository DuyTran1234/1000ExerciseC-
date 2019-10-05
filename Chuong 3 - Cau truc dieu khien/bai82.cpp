#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	if(a > b && a > c)
	{
		cout<<"MAX = "<<a<<endl;
	}
	else if(b > a && b > c)
	{
		cout<<"MAX = "<<b<<endl;
	}
	else if(c > b && c > a)
	{
		cout<<"MAX = "<<c<<endl;
	}
}