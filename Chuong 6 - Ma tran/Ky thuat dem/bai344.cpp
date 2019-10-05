#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demGiaTri(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"So luong gia tri: "<<demGiaTri(nArray,mSize,nSize)<<endl;
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
int demGiaTri(int a[][100], int m, int n) {
	int count = 0;
	int b[100];
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++) 
		{
			b[dem] = a[i][j];
			dem++;
		}
	}
	for(int i = 0; i < dem; i++)
	{
		for(int j = 0; j < dem; j++)
		{
			if(b[i] == b[j] && i == j)
			{
				count++;
			}
			else if(b[i] == b[j] && i != j)
			{
				break;
			}
		}
	}
	return count;
}