#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n dau can: ";
	cin>>n;
	double Tong = 0;
	for(int i = 1; i<=n;i++)
	{
		Tong = sqrt(2+Tong);
	}
	cout<<"S = "<<Tong<<endl;
}