#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem = 0;
	int NghichDao = 0;
	while(n!=0)
	{
		nMem = n%10;
		NghichDao = NghichDao * 10 + nMem;
		n = n / 10;	
	}
	cout<<"So nghich dao cua n: "<<NghichDao<<endl;
}