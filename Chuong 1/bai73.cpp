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
	double Tong = -1;
	for(int i = 1; i <= n; i++)
	{
		int GT = 1;
		for(int j = 1; j <= 2*i; j++)
		{
			GT = GT * j;
		}
		Tong = Tong + pow(-1,(i+1))* (pow(x,2*i)/(static_cast<double>(GT)));
	}
	cout<<"S = "<<Tong<<endl;
}