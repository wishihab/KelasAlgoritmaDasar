#include <iostream>
#include <conio.h>

using namespace std;

main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE NILAI RATA-RATA BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++
	int tugas, absen, uts, uas, rata;
	string nama;
	
	cout<<"================================================================================\n";
	cout<<"Masukan nama panggilan anda\t : ";
	cin>>nama;
	ulang:
	cout<<"Masukan total absen anda\t : ";
	cin>>absen;
	cout<<"Masukan nilai tugas anda\t : ";
	cin>>tugas;
	cout<<"Masukan nilai UTS\t\t : ";
	cin>>uts;
	cout<<"Masukan nilai UAS\t\t : ";
	cin>>uas;
	cout<<"================================================================================\n";
	
	rata=(absen*0.1)+(tugas*0.5)+(uts*0.2)+(uas*0.2);
	if (rata>100)
		{
			cout<<"MAAF NILAI RATA-RATA ANDA SALAH, SILAHKAN MASUKAN ULANG\n";
			cout<<"================================================================================\n";
			goto ulang;
		}
		// SOURCE CODE NILAI RATA-RATA BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	cout<<nama;
	cout<<" ";
	cout<<"nilai rata-rata anda adalah : ";
	cout<<rata;
	cout<<endl<<endl;
	cout<<"================================================================================\n";
{
	
	if (rata>=85 && rata<=100)
		{
			cout<<"------------------------------GRADE ANDA ADALAH A-------------------------------\n";
			cout<<"================================================================================\n";
		}
	else if (rata>=75 && rata<85)
		{
			cout<<"-----------------------------GRADE ANDA ADALAH B--------------------------------\n";
			cout<<"================================================================================\n";
		}
	else if (rata>60 && rata<75)
		{
			cout<<"-----------------------------GRADE ANDA ADALAH C--------------------------------\n";
			cout<<"================================================================================\n";
		}
		// SOURCE CODE NILAI RATA-RATA BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	else
		{
			cout<<"-----------------------------GRADE ANDA ADALAH D--------------------------------\n";
			cout<<"================================================================================\n";
		}
}
	getch();
	
}
