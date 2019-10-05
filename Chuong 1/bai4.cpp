// Tính S(n) = 1/2 + 1/4 + ... + 1/2n
#include <iostream>
using namespace std;
int main()
{
	cout<<"Nhap n: ";
	int n;
	cin>>n;
	double Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + 1/(2*(static_cast<double>(i)));
	}
	cout<<"S = "<<Tong<<endl;
}