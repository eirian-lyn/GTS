// TQB13 - Tran Quoc Bao
/*
B�i 6.  Viet h�m de qui t�nh n!
a, T�nh to hop chap k cua n phan tu ( Neu ton tai)
b, Tinh he so cua so hang thu k trong khai trien nhi thuc Newton cua : (a+b)^n
c, Xuat ra tat ca c�c he so cua khai trien nhi thuc o c�u B tr�n
d, Xuat ra m�n h�nh tam gi�c Pascal
*/

#include <iostream>
using namespace std;

unsigned long long factorial(int n);
unsigned long long combination(int n, int k);
unsigned long long combinationDQ(int n, int k);
void veTamGiacPascal(int n);

int main(){
	
	int n,k;
	
	//cau A.
	do{
		cout<<"\nNhap n va k (n>=k): ";
		cin>>n>>k;
	} while (n<0||k<0||k>n);
	cout<<"To hop chap "<<k<<" cua "<<n<<" phan tu la: "<<combination(n,k)<<endl;
	cout<<"To hop chap "<<k<<" cua "<<n<<" phan tu la: "<<combinationDQ(n,k)<<endl;	
	
	//cau B.
	do{
		cout<<"\nNhap n va k (n>=k): ";
		cin>>n>>k;
	} while (n<0||k<0||k>n);
	cout<<"So hang thu "<<k<<" trong khai trien NT Niuton cua (a+b)^"<<n<<" la: "<<combinationDQ(n,k-1)<<endl;
	
	//cau C.
	cout<<"\nCac so hang trong khai trien NT Niuton cua (a+b)^"<<n<<" lan luot la: \n";
	for(int i=0; i<=n ; i++){
		cout<<combinationDQ(n,i)<<" ";
	}
	cout<<endl;
	
	//cau D.
	veTamGiacPascal(n);
	
	return 0;
}

unsigned long long factorial(int n){
	if(n==0||n==1) return 1;
	return n*factorial(n-1);
}
unsigned long long combination(int n, int k){
	return factorial(n)/(factorial(k)*factorial(n-k));
}
unsigned long long combinationDQ(int n, int k){
	if(k==0||k==n) return 1;
	if(k==1) return n;
	return combinationDQ(n-1,k-1)+combinationDQ(n-1,k);
}
void veTamGiacPascal(int n){
	cout<<"\nTam giac Pascal "<<n+1<<" hang:\n";
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n-i; j++){
			cout<<"   ";
		}
		for(int j=0; j<=i ; j++){
			cout<<combinationDQ(i,j)<<"     ";
		}
		cout<<endl;
	}
}

