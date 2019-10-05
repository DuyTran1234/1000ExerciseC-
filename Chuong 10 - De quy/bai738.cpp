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
		return n;
	}
	else
	{
		return n * tong(n-1);
	}
}