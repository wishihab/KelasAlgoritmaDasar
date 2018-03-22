#include <iostream>
using namespace std;

main(){
	int total;
	for(int i=1; i<=4; i++){
		int hasil=0;
		for(int j=1; j<=i; j++){
			cout<<j;
			hasil=hasil+j;
			if(j<i){
				cout<<"+";
			}
			else {
				cout<<"=";
			}
		}
		cout<<hasil;
		cout<<endl;
	}
}
