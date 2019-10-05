#include <iostream>
#include <cmath>
using namespace std;
int demChuSo(int x);
int kiemTraSoAmstrong(int n);
void inSoAmstrong();

int main()
{
	inSoAmstrong();
}
int demChuSo(int x)
{
	int dem = 0;
	while(x!=0)
	{
		x = x/10;
		dem++;
	}
	return dem;
}
int kiemTraSoAmstrong(int n)
{
	int nCopy = n;
	int nMem = 0;
	int S = 0;
	while(n!=0)
	{
		nMem = n % 10;
		S = S + pow(nMem,demChuSo(nCopy));
		n = n/10;
	}
	if(S == nCopy)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void inSoAmstrong()
{
	for(int i = 1; i <= 1000000; i++)
	{
		if(kiemTraSoAmstrong(i)==1 && i > 10)
		{
			cout<<i<<" ";
		}
	}
}