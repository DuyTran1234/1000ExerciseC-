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
		if(n%i==0 && i%2==0)
		{
			Tong = Tong + i;
		}
	}
	cout<<"Tong cac uoc so chan cua n: "<<Tong<<endl;
}