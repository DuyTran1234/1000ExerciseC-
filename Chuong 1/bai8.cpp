// S(n) = 1/2 + 3/4 + 5/6 +..+ (2n+1)/(2n+2)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong(0);
	for(int i = 0;i <= n; i++)
	{
		Tong = Tong + (2*static_cast<double>(i)+1)/(2*i+2);
	}
	cout<<"S = "<<Tong<<endl;
}