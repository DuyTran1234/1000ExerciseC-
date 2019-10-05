#include <iostream>
using namespace std;
void xuatDiem(struct diemOxyz a);
void nhapDiem(struct diemOxyz &a);
struct diemOxyz
{
	int x;
	int y;
	int z;
};
int main()
{
	struct diemOxyz M;
	nhapDiem(M);
	xuatDiem(M);
}
void nhapDiem(struct diemOxyz &a)
{
	cout<<"Nhap hoanh do: ";
	cin>>a.x;
	cout<<"Nhap tung do: ";
	cin>>a.y;
	cout<<"Nhap cao do: ";
	cin>>a.z;
}
void xuatDiem(struct diemOxyz a)
{
	cout<<"M("<<a.x<<", "<<a.y<<", "<<a.z<<")"<<endl;
}