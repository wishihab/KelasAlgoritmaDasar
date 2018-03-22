#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int nilaiabsen, nilait, nilaiuts, nilaiuas, nilai, nilaiakhir;
	char ulang;
	string matakul;
		
	ulang:
	cout<<"-==================================================-\n";
	cout<<"-==== Masukan Nama Mata Kuliah	: ";
	cin>>matakul;
	cout<<"-==== Masukan Nilai Absensi	: ";
	cin>>nilaiabsen;
	cout<<"-==== Masukan Nilai Tugas	: ";
	cin>>nilait;
	cout<<"-==== Masukan Nilai UTS		: ";
	cin>>nilaiuts;
	cout<<"-==== Masukan Nilai UAS		: ";
	cin>>nilaiuas;
	cout<<"-==================================================-\n";
	nilaiakhir=(nilaiabsen*0.2)+(nilait*0.2)+(nilaiuts*0.3)+(nilaiuas*0.3);
	
	cout<<"-==== Nilai Akhir Anda	 	: "<<nilaiakhir<<endl;

	if (nilaiakhir>=80 && nilaiakhir<=100)
	
	{
		cout<<"-==================================================-\n";
		cout<<"-============== Grade Anda Adalah A ===============-\n";
		cout<<"-============== SELAMAT ANDA LULUS ================-\n";
		cout<<"-==================================================-\n";
	}
	else if (nilaiakhir>=70 && nilaiakhir<=79)
	{
		cout<<"-==================================================-\n";
		cout<<"-==============  Grade Anda Adalah B ==============-\n";
		cout<<"-============== SELAMAT ANDA LULUS ================-\n";
		cout<<"-==================================================-\n";
	}
	else if (nilaiakhir>=50 && nilaiakhir<=69)
	{
		cout<<"-==================================================-\n";
		cout<<"-============== Grade Anda Adalah C ===============-\n";
		cout<<"-============== SELAMAT ANDA LULUS ================-\n";
		cout<<"-==================================================-\n";
	}
	else if (nilaiakhir>=40 && nilaiakhir<=49)
	{
		cout<<"-==================================================-\n";
		cout<<"-============== Grade Anda Adalah D ===============-\n";
		cout<<"-============= MAAF ANDA BELUM LULUS ==============-\n";
		cout<<"-==================================================-\n";
	}
	else
	{
		cout<<"-==================================================-\n";
		cout<<"-============== Grade Anda Adalah E ===============-\n";
		cout<<"-============= MAAF ANDA BELUM LULUS ==============-\n";
		cout<<"-==================================================-\n";	}
	
	cout<<"-======== Apakah Anda Ingin Mengulang ? [Y/N] : ";
	cin>>ulang;
	if (ulang=='Y' || ulang=='y')
	{
		goto ulang;
	}
	
}
