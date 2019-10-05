#include <iostream>
#include <cmath>
using namespace std;
int Tong1(int n);
int main()
{
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + pow(-1,i) * (pow(x,i))/Tong1(i);
	}
	cout<<"S = "<<Tong<<endl;
}
int Tong1(int n)
{
	int Tong2 = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong2 = Tong2 + i;
	}
	return Tong2;
}