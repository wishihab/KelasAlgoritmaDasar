#include <iostream>
#include <conio.h>
#include <iomanip>
#include<stdlib.h>
using namespace std;

main()
{
	int n[6][4];
	int rata1, rata2, rata3, rata4, rata5;
	string nama[5]={"Andi", "Cinta", "Fani", "Putra", "Rangga"};
	n[0][0]=75;
	n[0][1]=80;
	n[0][2]=90;
	n[1][0]=50;
	n[1][1]=50;
	n[1][2]=65;
	n[2][0]=95;
	n[2][1]=85;
	n[2][2]=70;
	n[3][0]=65;
	n[3][1]=70;
	n[3][2]=65;
	n[4][0]=80;
	n[4][1]=85;
	n[4][2]=85;
	

	rata1=(n[0][0]+n[0][1]+n[0][2])/3;
	rata2=(n[1][0]+n[1][1]+n[1][2])/3;
	rata3=(n[2][0]+n[2][1]+n[2][2])/3;
	rata4=(n[3][0]+n[3][1]+n[3][2])/3;
	rata5=(n[4][0]+n[4][1]+n[4][2])/3;
	
	cout<<"-=======================-:Nilai Mahasiswa:-====================-\n";
	cout<<"-==============================================================-\n";
	cout<<"|No|"<<setw(5)<<"Nama"<<setw(5)<<"||"<<setw(5)<<"Nilai 1"<<setw(5)<<"||"<<setw(5)<<"Nilai 2"<<setw(5)<<"||"<<"Nilai 3"<<setw(5)<<"||"<<"Rata"<<setw(5)<<"||"<<endl;
	cout<<"-==============================================================-\n";
	
	for(int i=0;i<5;i++)
	{
			cout<<"|"<<setw(5)<<i+1<<".|";
			cout<<setw(3)<<nama[i];
			for(int j=0; j<3; j++)
			{
				cout<<setw(7)<<n[i][j]<<setw(7)<<"||";
			}
			cout<<endl;
			
	}
	cout<<endl;
	cout<<rata1<<" "<<rata2<<" "<<rata3<<" "<<rata4<<" "<<rata5<<" "<<endl;
	
	cout<<endl;
	cout<<"Nilai lebih dari 75"<<endl;
	for(int j=0; j<=4; j++){
		if(n[j][3]>=75){
			
			cout<<nama[j];
		}
		cout<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Nilai kurang dari 75"<<endl;
	for(int j=0; j<=4; j++){
		if(n[j][3]<75){
		
			cout<<nama[j];
		}
		cout<<" ";
	}

}

