#include<iostream>
using namespace std;

int main(){
	int sayi, birler, onlar, yuzler, binler;
	
	tekrar:
	cout<<"Sayi giriniz: ";
	cin>>sayi;
	cout<<endl;

	if(sayi>=0 && sayi<=9)   //Bir basamakli sayi
	{   
		cout<<endl<<"Girilen sayi tek hanelidir: "<<sayi;
	}
	
	if(sayi>=10 && sayi<=99) //Iki basamakli sayi
	{
		onlar = (sayi/10)%10;
		birler = sayi%10;
		
		cout<<"Onlar basamagi: "<<onlar<<endl;
		cout<<"Birler basamagi: "<<birler<<endl;
		cout<<endl<<"Rakamlari toplami: "<<yuzler+onlar+birler;
	}
	if(sayi>=100 && sayi<=999) //Uc basamakli sayi
	{
		yuzler = sayi/100;
		onlar = (sayi/10)%10;
		birler = sayi%10;
		
		cout<<"Yuzler basamagi: "<<yuzler<<endl;
		cout<<"Onlar basamagi: "<<onlar<<endl;
		cout<<"Birler basamagi: "<<birler<<endl;
		cout<<endl<<"Rakamlari toplami: "<<yuzler+onlar+birler;
	}
	
	if(sayi>=1000 && sayi<=9999) //Dort basamakli sayi
	{
		binler = sayi/1000;
		yuzler = (sayi/100)%10;
		onlar = (sayi/10)%10;
		birler = sayi%10;
		
		cout<<"Binler basamagi: "<<binler<<endl;
		cout<<"Yuzler basamagi: "<<yuzler<<endl;
		cout<<"Onlar basamagi: "<<onlar<<endl;
		cout<<"Birler basamagi: "<<birler<<endl;
		cout<<endl<<"Rakamlari toplami: "<<binler+yuzler+onlar+birler;
	}
	else{
		cout<<"Basamak degeri 4'ten fazla sayi girmeyiniz."<<endl;
		cout<<"Tekrar deneyin."<<endl;
		goto tekrar;
	}
	return 0;
}
