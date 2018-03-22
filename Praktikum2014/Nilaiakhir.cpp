#include <iostream>
#include <conio.h>

using namespace std;

main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE NILAI AKHIR BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++	
	int tugas, uas, uts;
	string tanya;
	ulang:
	cout<<"|=================================================|\n";
	cout<<"|============PENGHITUNG NILAI AKHIR===============|\n";
	cout<<"|======== Masukan Nilai Tugas Anda : ";
	cin>>tugas;
	cout<<"|=================================================|\n";
	cout<<"|======== Masukan Nilai UAS : ";
	cin>>uas;
	cout<<"|=================================================|\n";
	cout<<"|======== Masukan Nilai UTS : ";
	cin>>uts;
	cout<<"|=================================================|\n";
	// SOURCE CODE NILAI AKHIR BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	if (tugas>70 && uas>=75 && uts>=80)
		{
			cout<<"|=================================================|\n";
			cout<<"==========Selamat Anda Dinyatakan Lulus===========|\n";
			cout<<"|=================================================|\n";
		}
	else if (tugas<70 && uas<75 && uts<80)
		{
			cout<<"|=================================================|\n";
			cout<<"==============Maaf Anda Belum Lulus===============|\n";
			cout<<"|=================================================|\n";
		}
	
	cout<<"Ingin Mengulang Perhitungannya? [y/n] : "<< endl;
    cin>>tanya;
      
	if (tanya == "y" )
      {
		goto ulang;    
      }
      // SOURCE CODE NILAI AKHIR BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
    if (tanya == "n" )
      {
		goto end;
      }
      end:
    getch();
}


