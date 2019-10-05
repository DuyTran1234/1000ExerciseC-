#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem = 0;
	int Tong = 0;
	while(n!=0)
	{
		nMem = n % 10;
		if(nMem%2==0)
		{
			Tong = Tong + nMem;
		}	
		n = n / 10;
	}	
	cout<<"Tong cac chu so chan trong n: "<<Tong<<endl;
}