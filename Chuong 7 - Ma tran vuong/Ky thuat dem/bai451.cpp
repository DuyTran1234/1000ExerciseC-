#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
int soLuongDongGiam(int a[][100], int m);
bool kiemTraGiamDan(int a[][100], int i, int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<"So luong dong giam: "<<soLuongDongGiam(nArray,mSize)<<endl;
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
bool kiemTraGiamDan(int a[][100], int i, int m)
{
	int kiemTra = 1;
	for(int j = 0; j < m; j++)
	{
		if(a[i][j] < a[i][j+1])
		{
			kiemTra = 0;
			break;
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
int soLuongDongGiam(int a[][100], int m)
{
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		if(kiemTraGiamDan(a,i,m) == true)
		{
			dem++;
		}
	}
	return dem;
}