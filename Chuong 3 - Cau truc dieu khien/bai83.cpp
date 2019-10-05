#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	if( (a > 0 && b > 0) || (a < 0 && b < 0 ) )
	{
		cout<<"a va b cung dau"<<endl;
	}
	else 
	{
		cout<<"a va b khong cung dau"<<endl;
	}
}