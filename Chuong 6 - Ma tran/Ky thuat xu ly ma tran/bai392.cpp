#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanViHaiDong(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	hoanViHaiDong(nArray,mSize,nSize);
	cout<<"Mang sau khi hoan vi: "<<endl;
	xuatMang(nArray,mSize,nSize);
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
void hoanViHaiDong(int a[][100], int m, int n)
{
	int x = 0;
	int y = 0;
	cout<<"Nhap 2 dong can hoan vi: "<<endl;
	cout<<"Dong 1: ";
	cin>>x;
	cout<<"Dong 2: ";
	cin>>y;
	for(int j = 0; j < n; j++)
	{
		int temp = a[x][j];
		a[x][j] = a[y][j];
		a[y][j] = temp;
	}
}