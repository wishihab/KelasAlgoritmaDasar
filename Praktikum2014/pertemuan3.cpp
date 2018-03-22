#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	
	float harga, pilih_m, pilih_mi, harga_m ,harga_mi, a, b, totmak, totmi, diskon;
	
	cout<<"|==================MENU MAKANAN===============================|\n";
	cout<<"|=====PILIH MENU MAKANAN DIBAWAH INI MASUKAN KODE MINUMAN=====|\n";
	cout<<"|=====1. Sate Kambing			  : Rp. 15.000-, =====|\n";
	cout<<"|=====2. Sate Ayam			  : Rp. 20.000-, =====|\n";
	cout<<"|=====3. Nasi Putih			  : Rp. 4.000-,  =====|\n";
	cout<<"|=====4. Nasi Uduk			  : Rp. 5.000-.  =====|\n";
	cout<<"|=============================================================|\n";	
	ulangmakan:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_m;
	
	if (pilih_m==1)
		{
			cout<<"Masukan jumlah sate kambing yang anda inginkan : ";
			cin>>a;
			harga_m=a*15000;
				if (a>3)
					{
						totmak=harga_m*0.05;
					}
				else
					{
						totmak=0;
					}
					
			cout<< endl<< endl;
		
		}
	else if (pilih_m==2)
		{
			cout<<"Masukan Jumlah sate ayam yang anda inginkan : ";
			cin>>a;
			harga_m=a*20000;
				if (a>3)
					{
						totmak=harga_m*0.05;
					}
				else
					{
						totmak=0;
					}
			cout<< endl<< endl;
		}	
	else if (pilih_m==3)
		{
			cout<<"Masukan jumlah nasi putih yang anda inginkan : ";
			cin>>a;
			harga_m=a*4000;
				if (a>3)
					{
						totmak=harga_m*0.05;
					}
				else
					{
						totmak=0;
					}
			
			cout<< endl<< endl;

		}	

	else if (pilih_m==4)
		{
			cout<<"Masukan jumlah nasi uduk yang anda inginkan : ";
			cin>>a;
			harga_m=a*5000;
				if (a>3)
					{
						totmak=harga_m*0.05;
					}
				else
					{
						totmak=0;
					}
			cout<< endl<< endl;
		}
	else
	{
		cout<<"KODE MAKANAN YANG ANDA MASUKAN TIDAK ADA\n";
		goto ulangmakan;
	}
	cout<< endl<< endl;
	
	
	cout<<"|==================MENU MINUMAN===============================|\n";
	cout<<"|===PILIH MENU MINUMAN DIBAWAH INI DAN MASUKAN KODE MINUMAN===|\n";
	cout<<"|======1. Es Teh Manis			   : Rp. 5.000-,======|\n";
	cout<<"|======2. Es Jeruk			   : Rp. 5.000-,======|\n";
	cout<<"|======3. Teh Botol			   : Rp. 4.000-,======|\n";
	cout<<"|======4. Air Putih			   : Rp. 3.000-,======|\n";
	cout<<"|=============================================================|\n";	
	ulangminum:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_mi;
	
	
	
	///// MENU MINUMAN
	
		
	if (pilih_mi=1)
		{
			cout<<"Masukan jumlah es teh manis yang anda inginkan : ";
			cin>>b;
			harga_mi=b*5000;
				if (b>3)
					{
						totmi=harga_mi*0.05;
					}
				else
					{
						totmi=0;
					}
			
			cout<< endl<< endl;
		}
	else if (pilih_mi=2)
		{
			cout<<"Masukan jumlah es jeruk yang anda inginkan : ";
			cin>>b;
			harga_mi=b*5000;
				if (b>3)
					{
						totmi=harga_mi*0.05;
					}
				else
					{
						totmi=0;
					}
			
			cout<< endl<< endl;
		}
	else if (pilih_mi=3)
		{
			cout<<"Masukan jumlah teh botol yang anda inginkan : ";
			cin>>b;
			harga_mi=b*4000;
				if (b>3)
					{
						totmi=harga_mi*0.05;
					}
				else
					{
						totmi=0;
					}
			
			cout<< endl<< endl;
		}
	else if (pilih_mi=4)
		{
			cout<<"Masukan jumlah air putih yang anda inginkan : ";
			cin>>b;
			harga_mi=b*3000;
				if (b>3)
					{
						totmi=harga_mi*0.05;
					}
				else
					{
						totmi=0;
					}
			cout<< endl<< endl;
		}
	else
	{
		cout<<"KODE MINUMAN YANG ANDA MASUKAN TIDAK ADA\n";
		goto ulangminum;
	}
{	
	cout<< endl<< endl;
	
	cout<<"|=============================================================|\n";
	diskon=totmak+totmi;
	cout<<"Diskon Yang Anda Dapatkan : "<<diskon;
	harga=harga_m+harga_mi-totmak-totmi;
	cout<<endl;
	cout<<"Total Semua Harga : "<< harga;
	cout<<endl<<endl<<endl<<endl<<endl;
	
	cout<<"|-================TERIMA KASIH TELAH BERKUNJUNG================-|\n";
	cout<<"|-------------------------- Alamat -----------------------------|\n";
	cout<<"|-----------------RUMAH MAKAN - WARUNG TEGAL--------------------|\n";
	cout<<"|--------Jl. Kebun Jeruk, Jakarta Barat Blok E No. 41-42--------|\n";
	cout<<"|--------------------HUB : 021-783 268 628----------------------|\n";
	cout<<"|-------------------MAIL : warteg@rumahmakan.gov----------------|\n";
	cout<<"|---------------------------------------------------------------|";
	getch();
}
}
