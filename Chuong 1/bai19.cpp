#include <iostream>
using namespace std;
int BinhPhuong(int x,int n);
int GiaiThua(int n);
double Tong(int x,int n);

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
	if(n==0)
	{
		return 1;
	}
	int Tich = 1;
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich * x;
	}
	return Tich;
}
int GiaiThua(int n)
{
	if(n==0)
	{
		return 1;
	}
	int Tich =1;
	for(int i = 1; i <= n ; i++)
	{
		Tich = Tich *i;
	}
	return Tich;
}
double Tong(int x,int n)
{
	double Tong = 1;
	for(int i = 0; i <= n; i++)
	{
		Tong = Tong + BinhPhuong(x,2*i+1)/static_cast<double>(GiaiThua(2*i+1));
	}
	return Tong;
}