#include <iostream>
using namespace std;
void xuatDiem(struct diemOxy a);
void nhapDiem(struct diemOxy &a);
struct diemOxy
{
	int x;
	int y;
};
int main()
{
	struct diemOxy M;
	nhapDiem(M);
	xuatDiem(M);
}
void nhapDiem(struct diemOxy &a)
{
	cout<<"Nhap hoanh do: ";
	cin>>a.x;
	cout<<"Nhap tung do: ";
	cin>>a.y;
}
void xuatDiem(struct diemOxy a)
{
	cout<<"M("<<a.x<<", "<<a.y<<")"<<endl;
}