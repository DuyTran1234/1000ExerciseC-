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
	if(a > b && a > c && b > c)
	{
		cout<<c<<" "<<b<<" "<<a<<endl;
	}
	else if(a>b && a>c && b < c)
	{
		cout<<b<<" "<<c<<" "<<a<<endl;
	}
	else if(b>a && b>c && a > c)
	{
		cout<<c<<" "<<a<<" "<<b<<endl;
	}
	else if(b>a && b>c && a < c)
	{
		cout<<a<<" "<<c<<" "<<b<<endl;
	}
	else if(c>a && c>b && a > b)
	{
		cout<<b<<" "<<a<<" "<<c<<endl;
	}
	else if(c>a && c>b && a < b)
	{
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
}