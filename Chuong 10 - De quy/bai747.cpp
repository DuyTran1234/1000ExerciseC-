#include <iostream>
using namespace std;
int uocLeMax(int x, int n, int &max);
int main()
{
	int n;
	int MAX = 1;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Uoc le lon nhat: "<<uocLeMax(n,n,MAX)<<endl;
}
int uocLeMax(int x, int n, int &max)
{
	if(n == 1)
	{
		if(x % n == 0)
		{
			if(n % 2 != 0)
			{
				if(n > max)
				{
					max = n;
				}
			}
		}
	}
	else
	{
		if(x % n == 0)
		{
			if(n % 2 != 0)
			{
				if(n > max)
				{
					max = n;
				}
			}
		}
		uocLeMax(x,n-1,max);
	}
}