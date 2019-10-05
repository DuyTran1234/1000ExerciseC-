#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
bool kiemTraMaTran(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<kiemTraMaTran(nArray,mSize)<<endl;
}
void nhapMaTranVuong(int a[][100], int &m)
{
	cout<<"Nhap kich thuoc ma tran vuong: ";
	cin>>m;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMaTran(int a[][100], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<"	";
		}
		cout<<endl<<endl;
	}
}
bool kiemTraMaTran(int a[][100], int m)
{
	bool kiemTra = false;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] % 2 == 0 && a[i][j] < 2004)
			{
				kiemTra = true;
			}
		}
	}
	if(kiemTra == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}