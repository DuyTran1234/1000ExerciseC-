#include <iostream>
using namespace std;
int pow(int x, int n);
int Tong(int x, int n);

int main()
{
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<Tong(x,n)<<endl;
}
int pow(int x, int n)
{
	int S = 1;
	if(n==0)
	{
		S = 1;
		return S;
	}
	
	for(int i = 1; i <= n; i++)
	{
		S = S*x;
	}
	return S;
}
int Tong(int x, int n)
{
	int S = 0;
	for(int i = 1; i<= n; i++)
	{
		S = S + pow(x,i);
	}
	return S;
}