#include <iostream>
using namespace std;
double tong(int n);
double tongMau(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;	
	cout<<"S = "<<tong(n)<<endl;
}
double tong(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return (double)1/tongMau(n) + tong(n-1);
	}
}
double tongMau(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n + tongMau(n-1);
	}
}