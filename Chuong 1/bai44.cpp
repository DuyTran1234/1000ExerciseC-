#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int Tong = 0;
	int nMem = 0;
	while(n!=0)
	{
		nMem = n%10;
		Tong = nMem + Tong;
		n = n/10;	
	}
	cout<<"Tong cac chu so n: "<<Tong<<endl;
}