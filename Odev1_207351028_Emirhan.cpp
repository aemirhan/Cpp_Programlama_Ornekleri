#include<stdio.h>
#include<iostream>
#include<locale.h>    //Kütüphaneleri ekledik.
#include<conio.h>
#include<string.h>
using namespace std; //Her cout ve cin kullaniminda basina std:: eklememek icin program basina boyle bir kod tanimladik.

int main(){
	int vize,final,but; 
	float dersort; 			//Veritürleri ve degiskenler olusturuldu.
	char adsoy[50];
	setlocale(LC_ALL,"Turkish");	//Türkce karakter kullanimi için yerel ayar olusturuldu.
	cout<<"Ad ve Soyadinizi Giriniz:";gets(adsoy);
	cout<<"1.Vize Notunuzu Giriniz:";cin>>vize;		//Kullanicidan ad,soyad,vize ve final bilgisi istendi.
	cout<<"Final Notunuzu Giriniz:";cin>>final;
	dersort= (vize*4/10.0+final*6/10.0);		//Ders ortalamasi hesaplandi.
	if       (dersort>=90)              {cout<<adsoy<<" "<<"harf notunuz - AA - ve "<<dersort<<" "<<"ortalama ile dersi geçtiniz.";}
	else if  (dersort>=80 && dersort<90){cout<<adsoy<<" "<<"harf notunuz - BA - ve "<<dersort<<" "<<"ortalama ile dersi geçtiniz.";}
	else if  (dersort>=70 && dersort<80){cout<<adsoy<<" "<<"harf notunuz - BB - ve "<<dersort<<" "<<"ortalama ile dersi geçtiniz.";}
	else if  (dersort>=65 && dersort<70){cout<<adsoy<<" "<<"harf notunuz - CB - ve "<<dersort<<" "<<"ortalama ile dersi geçtiniz.";}
	else if  (dersort>=60 && dersort<65){cout<<adsoy<<" "<<"harf notunuz - CC - ve "<<dersort<<" "<<"ortalama ile dersi geçtiniz.";}
	else if  (dersort>=55 && dersort<60){cout<<adsoy<<" "<<"harf notunuz - DC - ve "<<dersort<<" "<<"ortalama ile dersi sorumlu geçtiniz."<<endl;}
	else if  (dersort>=50 && dersort<55){cout<<adsoy<<" "<<"harf notunuz - DD - ve "<<dersort<<" "<<"ortalama ile dersi sorumlu geçtiniz."<<endl;}
	else if  (dersort>=40 && dersort<50){cout<<adsoy<<" "<<"harf notunuz - FD - ve "<<dersort<<" "<<"ortalama ile bütünleme sinavina kaldiniz."<<endl;}
	else                                {cout<<adsoy<<" "<<"harf notunuz - FF - ve "<<dersort<<" "<<"ortalama ile bütünleme sinavina kaldiniz."<<endl;}
	if(dersort<60){			//Ders ortalamasi 60'in altinda ise bütünleme sinavina kalinir. 
		cout<<"Bütünleme Notunuzu Giriniz:";cin>>but;  //Bütünleme not bilgisi istendi.
		dersort = (vize*4/10.0+but*6/10.0);		//Bütünleme not bilgisi sonrasi yeni ortalama hesaplanir.
		if     (dersort>=40 && dersort<50) {cout<<"Dersten - FD - notu ile kaldiniz."<<" "<<"Yeni ortalamaniz - "<<dersort<<" -";}
		else if(dersort<40 )               {cout<<"Dersten - FF - notu ile kaldiniz."<<" "<<"Yeni ortalamaniz - "<<dersort<<" -";}
		else                               {cout<<"Dersten geçtiniz."<<" "<<"Yeni ortalamaniz - "<<dersort<<" -";}
	}  
	getch(); //Programin kapanmasini engeller. 
	return 0; //Programin bittigini haber verir.
}
