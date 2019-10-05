#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Cac uoc cua n: ";
	for(int i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}