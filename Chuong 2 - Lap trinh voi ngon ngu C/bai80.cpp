#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	double S = 0;
	for(int i = 1; i <= n ; i++)
	{
		int GT = 0;
		for(int j = 1; j <= i; j++ )
		{
			GT = GT + j;
		}
		S = S + pow(x,i)/static_cast<double>(GT);
	}
	cout<<"S = "<<S<<endl;
}