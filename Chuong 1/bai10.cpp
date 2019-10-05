// Tính T(x,n) = x^n
#include <iostream>
using namespace std;
int main()
{
	int x,n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	double Tich = 1;
	if(n == 0)
	{
		Tich = 1;
	}
	for(int i = 1; i <= n; i++)
	{
		Tich = Tich * x;
	}
	cout<<"T = "<<Tich<<endl;
}