#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nCopy = n;
	int nMem = 0;
	int SoDao = 0;
	while(nCopy!=0)
	{
		nMem = nCopy%10;
		SoDao = SoDao * 10 + nMem;
		nCopy = nCopy / 10;
	}
	if(n == SoDao)
	{
		cout<<"La so doi xung!!"<<endl;
	}
	else 
	{
		cout<<"Khong phai la so doi xung"<<endl;
	}
}