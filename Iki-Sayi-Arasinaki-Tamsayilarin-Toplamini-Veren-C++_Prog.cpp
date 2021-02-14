/* Kullanicidan iki sayi isteyen iki sayi arasindaki tam sayilarin toplamini 
yazdiran cpp program. 
NOT: Sayilar ayni girilirse kullanicidan tekrar iki sayi istenir.
*/


#include<iostream>
using namespace std;

int main(){
	int i, k, l, top=0, bsayi, ksayi;
	
	bas:
	cout<<"1.Sayiyi giriniz: ";
	cin>>k;
	cout<<"2.Sayiyi giriniz: ";
	cin>>l;
	
	if(k == l){
		goto bas;
	}
	
	else{
		if(k>l){
			bsayi=k;
			ksayi=l;
		}
		else{
			bsayi=l;
			ksayi=k;
		}
	}
	
	for(i=ksayi;i<=bsayi;i++){
		top= top+i;
	}
	cout<<top;
	
}
