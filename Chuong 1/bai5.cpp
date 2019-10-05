// S(n) = 1+ 1/3+1/5+...+ 1/(2n+1)
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	double Tong = 0;
	for(int i = 0; i <= n; i++)
	{
		Tong = Tong + 1/(2*(static_cast<double>(i))+1);
	}
	cout<<"S = "<<Tong<<endl;
}