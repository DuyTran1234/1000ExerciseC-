#include <iostream>
using namespace std;
double tong(int x,int n);
double giaiThua(int n);
double pow(int x, int n);
int main()
{
	int n;
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;	
	cout<<"S = "<<tong(x,n)<<endl;
}
double tong(int x,int n)
{
	if(n == 1)
	{
		return (double)pow(x,n)/giaiThua(n);
	}
	else
	{
		return (double)pow(x,n)/giaiThua(n) + tong(x,n-1);
	}
}
double giaiThua(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n * giaiThua(n-1);
	}
}
double pow(int x, int n)
{
	if(n == 1)
	{
		return x;
	}
	else
	{
		return x * pow(x,n-1);
	}
}