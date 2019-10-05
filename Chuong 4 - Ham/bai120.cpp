#include <iostream>
using namespace std;
int kiemTraChinhPhuong(int x);
void inSoChinhPhuong(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Cac so chinh phuong nho hon n: ";
	inSoChinhPhuong(n);
	cout<<endl;
}
int kiemTraChinhPhuong(int x)
{
	int kiemTra = 0;
	for(int i = 1; i <= x; i++)
	{
		if(i*i == x)
		{
			kiemTra = 1;
		}
	}
	if(kiemTra==1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void inSoChinhPhuong(int n)
{
	for(int i = 1; i < n; i++)
	{
		if( kiemTraChinhPhuong(i)==1 )
		{
			cout<<i<<" ";
		}
	}
}