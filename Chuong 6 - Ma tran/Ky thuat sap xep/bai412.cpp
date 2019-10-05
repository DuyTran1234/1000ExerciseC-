#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void nguyenToTangDan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Nguyen to tang dan: "<<endl;
	nguyenToTangDan(nArray,mSize,nSize);
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
bool kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			dem++;
		}
	}	
	if(dem == 2){
		return true;
	}
	else
	{
		return false;
	}
}
void nguyenToTangDan(int a[][100], int m, int n)
{
	int b[100];
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(kiemTraNguyenTo(a[i][j]) == true)
			{
				b[dem] = a[i][j];
				dem++;
			}
		}
	}
	for(int i = 0; i < dem - 1; i++)
	{
		for(int j = i + 1; j < dem; j++)
		{
			if(b[i] > b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for(int i = 0; i < dem; i++)
	{
		cout<<b[i]<<"	";
	}
	cout<<endl;
}