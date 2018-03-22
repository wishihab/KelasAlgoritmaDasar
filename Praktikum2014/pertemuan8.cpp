#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void samadengan() /*definisi fungsi garis */

{
	int i;
	for (i=0;i<59;i++)
	{
	cout<<"=";
	}
	cout<<endl;
}

main()

{
	system ("cls"); /*Hapus Layar*/
	samadengan(); /*panggil fungsi Garis */
	cout<<"Selamat Belajar Algoritma dan Pemograman dengan C++ \n";
	cout<<"Yakinlah Anda Pasti Bisa \n";
	samadengan();
	cout<<"Program C++ memang sangat mudah \n";
	samadengan();
	
	getch();
}


