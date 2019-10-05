#include <iostream>
using namespace std;
double tong(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";;
	cin>>n;	
	cout<<"S = "<<tong(n)<<endl;
}
double tong(int n)
{
	if(n == 0)
	{
		return (double)(2*n + 1)/(2*n + 2);
	}
	else
	{
		return (double)(2*n + 1)/(2*n + 2) + tong(n - 1);
	}
}