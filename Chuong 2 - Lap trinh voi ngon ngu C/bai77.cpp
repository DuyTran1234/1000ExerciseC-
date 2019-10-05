#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int Tong = 0;
	for(int i = 1; i <= n; i++)
	{
		Tong = Tong + i;
	}
	cout<<"S = "<<Tong<<endl;
}