// S(n) = x + x^2/1+2 + x^3/1+2+3 +...+ x^n/1+2+3+...+n
#include <iostream>
using namespace std;
int BinhPhuong(int x,int n);
int Tong(int n);


int main()
{
	int x;
	int n;
	double Tong1 = 0;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	
	for(int i= 1; i <= n; i++)
	{
		Tong1 = Tong1 + (BinhPhuong(x,i))/static_cast<double>(Tong(i));
	}
	cout<<"S = "<<Tong1<<endl;
}
int BinhPhuong(int x,int n)
{
	int Tich = 1;
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich*x;
	}
	return Tich;
}
int Tong(int n)
{
	int Tong = 0;
	for(int i=1; i<= n ;i++)
	{
		Tong = Tong + i;
	}
	return Tong;
}