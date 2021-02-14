#include<iostream>

using namespace std;

int main(){
	int i, adet=0, top, sayi;
	float avrg;
	
	for(i=1;true;i++){
		cin>>sayi;
		if(sayi==-1){
			break;
		}
		top+=sayi;
		avrg= top/i;
		adet++;
	}
	cout<<"Toplam: "<<top<<endl;
	cout<<"Aritmetik: "<<avrg<<endl;
	cout<<"Adet: "<<adet<<endl;
	return 0;
}
