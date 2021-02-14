#include<iostream>
using namespace std;

	int hesapla(int en, int boy)	{
		int i, j;
		for(i=0;i<boy;i++)
		{
			for(j=0;j<en;j++)
			{
				if(i==0){
					cout<<"*";
				}
				else if(i==(boy-1))
				{
					cout<<"*";
				}
				else{
					if(j==0 || j==(en-1))
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
			}
		}
		cout<<endl;
		}	
		return en;
		return boy;
	}


int main(){
	int i, j, en, boy;
	
	cout<<"Kisa kenar giriniz:";
	cin>>en;
	cout<<"Uzun kenar giriniz: ";
	cin>>boy;
	hesapla(en,boy);
	

	

}
