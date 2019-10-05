#include <iostream>
using namespace std;
int main()
{
	int h;
	cout<<"Nhap chieu cao tam giac: ";
	cin>>h;
	for(int i = 1; i <= h; i++)
	{
		if(i==1 || i==2 || i==h)
		{
			for(int k = 1; k <= i; k++)
			{
				cout<<"*"<<" ";
			}
		}
		else 
		{
			for(int j = 1; j <= i ;j++)
			{
				if(j == 1 || j== i )
				{
					cout<<"*"<<" ";
				}
				else 
				{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}
}