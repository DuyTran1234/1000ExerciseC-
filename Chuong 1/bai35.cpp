#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n dau can: ";
	cin>>n;
	double Tong = 0;
	for(int i = n; i > 0; i--)
	{
		Tong = sqrt(i+Tong);
	}
	cout<<"S = "<<Tong<<endl;
}