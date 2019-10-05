#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem = 0;
	while(n!=0)
	{
		nMem = n%10;
		n = n/10;
	}
	cout<<"Chu so dau tien cua n: "<<nMem<<endl;
}