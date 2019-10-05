#include <iostream>
using namespace std;
int soLuongChu(int n, int &index);
int main()
{
	int n;
	int idx = 0;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Chu so dau tien: "<<soLuongChu(n,idx)<<endl;
}
int soLuongChu(int n, int &index)
{
	if(n / 10 == 0)
	{
		index = n % 10;
		return n % 10;
	}
	else
	{
		return soLuongChu(n/10, index);
	}
}