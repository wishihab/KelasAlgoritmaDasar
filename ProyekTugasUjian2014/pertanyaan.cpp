#include <iostream>
#include "garis.cpp"
#include "clear.cpp"
using namespace std;

void pertanyaan()
{
	
	char j;
	
	cout<<"Pertanyaan Pertama :\n";
	cout<<"Siapa nama presiden pertama Indoneisa ?\n";
	cout<<"a. Ir.Soekarno | b. BungHatta | c. Alwi Shihab | d. Salah semua\n";
	jaw:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='a' || j=='A')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='b' || j=='B' || j=='c' || j=='C' || j=='d' || j=='D')
	{
		cout<<"Jawaban Anda Hampir Benar\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!";
		goto jaw;
	}
	garis();
	cout<<endl;
	
	cout<<"Pertanyaan Kedua :\n";
	cout<<"Siapa nama guru algoritma laki-laki diEsa Unggul ?\n";
	cout<<"a. Pak Bambang | b. Ibu Riya | c. Pak Alwi | d. Salah semua\n";
	jaw1:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='a' || j=='A')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='b' || j=='B' || j=='c' || j=='C' || j=='d' || j=='D')
	{
		cout<<"Jawaban Anda Hampir Benar\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw1;
	}
	garis();
	clear();

	cout<<"Pertanyaan Ketiga :\n";
	cout<<"Apakah saya ganteng ?\n";
	cout<<"a. Ya | b. Tidak | c. Hampir | d. Salah semua\n";
	jaw2:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='c' || j=='C')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='b' || j=='B' || j=='A' || j=='A' || j=='d' || j=='D')
	{
		cout<<"Jawaban Anda Hampir Benar\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw2;
	}
	garis();
	clear();

	cout<<"Pertanyaan Keempat :\n";
	cout<<"Ada anak ayam 10 mati satu tinggal ?\n";
	cout<<"a. satu | b. sembilan | c. sepuluh | d. Salah semua\n";
	jaw3:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='b' || j=='B')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='a' || j=='A' || j=='c' || j=='C' || j=='d' || j=='D')
	{
		cout<<"Jawaban Anda Hampir Benar\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw3;
	}
}
	
