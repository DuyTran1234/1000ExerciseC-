// Tính S(n) = 1 + 2 + 3 + … + n.
#include <iostream>
using namespace std;
void Tong(int &n);
int main ()
{
   int nSize;
   Tong(nSize);
}
void Tong(int &n)
{
	int Tong = 0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i = 1; i <= n; i++ )
	{
		Tong = Tong + i;
	}
	cout<<"Tong S = "<<Tong<<endl;
}