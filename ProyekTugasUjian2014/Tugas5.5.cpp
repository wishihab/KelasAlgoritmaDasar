#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int input, bagi, sisa;
	cout<<"masukkan input : ";
	cin>>input;
	cout<<"masukkan pembagi: ";
	cin>>bagi;
	sisa = input%bagi;	
	if(sisa==0){
		cout<<" ";
	}
	else{
		cout<<"sisa hasil: "<<sisa;
	}
}
