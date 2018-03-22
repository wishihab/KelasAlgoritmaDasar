#include <iostream>
#include <stdlib.h>
using namespace std;
main()

{
	float nilai_1, sks1, nilai_2, sks2, nilai_3, sks3, nilai_4, sks4, nilai_5, sks5, totsks, ipktot;
	char nilaia, nilaib, nilaic, nilaid, nilaie, tanya;
	
	ulang:
	lagi:
		//Satu
	cout<<"====================================================\n";	
	cout<<"Masukan Predikat Matakuliah Algoritma : ";
	cin>>nilaia;
	if (nilaia=='A' || nilaia=='a')
	{
		nilai_1=4;
	}
	else if (nilaia=='B' || nilaia=='b')
	{
		nilai_1=3;
	}
	else if (nilaia=='C' || nilaia=='c')
	{
		nilai_1=2;
	}
	else if (nilaia=='D' || nilaia=='d')
	{
		nilai_1=1;
	}
	else if (nilaia=='E' || nilaia=='e')
	{
		nilai_1=0;
	}
	else
	{
		cout<<"Predikat Saalah\n";
		goto ulang;
	}
	cout<<"Masukan Total SKS Algoritma : ";
	cin>>sks1;
	//DUA
	cout<<"====================================================\n";
	ulang2:
	cout<<"Masukan Predikat Matakuliah Kalkulus : ";
	cin>>nilaib;
	if (nilaib=='A' || nilaib=='a')
	{
		nilai_2=4;
	}
	else if (nilaib=='B' || nilaib=='b')
	{
		nilai_2=3;
	}
	else if (nilaib=='C' || nilaib=='c')
	{
		nilai_2=2;
	}
	else if (nilaib=='D' || nilaib=='d')
	{
		nilai_2=1;
	}
	else if (nilaib=='E' || nilaib=='e')
	{
		nilai_2=0;
	}
	else
	{
		cout<<"Predikat Saalah\n";
		goto ulang2;
	}
	cout<<"Masukan Total SKS Kalkuus: ";
	cin>>sks2;
	cout<<"====================================================\n";
	//TIGA
	cout<<"====================================================\n";
	ulang3:
	cout<<"Masukan Predikat Matakuliah Motivasi Usaha : ";
	cin>>nilaic;
	if (nilaic=='A' || nilaic=='a')
	{
		nilai_3=4;
	}
	else if (nilaic=='B' || nilaic=='b')
	{
		nilai_3=3;
	}
	else if (nilaic=='C' || nilaic=='c')
	{
		nilai_3=2;
	}
	else if (nilaic=='D' || nilaic=='d')
	{
		nilai_3=1;
	}
	else if (nilaic=='E' || nilaic=='e')
	{
		nilai_3=0;
	}
	else
	{
		cout<<"Predikat Saalah\n";
		goto ulang3;
	}
	cout<<"Masukan Total SKS Motivasi Usaha: ";
	cin>>sks3;
	cout<<"====================================================\n";
	
	//Empat
	cout<<"====================================================\n";
	ulang4:
	cout<<"Masukan Predikat Matakuliah MPP : ";
	cin>>nilaid;
	if (nilaid=='A' || nilaid=='a')
	{
		nilai_4=4;
	}
	else if (nilaid=='B' || nilaid=='b')
	{
		nilai_4=3;
	}
	else if (nilaid=='C' || nilaid=='c')
	{
		nilai_4=2;
	}
	else if (nilaid=='D' || nilaid=='d')
	{
		nilai_4=1;
	}
	else if (nilaid=='E' || nilaid=='e')
	{
		nilai_4=0;
	}
	else
	{
		cout<<"Predikat Saalah\n";
		goto ulang4;
	}
	cout<<"Masukan Total SKS MPP: ";
	cin>>sks4;
	cout<<"====================================================\n";
	
	//Lima
	cout<<"====================================================\n";
	ulang5:
	cout<<"Masukan Predikat Matakuliah Toefl: ";
	cin>>nilaie;
	if (nilaie=='A' || nilaie=='a')
	{
		nilai_5=4;
	}
	else if (nilaie=='B' || nilaie=='b')
	{
		nilai_5=3;
	}
	else if (nilaie=='C' || nilaie=='c')
	{
		nilai_5=2;
	}
	else if (nilaie=='D' || nilaie=='d')
	{
		nilai_5=1;
	}
	else if (nilaie=='E' || nilaie=='e')
	{
		nilai_5=0;
	}
	else
	{
		cout<<"Predikat Saalah\n";
		goto ulang5;
	}
	cout<<"Masukan Total SKS TOEFL: ";
	cin>>sks5;
	cout<<"====================================================\n";
	
	totsks=sks1+sks2+sks3+sks4+sks5;
	ipktot=((nilai_1 * sks1 ) + ( nilai_2 * sks2 ) + ( nilai_3 * sks3 ) + ( nilai_4 * sks4 ) + ( nilai_5 * sks5 )) / ( totsks );
	
	system("cls");
	cout<<"-=============================-"<<endl;
	cout<<"-= NO | Nama    |   Total    =-"<<endl;
	cout<<"-=============================-"<<endl;
	cout<<"-= 1  | "<<"SKS"<<"     | "<<totsks<<"         =-"<<endl;
	cout<<"-= 2  | "<<"IPK"<<"     | "<<ipktot<<"    =-"<<endl;
	cout<<"-=============================-"<<endl;
	
	cout<<"Ingin Mengulang Perhitungannya? [y/n] : ";
    cin>>tanya;
      if (tanya=='Y' || tanya=='y' )
      {
  		goto lagi;    
      }
      
    cout<<"====================================================\n";
    cout<<"Terima kasih.";
}
