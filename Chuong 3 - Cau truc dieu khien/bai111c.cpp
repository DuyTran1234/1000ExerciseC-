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
		for(int k = 0; k < i+1 ; k++)
		{
			cout<<"*"<<"  ";
		}
		cout<<endl;
	}
}