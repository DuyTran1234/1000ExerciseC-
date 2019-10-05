// Tinh S(n) = 1 + x^2/2! + x^4/4! +...+ x^2n/ 2n!
#include <iostream>
#include <cmath>
using namespace std;
int GiaiThua(int n);
int main()
{
	int x;
	int n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 0; i <= n; i++)
	{
		Tong = Tong + pow(x,2*i)/static_cast<double>(GiaiThua(2*i));
	}
	cout<<"S = "<<Tong<<endl;
}
int GiaiThua(int n)
{
	if(n == 0)
	{
		return 1;
	}
	int Tich = 1;
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich * i;
	}
	return Tich;
}
