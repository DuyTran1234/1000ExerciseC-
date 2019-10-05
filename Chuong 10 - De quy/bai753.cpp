#include <iostream>
using namespace std;
int soLuongChu(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong cac chu so: "<<soLuongChu(n)<<endl;
}
int soLuongChu(int n)
{
	if(n / 10 == 0)
	{
		return n % 10;
	}
	else
	{
		return n % 10 + soLuongChu(n/10);
	}
}