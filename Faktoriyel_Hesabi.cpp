#include<iostream>
using namespace std;

int main(){
	
	int i,fact=1,sayi;
	cout<<"Sayi  giriniz: ";
	cin>>sayi;
	for(i=sayi;i>=1;i--){
		fact*=i;
	}
	cout<<sayi<<" sayisinin Faktoriyeli: "<<fact;
}
