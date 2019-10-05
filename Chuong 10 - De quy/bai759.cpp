#include <iostream>
using namespace std;
int soDaoNguoc(int n, int &soDao);
int main()
{
	int n;
	int i = 100;
	int soDao = 0;
	cout<<"Nhap n: ";
	cin>>n;
	soDaoNguoc(n,soDao);
	cout<<"So dao nguoc: "<<soDao<<endl;
}
int soDaoNguoc(int n, int &soDao)
{
	if(n / 10 != 0)
	{
		soDao = soDao * 10 + n % 10;
		soDaoNguoc(n/10,soDao);
	}
	else
	{
		soDao = soDao * 10 + n % 10;
	}
}
