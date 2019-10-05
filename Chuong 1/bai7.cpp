// S(n) = 1/2 + 2/3 + 3/4 +..+ n/(n+1)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + static_cast<double>(i)/(i+1);
	}
	cout<<"S = "<<Tong<<endl;
}