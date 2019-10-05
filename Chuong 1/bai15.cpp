// Tính S = 1 + 1/(1+2) + 1/(1+2+3)+...+ 1/(1+2+3+...+n)
#include <iostream>
using namespace std;
int Tong1(int n);
double Tong(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<Tong(n)<<endl;
}
int Tong1(int n)
{
	int Tong1 = 0;
	for(int i=1; i <= n; i++)
	{
		Tong1 = Tong1 + i;
	}
	return Tong1;
}
double Tong(int n)
{
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + 1/(static_cast<double>(Tong1(i)));
	}
	return Tong;
}