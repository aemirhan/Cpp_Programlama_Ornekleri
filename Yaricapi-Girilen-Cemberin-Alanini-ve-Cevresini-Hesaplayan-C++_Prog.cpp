#include<iostream>
#define PI 3.14
using namespace std;

int main(){
	
	int yaricap; 
	float alan, cevre;
	
	cout<<"Yaricap degeri giriniz : ";
	cin>>yaricap;
	
	alan = (PI*yaricap*yaricap);
	cevre = (2*PI*yaricap);
	
	cout<<"Yaricapi girilen cemberin alani : "<<alan<<endl;
	cout<<"Yaricapi girilen cemberin cevresi : "<<cevre<<endl;
	return 0;
}
