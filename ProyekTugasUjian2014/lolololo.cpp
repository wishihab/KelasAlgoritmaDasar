#include<iostream>
using namespace std;
main()
{
	int pilih;
	
	cout<<"Masukan Angka 1 jika nilai anda >80 \n";
	cout<<"Masukan Angka 2 jika nilai anda <80 \n";
	cout<<"Masukan angka : ";
	cin>>pilih;
	
	switch (pilih)
	{
		case 1 : cout<<"Selamat Anda dinyatakan LULUS";
		break;
		case 2 : cout<<"Maaf Anda belum lulus";
		break;	
		default : cout<<"Angka Yang Anda Masukan Tidak ada";
		break;
	}
	}
	
