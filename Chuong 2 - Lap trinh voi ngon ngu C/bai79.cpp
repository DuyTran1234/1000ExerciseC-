#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int *pointer;
	pointer = &n;
	int dem = 0;
	while(*pointer != 0)
	{
		*pointer = *pointer / 10;
		dem++;
	}
	cout<<"So luong chu so: "<<dem<<endl;
}