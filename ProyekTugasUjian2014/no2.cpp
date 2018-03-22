#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{
	int nilaitugas[3];
	int nilaiakhir, nilaia, nilait, i, totalnilait, nilaiuts, nilaiuas, hadir, absen;
	char ulang;
	do
	{
		cout<<"-=========================================================-\n";
		cout<<"Masukkan Total Kehadiran Anda (max 14): ";
		cin>>hadir;
		absen= 14 - hadir;//codealwi
		cout<<"Total Kehadiran Anda	: "<<hadir<<endl;
		cout<<"Total Absen Anda	: "<<absen;
		nilaia=(hadir*100/14);
		cout<<endl;
		cout<<"Nilai Absensi Anda 	: "<<nilaia<<endl;
		cout<<"-=========================================================-\n";
		cout<<endl;
	for (i=0;i<=2;i++)
	{	
		cout<<"Masukkan Nilai Tugas (max 100): ";
		cin>>nilaitugas[i];//codealwi
	}
			
	totalnilait=nilaitugas[0]+nilaitugas[1]+nilaitugas[2];
	nilait=totalnilait/3;

		cout<<"Nilai Tugas Anda : "<<nilait;
		cout<<endl;
		cout<<"-=========================================================-\n";
		cout<<endl;
		cout<<"Masukkan Nilai UTS Anda (max 100): ";
		cin>>nilaiuts;
		cout<<"Masukkan Nilai UAS Anda (max 100): ";
		cin>>nilaiuas;

	nilaiakhir=(0.1*nilaia)+(0.2*nilait)+(0.3*nilaiuts)+(0.4*nilaiuas);
	cout<<"Nilai Akhir Anda Adalah "<<nilaiakhir;
	cout<<endl<<endl;
	cout<<"Apakah anda ingin mengulang [Y/T]? "<<endl;
	cin>>ulang;
	system("pause");
	system ("cls");	
	}
	while (ulang== 'Y' || ulang== 'y');
	getch ();
	

}
