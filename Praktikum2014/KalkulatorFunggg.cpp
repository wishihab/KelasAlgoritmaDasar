#include <iostream>
#include <conio.h>
using namespace std;

int x, y, a, hasil;
void menunya()
{
	cout<<"SELAMAT DATANG DIKALKULATOR SEDERHANA INI! "<< endl;
    cout<<"By Muhammad Alwi Shihab | Fasilkom - Teknik Informatika | 2014-81-096"<< endl;
    cout<<"1. Tambah\n";
    cout<<"2. Kurang\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
}

void input()
{
	cout<<"Masukan Angka Pertama : ";
	cin>>x;
	cout<<"Masukan Angka Kedua : ";
	cin>>y;
}

int seleksi(int a)
{
	if (a==1)
	{
		input();
		hasil=x+y;
		cout<<"Hasilnya Adalah  "<<hasil;
		
	}
	else if (a==2)
	{
		input();
		hasil=x-y;
		cout<<"Hasilnya Adalah "<<hasil;
	}
	else if (a==3)
	{
		input();
		hasil=x*y;
		cout<<"Hasilnya Adalah "<<hasil;
	}
	else if (a==4)
	{
		input();
		hasil=x/y;
		cout<<"Hasilnya Adalah "<<hasil;
	}
	else
	{
		cout<<"Pilih Salah\n";
	}
}

main()
{
	int lih;
	
	menunya();
	cout<<"Masukan Pilihan Anda : ";
	cin>>lih;
	seleksi(lih);
	
	
	
	getch();
	
}
