#include<iostream>
using namespace std;

main(){
	int nilai[6][4];
	string nama[5]={"Andi","Cinta","Fani","Putra","Rangga"};

	nilai[0][0]=75;
	nilai[0][1]=80;
	nilai[0][2]=90;
	nilai[1][0]=50;
	nilai[1][1]=50;
	nilai[1][2]=65;
	nilai[2][0]=95;
	nilai[2][1]=85;
	nilai[2][2]=70;
	nilai[3][0]=65;
	nilai[3][1]=70;
	nilai[3][2]=65;
	nilai[4][0]=80;
	nilai[4][1]=85;
	nilai[4][2]=85;
	
	for(int i=0; i<=4; i++){
		cout<<nama[i]<<" ";
		for(int j=0; j<=3; j++){
			if(j<=2){
				cout<<nilai[i][j]<<" ";
			}
			else if(j>2){
				for(int n=0;n<=2;n++){
					nilai[i][j]=nilai[i][j]+nilai[i][n];
				}
				nilai[i][j]=nilai[i][j]/3;
				cout<<nilai[i][j]<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int j=0; j<=4; j++){
		if(nilai[j][3]>=75){
			cout<<nama[j];
		}
	}
	
	cout<<endl;
	for(int j=0; j<=4; j++){
		if(nilai[j][3]<75){
			cout<<nama[j];
		}
	}
	
}
