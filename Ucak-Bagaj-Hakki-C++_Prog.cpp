/*Hava yolu sirketinde el bagaj hakki 5 kilo, normal bagaj hakki 10 kilodur.
El bagaj limiti gecildiginde kilo basi 3TL, normal bagaj limiti gecildiginde kilo basi 4TL
fiyat tarifesi uygulanmaktadir. Bagaj limitleri gecmeyince "iyi ucuslar", gectiginde hangi 
bagj icin ne kadar tutar odeyecegini belirleyen cpp programini yaziniz.
*/

#include<iostream>
using namespace std;


int main(){
	int el_bagaj, bagaj;
	
	cout<<"El bagajini giriniz: ";
	cin>>el_bagaj;
	cout<<"Normal bagajini giriniz: ";
	cin>>bagaj;
	
	if(el_bagaj<=5 && bagaj<=10){
		cout<<"Iyi ucuslar.";
	}
	if(el_bagaj>5){
		el_bagaj= (el_bagaj-5)*3;
		cout<<"El bagaji hakkinizi gectiniz. Odemeniz gereken tutar: "<<el_bagaj<<" TL"<<endl;
	}
	if(bagaj>10){
		bagaj=(bagaj-10)*4;
		cout<<"Bagaj hakkinizi gectiniz. Odemeniz gerekn tutar: "<<bagaj<<" TL";	
	}
}
