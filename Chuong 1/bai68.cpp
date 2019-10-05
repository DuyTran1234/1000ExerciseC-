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
	int Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong  = Tong + pow(-1 , n)* pow(x, 2*i);
	}
	cout<<"S = "<<Tong<<endl;
}