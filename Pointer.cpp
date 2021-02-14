#include <iostream>
using namespace std;

int main(){

	int    in  = 8       , *ip;
	float  f  = 3.12    , *fp;
	double d  = 10.12587, *dp;
	char   c  = 'e'     , *cp;

	ip = &in;
	fp = &f;
	dp = &d;
	cp = &c;
	
	
	cout<<ip<<" adresindeki int degiskeninin degeri: "<<*ip<<endl;
	cout<<fp<<" adresindeki float degiskeninin degeri: "<<*fp<<endl;
	cout<<dp<<" adresindeki double degiskeninin degeri: "<<*dp<<endl;
	cout<<cp<<" adresindeki char degiskeninin degeri: "<<*cp<<endl;

}
