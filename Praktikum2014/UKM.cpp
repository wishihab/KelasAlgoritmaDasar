#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE GAJI BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++
	int jk, gajimur, gajigol, gatot, galemur, lembur;
	char nama[25];
	char gol;
	
	cout<<"Masukan Nama Anda : ";
	cin.getline (nama,25);
	
	gm:
	cout<<"Masukan Umur Anda : ";
	cin>>gajimur;
	if (gajimur>20 && gajimur<=30)
		{
		gajimur=5000000;
		}
		
	else if (gajimur>30 && gajimur<=40)
		{
		gajimur=7000000;
		}
	else if (gajimur>40 && gajimur<=70) // batas umur 60 tahun
		{
		gajimur=10000000;
		}
	else if (gajimur>70)
		{
			cout<<"MAAF UMUR ANDA TIDAK VALID"<< endl;
		
			goto gm;
		}
		// SOURCE CODE GAJI BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	goll:		
	cout<<"Masukan Golongan anda : ";
	cin>>gol;
	if (gol=='A' || gol=='a')
		{
			gajigol=5000000;
		}
	else if (gol=='B' || gol=='b')
		{
			gajigol=7000000;
		}	
	else if (gol=='C' || gol=='c')
		{
			gajigol=10000000;
		}
	else
		{
			cout<<"Maaf Golongan yang anda masukan tidak ada";
			goto goll;
		}
		
	jam:
	cout<<"Masukan total, jam kerja anda : ";
	cin>>jk;
	if (jk>70)
		{
			lembur=jk-70;
			galemur=lembur*200000;
		}
	else if(jk<=70 && jk>=60) 
		{
			galemur=0;
		}
		// SOURCE CODE GAJI BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	else
		{
			cout<<"MAAF JAM KERJA ANDA TIDAK MASUK KEBATAS NORMAL";
		}
	
	cout<<"|=====================================================|\n";
	cout<<"|-=============Inilah Rincian Gaji anda==============-|\n";
	cout<<"|-==========Gaji umur anda 		: Rp. ";
	cout<<gajimur<< endl;
	cout<<"|-==========Gaji golongan		: Rp. ";
	cout<<gajigol<< endl;
	cout<<"|-==========Gaji lembur			: Rp. ";
	cout<<galemur<< endl;
	cout<<"|=====================================================|\n";
	cout<<"|-==========Gaji Total anda 		: Rp. ";
	gatot=gajimur+gajigol+galemur;
	cout<<gatot;
	
	getch();
}
