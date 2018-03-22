#include <iostream>
using namespace std;

main(){
	int inputan, bagi, sisa;
	cout<<"masukkan Angka : ";
	cin>>inputan;
	cout<<"masukkan pembagi: ";
	cin>>bagi;
	sisa = inputan%bagi;	
	if(sisa==0){
		cout<<"Tidak ada sisa.";
	}
	else{
		cout<<"sisa hasil: "<<sisa;
	}
}
