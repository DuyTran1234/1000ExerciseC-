#include <iostream>
using namespace std;
int fibo(int i);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<fibo(n)<<endl;
}
int fibo(int i)
{
	if(i == 0)
	{
		return 1;
	}
	else if(i == 1)
	{
		return 1;
	}
	else
	{
		return  fibo(i - 1) + fibo(i - 2);
	}
}