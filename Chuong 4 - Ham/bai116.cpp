#include <iostream>
using namespace std;
int Tong(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"S = "<<Tong(n)<<endl;
}
int Tong(int n)
{
	int S = 0;
	for(int i = 1; i <= n; i++)
	{
		S = S + i;
	}
	return S;
}