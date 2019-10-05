#include <iostream>
#include <cmath>
using namespace std;
long long int GiaiThua(int x);
int main()
{
	const double epsilon =  0.00001;
	const double Pi = 3.14;
	double x;
	int n = 20000;
	cout<<"Nhap x vao sin(x): ";
	cin>>x;
	x = x * Pi / 180;
	double S = 0;
	double S1 = 0;
	for(int i = 0 ; i <= n ; i++)
	{
		S = S + pow(-1,i)*pow(x,2*i+1)/GiaiThua(2*i+1);
		S1 = S - S1;
		if( abs(S1) <= epsilon)
		{
			break;
		}
	}
	cout<<S<<endl;
}
long long int GiaiThua(int x)
{
	long long int GT = 1;
	for(int i = 1; i <= x; i++)
	{
		GT = GT * x;
	}
	return GT;
}