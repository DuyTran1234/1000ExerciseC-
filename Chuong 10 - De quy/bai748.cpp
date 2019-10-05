#include <iostream>
#include <math.h>
using namespace std;
double tong(int n);
int main()
{
	int n;
	cout<<"Nhap n dau can: ";
	cin>>n;
	cout<<"S = "<<tong(n)<<endl;
}
double tong(int n)
{
	if(n == 1)
	{
		return sqrt(2);
	}
	else
	{
		return sqrt(2 + tong(n-1));
	}
}