#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Nhap chieu dai m: ";
	cin>>m;
	cout<<"Nhap chieu rong n: ";
	cin>>n;
	for(int i = 1 ; i <= n; i++ )
	{
		for(int j = 1; j <= m; j++)
		{
			cout<<"*"<<"  ";
		}
		cout<<endl;
	}
}