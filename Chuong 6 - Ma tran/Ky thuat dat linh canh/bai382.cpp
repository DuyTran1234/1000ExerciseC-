#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int chinhPhuongMax(int a[][100], int m, int n);
bool kiemTraChinhPhuong(int x);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<chinhPhuongMax(nArray,mSize,nSize)<<endl;
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
bool kiemTraChinhPhuong(int x)
{
	int check = 0;
	for(int i = 1; i <= x; i++)
	{
		if(i * i == x)
		{
			check = 1;
			break;
		}
	}
	if(check == 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int chinhPhuongMax(int a[][100], int m, int n)
{
	int theFirst = 0;
	for(int i = 0; i < m; i++)
	{
		int kiemTra = 0;
		for(int j = 0; j < n; j++)
		{
			if(kiemTraChinhPhuong(a[i][j]) == true)
			{
				theFirst = a[i][j];
				kiemTra = 1;
				break;
			}
		}
		if(kiemTra == 1)
		{
			break;
		}
	}
	int max = theFirst;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(kiemTraChinhPhuong(a[i][j]) == true)
			{
				if(a[i][j] > max)
				{
					max = a[i][j];
				}
			}
		}
	}
	return max;
}