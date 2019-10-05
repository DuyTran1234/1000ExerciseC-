#include <iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n<=1);
	int dem = 0;
	for(int i =2; i<n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==0)
	{
		cout<<"La so nguyen to"<<endl;
	}
	else 
	{
		cout<<"Khong phai so nguyen to"<<endl;
	}
}