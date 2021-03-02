#include<iostream>
using namespace std;

int main(){
	
	int i, j, t, sayi[2][3];
	

	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cin>>sayi[i][j];
		}
	}
	cout<<endl;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<sayi[i][j];
			cout<<" ";
		}
		cout<<" "<<endl;
	}
	cout<<endl;
	
	for(j=0;j<3;j++){
		
		for(i=0;i<2;i++){
			t += sayi[i][j];
		}
		cout<<t<<" ";
		t = 0;
	}
	
	
	
	
}
