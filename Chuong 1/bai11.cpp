// S(n) = 1 + 1x2 + 1x2x3 + .. + 1x2x3x...xn
#include <iostream>
using namespace std;
int Tong(int n);
int Tich(int n);
int main()
{
	int nSize;
	cout<<"Nhap n: ";
	cin>>nSize;
	cout<<"S = "<<Tong(nSize)<<endl;
}

int Tich(int n)
{
	int Tich = 1;
	for(int i=1; i <= n; i++)
	{
		Tich = Tich * i;
	}
	return Tich;
}

int Tong(int n)
{
	int Tong = 0;
	for(int i = 1; i <= n;i++)
	{
		Tong = Tong + Tich(i);
	}
	return Tong;
}