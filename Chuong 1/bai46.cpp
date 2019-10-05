#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem = 0;
	int dem = 0;
	while(n!=0)
	{
		nMem = n%10;
		if(nMem%2!=0)
		{
			dem++;
		}
		n = n/10;
	}
	cout<<"So luong chu so le trong n la: "<<dem<<endl;
}