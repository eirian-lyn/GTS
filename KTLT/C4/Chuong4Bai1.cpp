// TQB13 - Tran Quoc Bao
/*
B�i 1. H�y khai b�o bien k� tu ch v� con tro kieu k� tu pc tro v�o bien ch. Viet ra c�c c�ch g�n gi� tri �A� cho bien ch. 
*/

#include <iostream>
using namespace std;
int main(){
	
	char ch; //khai bao bien kitu
	char *pc; //khai bao con tro ki tu
	pc = &ch; //tro con tro pc v�o bi�n ch
	
	ch = 'A'; //C�ch 1
	*pc='A'; //C�ch 2
	ch = 65; //C�ch 3	
	*pc=65; //C�ch 4
	ch = 1000001; //C�ch 5
	*pc = 1000001; //C�ch 6
	ch = 0x41; //C�ch 7
	*pc = 0x41; //C�ch 8

//	c�n h� co s� 8 v� 10 nua, ma em ko biet gh :(
	
	cout<<ch; //test
	
	return 0;
}

