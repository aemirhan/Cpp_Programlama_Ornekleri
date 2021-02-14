#include<iostream>
#include<locale>
using namespace std;

int main(){
	
	int a,b,sec;
	double sonuc;
	
	cout<<"Bir sayiyi giriniz :";
	cin>>a;
	cout<<"Ikinci sayiyi giriniz :";
	cin>>b;
	cout<<"Toplama (1)"<<endl<<"Cikarma (2)"<<endl<<"Carpma (3)"<<endl<<"Bolme (4)"<<endl<<"Yapmak istediginiz islemi seciniz : ";
	cin>>sec;
	switch(sec){
		case 1:
			sonuc = (a+b);	
			cout<<sonuc;
			break;
		case 2:
			sonuc = (a-b);	
			cout<<sonuc;
			break;
		case 3:
			sonuc = (a*b);	
			cout<<sonuc;
			break;
		case 4:
			sonuc = (a/b);	
			cout<<sonuc;
			break;
		default:
			cout<<"Yanlis secim yaptiniz.";
	}
}
