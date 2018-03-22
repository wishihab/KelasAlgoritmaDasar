#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE WELCOME MESSAGE SHUTDOWN BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++	
		int pilih;

		cout<<"|==============================================================================|\n";
		cout<<"|================================SELAMAT DATANG================================|\n";
		cout<<"|==================MASUKAN ANGKA UNTUK MEMBUKA KUNCI ANDA======================|\n";
		cout<<"|============================ Password : ****** ===============================|\n";
		cout<<"|==============================================================================|\n";
		cout<<"MASUKAN PASSWORD : ";
		cin>>pilih;
		
		
		if (pilih=241198)
			{
			goto end;
			
			}
		else
			{
			cout<<"Shutdown Dalam Waktu 10Detik Akan Dilaksanakan..............................\n";
			system("shutdown -s -f -t 10");

			}
			{
				goto shut;
			}
			// SOURCE CODE WELCOME MESSAGE SHUTDOWN BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
		shut:
		cout<<"|====================MAAAF PASSWORD YANG ANDA MASUKAN SALAH====================|\n";
		cout<<"|============================ SHUTDOWN IN PROCESS =============================|\n";
		
		getch();
		
		end:
		cout<<"|======================== ASALAMUALAIKUM WR WB ...... =========================|\n";
		cout<<"|==================== SELAMAT DATANG MUHAMMAD ALWI SHIHAB =====================|\n";
		cout<<"|======== JANGAN LUPA AWALI HIDUPMU DENGAN SEMANGAT DAN SENYUM BAHAGIA ========|\n";
		
		getch();
}

