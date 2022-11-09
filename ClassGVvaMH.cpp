#include<iostream>
#include<string>

using namespace std;

class Giaovien{
	private:
		string a,b;
		int c;
	public:
		void nhap();
		void xuat();
};
void Giaovien::nhap(){
	cout<<"\n Nhap ten giao vien : "; getline(cin>>ws,a);
	cout<<"\n Giao vien day mon : "; getline(cin>>ws,b);
	cout<<"\n Nhap so tiet da day : "; cin>>c;
}
void Giaovien::xuat(){
	cout<<"\n Ten giao vien la : "<<a;
	cout<<"\n Giao vien mon : "<<b;
	cout<<"\n So tiet da day :"<<c;
}
class Monhoc{
	private:
		string x;
		int y;
	public:
		void xuat();
		void nhap();
};
void Monhoc::nhap(){
	cout<<"\n Nhap ten mon : "; getline(cin>>ws,x);
	cout<<"\n Nhap so tiet da hoc : "; cin>>y;
}
void Monhoc::xuat(){
	cout<<"\n Mon hoc : "<<x;
	cout<<"\n So tiet da hoc la :"<<y;
}
int main(){
	int n,t;
	Giaovien gv[100];
	cout<<"\n Nhap so luong giao vien : "; cin>>n;
	for(int i; i<n; i++){
		cout<<"\n Nhap giao vien thu : "<<i+1;
		gv[i].nhap();
	}
	for(int i=0; i<n; i++){
		cout<<"\n Giao vien thu : "<<i+1;
		gv[i].xuat();
	}
	Monhoc mh[100];
	cout<<"\n Nhap so luong mon hoc : "; cin>>t;
	for(int i=0; i<t; i++){
		cout<<"\n Nhap mon hoc thu : "<<i+1;
		mh[i].nhap();
	}
	for(int i=0; i<t; i++){
		cout<<"\n Mon hoc thu : "<<i+1;
		mh[i].xuat();
	}
}
