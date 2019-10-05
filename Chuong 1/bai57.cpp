#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int KiemTra = 0;
	int nMem = 0;
	while(n!=0)
	{
		nMem = n%10;
		if(nMem % 2 != 0)
		{
			KiemTra++;
		}
		n = n /10;
	}
	if(KiemTra == 0)
	{
		cout<<"Toan bo chu so trong n la so chan!! "<<endl;
	}
	else 
	{
		cout<<"Khong thoa man yeu cau de bai "<<endl;
	}
}