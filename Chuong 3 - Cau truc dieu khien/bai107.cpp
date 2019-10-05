#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,n;
	double CanBacN = 0;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	CanBacN = pow(x,1/n);
	cout<<"S = "<<CanBacN<<endl;
}