#include <iostream>
using namespace std;

int main()
{
	int n;
	int nCopy;
	cout<<"Nhap n: ";
	cin>>n;
	nCopy = n;
	int nMem = 10;
	int x = 0;
	int dem = 0;
	while(n!=0)
	{
		x = nMem;
		nMem = n % 10;
		if(x < nMem)
		{
			dem++;
		}
		n = n / 10;
	}
	if(dem==0)
	{
		cout<<"La so tang dan"<<endl;
	}
	else 
	{
		cout<<"Khong TM YCDB"<<endl;
	}
}
