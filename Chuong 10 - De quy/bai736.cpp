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
	if(n == 1)
	{
		return (double)n/(n + 1);
	}
	else
	{
		return (double)n/(n + 1) + tong(n - 1);
	}
}