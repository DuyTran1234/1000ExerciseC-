#include <iostream>
using namespace std;
int soLuongChu(int n, int &max);
int main()
{
	int n;
	int MAX = 10;
	cout<<"Nhap n: ";
	cin>>n;
	soLuongChu(n,MAX);
	cout<<"So nho nhat: "<<MAX<<endl;
}
int soLuongChu(int n, int &max)
{
	if(n / 10 == 0)
	{
		if(n % 10 < max)
		{
			max = n % 10;
		}
	}
	else
	{
		if(n % 10 < max)
		{
			max = n % 10;
		}
		soLuongChu(n/10,max);
	}
}