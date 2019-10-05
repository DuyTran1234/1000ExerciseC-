#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	double S = 1;
	if(y == 0)
	{
		S = 1;
		cout<<S<<endl;
	}
	else
	{
		for(int i = 1; i <= y; i++)
		{
			S = S * x;
		}
		cout<<S<<endl;
	}
}