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
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = sqrt(pow(x,i) + Tong );	
	}
	cout<<"S = "<<Tong<<endl;
}