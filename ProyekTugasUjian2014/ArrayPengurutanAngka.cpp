//TUGAS ARRAY
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void garis ()//memanggil garis 
{
     cout<<"|-------------------------------------------|\n";
     }
main()
{
   // system("color f4");//warna pada saat running
   back:// checkpoint untuk mengembalikan proses ke awal
   system("cls");// menghapus layar proses pengurutan sebelumnya
   char x, z;
   int data[12];// array masukan batas 12 angka
   int i, j;
   cout<<"|-------------------------------------------|\n";
   cout<<"-Algoritma Array Pengurutan Angka-\n\n";

   // proses masukan angka
   for(i=0; i<12; i++)
   {
      cout<<"Masukan nilai "<<(i+1)<<" untuk diurutkan = ";
      cin>>data[i];
   }
   garis();// memanggil void garis yang saudah dibuat
   cout<<"Data yang belum diurutkan = "<<endl;
   cout<<endl;
   for(i=0; i<12; i++)
   {
       cout<<data[i]<<" ";
   }
   cout<<endl;

   for(i=0; i<11; i++)
   {
       for(j=i+1; j<12; j++)
      {
          if(data[i]>data[j])
         {
             z = data[i];
            data[i] = data[j];
            data[j] = z;
         }
	  }
   }
   
   garis();
   // outpun pengurutan
   cout<<"\nData setellah diurutkan = "<<endl;
   cout<<endl;
   for(i=0; i<12; i++)
   {
       cout<<data[i]<<" ";
   }
   cout<<endl;
   garis();
 
   	// proses pengulangan aplikasi
   	
	cout<<"Apakah anda ingin mengulang [Y/N] ? ";
   	cin>>z;
	if (z=='Y'||z=='y')
   	{
   		goto back;
	}
	else
   cout<<"\nTerima kasih telah menggunakan aplikasi sederhana ini\n";
   cout<<"By Muhammad Alwi Shihab | Fasilkom`14 - TI | Esa Unggul\n";
   getch();
}
