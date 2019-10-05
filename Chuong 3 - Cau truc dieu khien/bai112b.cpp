#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Nhap chieu dai m: ";
	cin>>m;
	cout<<"Nhap chieu rong n: ";
	cin>>n;
	for(int i =1; i <= n; i++)
	{
		if(i==1 || i == n)
		{
			for(int j = 1; j<=m;j++)
			{
				cout<<"*"<<"  ";
			}
		}
		else
		{
			for(int j = 1; j <= m; j++)
			{
				if(j==1 || j==m)
				{
					cout<<"*"<<"  ";
				}
				else 
				{
					cout<<"   ";
				}
			}
		}
		cout<<endl;
	}
}