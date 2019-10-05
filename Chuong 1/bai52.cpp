#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int nMem = 0;
	int MIN = 10;
	while(n!=0)
	{
		nMem = n%10;
		if(nMem < MIN )
		{
			MIN = nMem;
		}
		n = n / 10;
	} 
	cout<<"Chu so nho nhat cua n: "<<MIN<<endl;
}