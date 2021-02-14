#include <iostream>

using namespace std;

int main(){
	
	int i, a, b, c, sayac=0;
	
	for(i=100;i<=999;i++){
		
		a= i/100;
		b= (i/10)%10;
		c= i%10;
		
		if(a!=b && a!=c && b!=c){
			sayac++;
		}
	}
	cout<<sayac;
}
