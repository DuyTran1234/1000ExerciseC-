#include <iostream>
#include <cmath>
using namespace std;
int GiaiThua(int x);
int main()
{
	cout<<"Nhap n: ";
	int n;
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = sqrt(GiaiThua(i)+Tong);
	}
	cout<<"S = "<<Tong<<endl;
}
int GiaiThua(int x)
{
	int Tich = 1;
	for(int i = 1; i <= x; i++)
	{
		Tich = Tich * i;
	}
	return x;
}