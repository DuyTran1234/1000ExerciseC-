#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int h;
	cout<<"Nhap vao chieu cao h: ";
	cin>>h;
	for(int i = 0; i < h; i++)
	{
		for(int j = 0 ; j < h - (i+1); j++ )
		{
			cout<<"  ";
			
		}
		for(int k = 0; k < 2*i+1; k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}