#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		int GT = 1;
		for(int j = 1; j <= i; j++)
		{
			GT = GT * j;
		}
		Tong = Tong + pow(-1,i)* (pow(x,i)/(static_cast<double>(GT)));
	}
	cout<<"S = "<<Tong<<endl;
}