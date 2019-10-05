// S(n) = 1*2*3*4*...* n
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tich = 1;
	for(int i = 1;i <= n;i++)
	{
		Tich = Tich*i;
	}
	cout<<"S = "<<Tich<<endl;
}