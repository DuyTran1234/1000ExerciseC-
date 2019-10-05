#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
bool tonTaiHoanThien(int a[][100], int m, int n);
bool kiemTraHoanThien(int x);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Ton tai so hoan thien? "<<tonTaiHoanThien(nArray,mSize,nSize)<<endl;
}
void nhapMang(int a[][100], int &m, int &n)
{
	cout<<"Nhap so hang: ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][100], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
}
bool kiemTraHoanThien(int x)
{
	int S = 0;
	for(int i = 1; i < x; i++)
	{
		if(x%i == 0)
		{
			S = S + i;
		}
	}
	if(S == x)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool tonTaiHoanThien(int a[][100], int m, int n)
{
	int kiemTra = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(kiemTraHoanThien(a[i][j]) == true)
			{
				kiemTra = 1;
				break;
			}
		}
	}
	if(kiemTra == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}