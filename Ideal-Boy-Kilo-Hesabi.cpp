#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
	
	int yas;
	float boy,ideal;
	char cinsiyet;
	
	cout<<("\t\t***IDEAL KILO HESAPLAMA***\n\n");
	cout<<("Boyunuzu giriniz: ");
	cin>>boy;
	cout<<("Yasinizi giriniz: ");
	cin>>yas;
	tekrar:
	cout<<("Cinsiyetinizi belirtiniz -- (E) (K) :");
	cin>>cinsiyet;
	
	
	if(cinsiyet=='E' || cinsiyet=='e'){
		ideal= (boy-100+yas/10)*0.9; 
		cout<<endl<<"Sizin ideal kilonuz: "<<ideal; 
	}
	else if(cinsiyet=='K' || cinsiyet=='k'){
		ideal= (boy-100+yas/10)*0.8; 
		cout<<endl<<"Sizin ideal kilonuz: "<<ideal; 
	}
	else{
		cout<<"Hatali tuslama yaptiniz lutfen tekrar deneyiniz."<<endl;
		goto tekrar;
	}
}
