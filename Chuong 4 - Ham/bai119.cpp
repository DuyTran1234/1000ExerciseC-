#include <iostream>
using namespace std;
void soNguyenTo(int n);
int kiemTraNguyenTo(int x);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhung so nguyen to nho hon n: ";
	soNguyenTo(n);
	cout<<endl;
}
void soNguyenTo(int n)
{
	for(int i = 1; i <= n; i++)
	{
		if(kiemTraNguyenTo(i) == 1)
		{
			cout<<i<<" ";
		}
	}
}
int kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}