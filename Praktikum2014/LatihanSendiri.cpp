#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

float ipks(char predikat)
{
	float ipk;
	if (predikat=='A')
	{
		ipk=4;
	}
	else if (predikat=='B')
	{
		ipk=3,5;
	}
	else if (predikat=='C')
	{
		ipk=3;
	}
	else if (predikat=='D')
	{
		ipk=2,5;
	}
	else if (predikat=='E')
	{
		ipk=1,75;
	}
	return ipk;
}

char pre(int rata)
{
	char predikat;
	
	if(rata>=80)
	{
		predikat='A';
	}
	else if(rata>=70 && rata<80)
	{
		predikat='B';
	}
	else if(rata>=60 && rata<70)
	{
		predikat='C';
	}
	else if(rata>=50 && rata<60)
	{
		predikat='D';
	}
	else if(rata<50)
	{
		predikat='E';
	}
	return predikat;
}

int tot(int x, int y)
{
	int total;
	total=x+y;
	
	return total;
}

char ket(char predikat)
{
	char keterangan;
	
	if(predikat=='A' || predikat=='B' || predikat=='C')
	{
		keterangan='L';
	}
	else
	{
		keterangan='T';
	}
	return keterangan;
}

int rata2(int x)
{
	float rata;
	
	rata=x/2;	
	return rata;
}

main()
{
	int i,s;
	char nama[10][20];
	float nilai1[10];
	float nilai2[10];
	float rata[10];
	
	double total[10];
	
	cout<<"Masukan Jumlah Data : ";
	cin>>s;
	
	for(i=1;i<=s;i++)
	{
		cout<<"Data Ke - "<<i<<endl;
		cout<<"Nama Siswa : "; cin>>nama[i];
		cout<<"Nilai Pertama  : "; cin>>nilai1[i];
		cout<<"Nilai Kedua : "; cin>>nilai2[i];
		cout<<endl;
	}
	
	system("cls");
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"| IPK | Nama Orang  | Nilai 1 | Nilai 2 | Total | Rata2 | Predikat |Keterangan|"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	
	for(i=1;i<=s;i++)
	{
		cout<<"| "<<ipks(pre(rata2(tot(nilai1[i],nilai2[i]))));
		cout<<setw(4)<<" | "<<nama[i];
		cout<<setw(7)<<" | "<<nilai1[i];
		cout<<setw(7)<<" | "<<nilai2[i];
		cout<<setw(8)<<" | "<<tot(nilai1[i],nilai2[i]);
		cout<<setw(6)<<" | "<<rata2(tot(nilai1[i],nilai2[i]));
		cout<<setw(6)<<" | "<<pre(rata2(tot(nilai1[i],nilai2[i])));
		cout<<setw(10)<<" | "<<ket(pre(rata2(tot(nilai1[i],nilai2[i]))))<<setw(9)<<"|"<<endl;
	}
	cout<<"------------------------------------------------------------------------------"<<endl;
	cout<<"Terima kasih telah menggunakan aplikasi sederhana ini."<<endl;
	cout<<"Muhammad Alwi Shihab | 2014-81-096 | Fasilkom`14 | Algoritma.";
	getch();
}
