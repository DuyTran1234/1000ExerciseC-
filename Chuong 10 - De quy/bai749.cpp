#include <iostream>
#include <math.h>
using namespace std;
double tong(int n);
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
		return sqrt(n);
	}
	else
	{
		return sqrt(n + tong(n-1));
	}
}