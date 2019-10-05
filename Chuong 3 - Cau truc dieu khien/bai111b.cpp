#include <iostream>
using namespace std;
int main()
{
	int h;
	cout<<"Nhap chieu cao h: ";
	cin>>h;
	for(int i = 0; i < h ; i++)
	{
		for(int j = 0; j < h - (i+1) ;j++)
		{
			cout<<"  ";
		}
		if(i == 0 || i == h-1 )
		{
			for(int k = 0; k < 2*i+1; k++)
			{
				cout<<"*"<<" ";
			}
		}
		else 
		{
			for(int k = 0; k < (2*i+1); k++)
			{
				if(k == 0 || k == (2*i) )
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