#include <iostream>
using namespace std;
int soLuongChu(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So luong chu so: "<<soLuongChu(n)<<endl;
}
int soLuongChu(int n)
{
	if(n / 10 == 0)
	{
		return 1;
	}
	else
	{
		return 1 + soLuongChu(n/10);
	}
}