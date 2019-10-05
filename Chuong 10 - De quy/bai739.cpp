#include <iostream>
using namespace std;
double pow(int x,int n);
int main()
{
	int n;
	int x;
	cout<<"Nhap x: ";
	cin>>x;	
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"pow(x,n) = "<<pow(x,n)<<endl;
}
double pow(int x,int n)
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