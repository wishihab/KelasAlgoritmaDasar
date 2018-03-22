#include <iostream>
#include <conio.h>

using namespace std;

main()
{
 // JANGAN DIHAPUS BAGIAN INI
 // SOURCE CODE MENU MAKANAN BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
 // BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++
      int pilih, ang1, ang2, hasil;
      string tanya;

      cout<<"SELAMAT DATANG DIKALKULATOR SEDERHANA INI! "<< endl;
      cout<<"By Muhammad Alwi Shihab | Fasilkom - Teknik Informatika | 2014-81-096"<< endl;
      cout<<"1. Tambah" << endl;
      cout<<"2. Kurang" << endl;
      cout<<"3. Perkalian" << endl;
      cout<<"4. Pembagian" << endl; // SOURCE CODE MENU MAKANAN BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
      lagi: // checkpoint pengulangan
      cout<<"Masukan Perhitungan yang anda inginkan :";
      cin>>pilih;
      if (pilih==1)
      {
                   cout<<"Masukan Nilai Pertama : ";
                   cin>>ang1;
                   cout<<"Masukan Nilai Kedua : ";
                   cin>>ang2;
                   hasil=ang1+ang2;
                   cout<<"Hasil dari tambahan adalah : "<< hasil<< endl<< endl<< endl;
                   
                   }
      else if (pilih==2)
      {
                   cout<<"Masukan Nilai Pertama : ";
                   cin>>ang1;
                   cout<<"Masukan Nilai Kedua : ";
                   cin>>ang2;
                   hasil=ang1-ang2;
                   cout<<"Hasil dari pengurangan adalah : "<< hasil<< endl<< endl<< endl;
                   
                   }
      else if (pilih==3)
      {
                   cout<<"Masukan Nilai Pertama : ";
                   cin>>ang1;
                   cout<<"Masukan Nilai Kedua : ";
                   cin>>ang2;
                   hasil=ang1*ang2;
                   cout<<"Hasil dari perkalian adalah : "<< hasil<< endl<< endl<< endl;

                   }
      else if (pilih==4)
      {
                   cout<<"Masukan Nilai Pertama : ";
                   cin>>ang1;
                   cout<<"Masukan Nilai Kedua : ";
                   cin>>ang2;
                   hasil=ang1/ang2;
                   cout<<"Hasilnya Pembagian adalah : "<< hasil<< endl<< endl<< endl;
                   
                   }  
      else{
      
                cout<<"Maaf Pilihan yang anda inginkan tidak ada!"<< endl;
      }
      cout<<"Ingin Mengulang Perhitungannya? [y/n] : ";
      cin>>tanya;
      if (tanya == "y" )
      {
  		goto lagi;    
      }
      cout<<"Terima kasih telah menggunakan Kalkulator ini";
      getch();
s
}
