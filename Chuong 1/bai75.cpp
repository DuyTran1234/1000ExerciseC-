#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int KiemTra = 0;
	for(int i = 1; i <= n; i++)
	{
		if(pow(2,i) == n)
		{
			KiemTra++;
		}
	}
	if(KiemTra!=0)
	{
		cout<<"La so nguyen co dang 2^k"<<endl;
	}
	else 
	{
		cout<<"Khong phai so nguyen 2^k"<<endl;
	}
}