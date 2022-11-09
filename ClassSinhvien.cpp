#include<iostream>
#include<string>
using namespace std;

class Sinhvien{
	private:
		int b,c;
		string a;
	public:
		void nhap();
		void xuat();
};
void Sinhvien::nhap(){
	cout<<"\n Nhap ten sinh vien :"; getline(cin>>ws,a);
	cout<<"\n Nhap nam sinh : "; cin>>b;
	cout<<"\n So tiet da bo hoc :"; cin>>c;
	
}
void Sinhvien::xuat(){
	cout<<"\n Ten sinh vien la : "<<a;
	cout<<"\n Nam sinh : "<<b;
	cout<<"\n So tiet da bo hoc : "<<c;
}
int main(){
	int n;
	Sinhvien sv[100];
	cout<<" Nhap so luong sinh vien : "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n Nhap sinh vien thu : "<<i+1;
	    sv[i].nhap();
	}
	for(int i=0; i<n; i++){
	    cout<<"\n Sinh vien thu : "<<i+1;
		sv[i].xuat();
	}
	return 0;
}
