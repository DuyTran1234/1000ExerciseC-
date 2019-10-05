#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int Tich = 1;
	int nMem;
	while(n!=0)
	{
		nMem = n%10;
		Tich = Tich* nMem;
		n = n/10;
	}
	cout<<"Tich cac so nguyen duong n: "<<Tich<<endl;
}