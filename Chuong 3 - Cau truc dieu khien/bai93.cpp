#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		cout<<"La so nguyen to"<<endl;
	}
	else
	{
		cout<<"Khong phai so NT"<<endl;
	}
}