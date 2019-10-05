#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int Tich = 1;
	for(int i =1; i <= n; i++)
	{
		if(n%i==0 && i%2!=0)
		{
			Tich = Tich * i;
		}
	}
	cout<<"Tich cac uoc so le cua n: "<<Tich<<endl;
}