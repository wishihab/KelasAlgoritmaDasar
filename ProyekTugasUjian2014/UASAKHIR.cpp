//TUGAS ARRAY
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
   // system("color f4");//warna pada saat running
   back:// checkpoint untuk mengembalikan proses ke awal
   system("cls");// menghapus layar proses pengurutan sebelumnya
   char x, z;
   int a[10];// array masukan batas 12 angka
   int i, j;
   a[0]=100;
   a[1]=1;
   a[2]=8;
   a[3]=9;
   a[4]=50;
   a[5]=75;
   a[6]=2;
   a[7]=4;
   a[8]=99;
   a[9]=4;
   
   
   

   for(i=0; i<9; i++)
   {
       for(j=i+1; j<10; j++)
      {
          if(a[i]<a[j])
         {
             z = a[i];
            a[i] = a[j];
            a[j] = z;
         }
	  }
   }
   
   // outpun pengurutan
   cout<<"\nUrutan = "<<endl;
   cout<<endl;
   for(i=0; i<10; i++)
   {
       cout<<a[i]<<" ";
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
