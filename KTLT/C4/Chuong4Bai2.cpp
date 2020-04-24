// TQB13 - Tran Quoc Bao
/*
B�i 2. Su dung con tro nhap mot d�y so nguy�n gom n phan tu.
a, Xuat d�y ra m�n h�nh theo chieu nguoc lai
b, X�c dinh phan tu c� gi� tri lon nhat v� vi tr� cua n�
c, Sap xep d�y tang dan
d, Sap xep mang nhu sau: b�n tr�i l� c�c phan tu �m giam dan, o giua l� so kh�ng ( neu c�), b�n phai l� c�c so duong tang dan
*/

#include <iostream>
using namespace std;

void nhapMang(int *p, int n);
void xuatMang(int *p, int n);
void xuatNguoc(int *p, int n);
void viTri(int *p, int n, int k);
int maxB(int *p, int n);
void sapXepTang(int *p, int n);
void sapXep2(int *p, int n);

int main(){
	
	int n,*p;
	cout<<"Nhap so ptu: ";
	cin>>n;
	p = new int[n];
	nhapMang(p,n);
	
	cout<<"\ncA. Mang xuat nguoc:\n"; xuatNguoc(p,n);
	cout<<"\ncB. Gia tri lon nhat la: "<<maxB(p,n)<<"; tai vi tri: "; viTri(p,n,maxB(p,n));
	cout<<"\ncC. Xuat mang tang:\n"; sapXepTang(p,n);
	cout<<"\ncC. Xuat mang AmGiam conlaiTang:\n"; sapXep2(p,n);
	
	delete[] p;
	return 0;
}

void nhapMang(int *p, int n){
	for(int *i=p; i<p+n; i++ ){
		cout<<"nhap phan tu "<<i-p+1<<" : ";
		cin>>*i;
	}
}
void xuatMang(int *p, int n){
	for(int *i=p; i<p+n; i++ ){
		cout<<*i<<'\t';
	}
}
void xuatNguoc(int *p, int n){
	for(int *i=p+n-1; i>=p; i-- ){
		cout<<*i<<'\t';
	}
	cout<<endl;
}
void viTri(int *p, int n, int k){
	for(int *i=p; i<p+n; i++ ){
		if(*i==k) cout<<i-p+1<<", ";
	}
	cout<<endl;
}
int maxB(int *p, int n){
	int max=*p;
	for(int *i=p; i<p+n; i++ ){
		if(*i>max) max=*i;
	}
	return max;
}
void sapXepTang(int *p, int n){
	int tam;
	for(int *i=p; i<p+n-1; i++){
		for(int *j=i+1; j<p+n; j++){
			if(*i>*j){
				tam=*i;
				*i=*j;
				*j=tam;
			}
		}
	}
	xuatMang(p,n);
	cout<<endl;
}
void sapXep2(int *p, int n){
	int vt0=0;
	sapXepTang(p,n);
	while(*(p+vt0)<0) vt0++;
	int tam;
	for(int *i=p; i<p+vt0-1; i++){
		for(int *j=i+1; j<p+vt0; j++){
			if(*i<*j){
				tam=*i;
				*i=*j;
				*j=tam;
			}
		}
	}
	xuatMang(p,n);
	cout<<endl;
}
