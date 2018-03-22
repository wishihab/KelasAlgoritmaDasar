#include <iostream>
#include <conio.h>
#include <iomanip>
#include<stdlib.h>
using namespace std;

main()
{
	char z[25][10][10];
	
	int x;

	cout<<"== Masukkan Jumlah Mahasiswa : ";
	cin>>x;
	cout<<endl;
		for(int i=0;i<x;i++)
		{
			cout<<"==================================\n";
			cout<<"== Nama Mahasiswa :";
			cin>>z[i][0];
			for(int j=1;j<3;j++)
			{
				cout<<"== Masukkan Nilai ke-"<<j<<"    :";
				cin>>z[i][j];
			}	
		}
	cout<<"==================================\n";
	
	system("cls");
	cout<<"-=======================-:Nilai Mahasiswa:-====================-\n";
	cout<<"-==============================================================-\n";
	cout<<"|No|"<<setw(12)<<"Nama"<<setw(8)<<"||"<<setw(15)<<"Nilai 1"<<setw(5)<<"||"<<setw(15)<<"Nilai 2"<<setw(5)<<"||"<<endl;
	cout<<"-==============================================================-\n";
	
	for(int i=0;i<x;i++)
	{
			cout<<"|"<<i+1<<".|";
			
			for(int j=0; j<3; j++)
			{
				cout<<setw(10)<<z[i][j]<<setw(10)<<"||";
			}
			cout<<endl;
	}
	cout<<"-==============================================================-\n";	
	getch();
}

