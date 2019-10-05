#include <iostream>
using namespace std;
int tong(int n);
int main()
{
	// S(n) = 1 + 2 + 3 + ... + n;
	int n;
	cout<<"Nhap n: ";;
	cin>>n;	
	cout<<"S = "<<tong(n)<<endl;
}
int tong(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n + tong(n - 1);
	}
}