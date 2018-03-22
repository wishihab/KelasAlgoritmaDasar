#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int harga_tot,menu_mak,menu_min,harga_mak,harga_min;
	
	cout<<"|=======================================|\n";
	cout<<"|Selamat Datang Di Rumah Makan Sederhana|\n";
	cout<<"|=======================================|\n";
	cout<<"Daftar Menu Makanan\n";
	cout<<"1. ayam Goreng  :  Rp. 10000\n";
	cout<<"2. Kentan Goreng:  Rp. 8000\n";
	cout<<"3. Nasi Goreng  :  Rp. 7000\n";
	cout<<"Makan Yang Anda Pesan  :";
	cin>>menu_mak;
	cout<<"|===============================|\n";
	cout<<"Daftar Menu Minuman\n";
	cout<<"1. Soft Drink   :  Rp. 6000\n";
	cout<<"2. Es Teh Manis :  Rp. 3000\n";
	cout<<"3. Es Jeruk     :  Rp. 4000\n";
	cout<<"Makanan Yang Anda Pesan  :";
	cin>>menu_min;
	
	if(menu_mak==1)
	{
		harga_mak=10000;
	}
	else if(menu_mak==2)
	{
		harga_mak=8000;
	}
	else if(menu_mak==3)
	{
		harga_mak=7000;
	}
	
	if(menu_min==1)
	{
		harga_min=6000;
	}
	else if(menu_min==2)
	{
	
	harga_min=3000;
	}
	else if(menu_mak==3)
	{
		harga_min=4000;
	}
	cout<<"|===============================|\n";
	harga_tot=harga_mak+harga_min;
	cout<<"Total Harga Yang Anda Pesan\n";
	cout<<harga_tot;
	
	getch();
}

