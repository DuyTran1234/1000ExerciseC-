// T�nh S = x^2 + x^4 + x^6 + ... + x^n
#include <iostream>
using namespace std;
int Tich(int x, int n);
int Tong(int x,int n);
int main()
{
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<Tong(x,n)<<endl;
}
int Tich(int x, int n)
{
	int Tich = 1;
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich*x;
	}
	return Tich;
}
int Tong(int x,int n)
{
	int Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + Tich(x,2*i);
	}
	return Tong;
}