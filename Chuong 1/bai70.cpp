#include <iostream>
#include <cmath>
using namespace std;
double Tong1(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + pow(-1, i+1)* (1/Tong1(i));
	}
	cout<<"S = "<<Tong<<endl;
}
double Tong1(int n)
{
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + i;
	}
	return Tong;
}