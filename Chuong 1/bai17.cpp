// S(n) = x + x^2/2! + x^3/3! +...+ x^n/n!

#include <iostream>
using namespace std;
int BinhPhuong(int x,int n);
int GiaiThua(int n);
double Tong(int x, int n);

int main()
{
	int x;
	int n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<Tong(x,n)<<endl;
}
int BinhPhuong(int x,int n)
{
	int Tich = 1;
	for(int i = 1; i<= n; i++)
	{
		Tich = Tich*x;
	}
	return Tich;
}
int GiaiThua(int n)
{
	int Tich = 1;
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich*i;
	}
	return Tich;
}
double Tong(int x, int n)
{
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + BinhPhuong(x,i)/static_cast<double>(GiaiThua(i));
	}
	return Tong;
}