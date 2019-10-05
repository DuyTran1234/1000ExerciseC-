#include <iostream>
#include <math.h>
using namespace std;
double tong(int n, int i);
int main()
{
	int n;
	int i = 1;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<tong(n,i)<<endl;
}
double tong(int n, int i)
{
	if(i == n)
	{
		return sqrt(n);
	}
	else
	{
		return sqrt(i + tong(n,i + 1));
	}
}