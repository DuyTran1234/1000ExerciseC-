// S(n) = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i=1; i <= n; i++)
	{
		Tong = Tong + 1/(static_cast<double>(i)*(i+1));
	}
	cout<<"S = "<<Tong<<endl;
	return 0;
}