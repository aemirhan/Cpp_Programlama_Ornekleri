#include<iostream>
using namespace std;

int main(){
	
	int i, a, b, c, sec;
	
	a=1;
	b=1;
	
	cout<<"Dongu kac defa donsun : ";cin>>sec;
	cout<<endl<<a<<endl<<b<<endl;
	
	for(i=1; i<=sec; i++){
		
		c =  b;
		b += a;
		a =  c;
		cout<<b<<endl;
	}
}
