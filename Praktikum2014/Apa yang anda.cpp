#include <iostream>
#include <conio.h>

using namespace std;
main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE V1 BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++
	
	string a, b, c, tanya;
	ulang:
	
	cout<<"Masukan nama ayah anda: ";
	cin>>a;
	cout<<"Masukan nama ibu anda: ";
	cin>>b;
	cout<<"Masukan nama anda ";
	cin>>c;
	
	
	
	cout<<"-=============";
	cout<<"-=";
// SOURCE CODE V1 BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
	
	cout<<"Ingin mengulang jawaban ? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
         goto ulang;    
      }
      
      if (tanya == "n" )
      {
                goto end;
	}
	
	end:
      getch();
      
}
