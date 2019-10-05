#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int dem = 0;
	while(n!=0)
	{
		n = n/10;
		dem++;	
	}
	cout<<"So luong chu trong n la: "<<dem<<endl;
}