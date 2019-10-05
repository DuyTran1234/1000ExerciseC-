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
	int Tong;
	Tong = 0;
	for(int i = 0; i <= n; i++)
	{
		Tong = Tong + pow(-1,i) * pow(x,(2*i+1));
	}
	cout<<"S = "<<Tong<<endl;
}