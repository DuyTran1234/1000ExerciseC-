#include <iostream>
using namespace std;
double pow(int x, int n);
double tong(int x,int i);
double giaiThua(int n);
int main()
{
	int n;
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<tong(x,n)<<endl;
}
double tong(int x,int i)
{
	if(i == 1)
	{
		return x;
	}
	else 
	{
		return pow(x,i)/giaiThua(i) + tong(x,i-1);
	}
	
}
double pow(int x, int i)
{
	if(i == 1)
	{
		return x;
	}
	else
	{
		return x * pow(x,i-1);
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
		return n * giaiThua(n - 1);
	}
}