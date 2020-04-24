// TQB13 - Tran Quoc Bao
/*
B�i 3. Cho x�u k� tu (dung con tro) s. 
a, H�y copy tu s sang x�u t mot doan bat dau tai vi tr� m voi do d�i n.
b, �oi c�c k� tu (neu l� chu c�i) dau ti�n sau c�c khoang trang cua t sang chu in hoa.
*/

#include <iostream>
#include <cstring>
using namespace std;
void copyAtoB(char *s, char *t, int m, int n){
	int k=0;
	for(int i=0; i<n; i++){
		*(t+i)=*(s+m+i-1);
	}
	*(t+n)='\0';
}
void strH(char *s){
	int i=0;
	while(*(s+i)!='\0'){
		if( (*(s+i)>='a' && *(s+i)<='z') && *(s+i-1)==' '){
			*(s+i)-=32;
		}
		i++;
	}
}
int main(){
	char S[277];
	cout<<"Cho xau S: \n";
	cin.getline(S,276);
	char *s = S;//"tran 7thao quoc 2giang bao dep trai ll";
	//cout<<"Cho xau S: "<<s<<endl;
	
	//Cau A
	int m, n;
	cout<<"\nNhap m, n: ";
	cin>>m>>n;
	char *t;
	t = new char[n];
	copyAtoB(s,t,m,n);
	cout<<"cA. Xau t: \n"<<t<<endl;
	delete[] t;
	
	//Cau B
	strH(s);
	cout<<"\ncB. Chuoi da Viet Hoa sau Khoang Trang:\n"<<s<<endl;
	
	return 0;
}
