#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int harga, pilih_m1, pilih_m2, pilih_m3, pilih_m4 , pilih_mi1, pilih_mi2, pilih_mi3, pilih_mi4, harga_m1, harga_m2, harga_m3, harga_m4, harga_mi1, harga_mi2, harga_mi3, harga_mi4, a, b;
	string tanya;
	
	cout<<"==================MENU MAKANAN====================="<< endl;
	cout<<"PILIH MENU MAKANAN DIBAWAH INI MASUKAN KODE MINUMAN"<< endl;
	cout<<"1. Sate Kambing					: Rp. 15.000"<<endl;
	cout<<"2. Sate Ayam					: Rp. 20.000"<<endl;
	cout<<"3. Nasi Putih					: Rp. 4.000"<<endl;
	cout<<"4. Nasi Uduk					: Rp. 5.000"<<endl;
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_m1;
	
	if (pilih_m1==1)
		{
			cout<<"Masukan jumlah sate kambing yang anda inginkan : ";
			cin>>a;
			harga_m1=a*15000;
			cout<< endl<< endl;
		}
	else if (pilih_m1==2)
		{
			cout<<"Masukan Jumlah sate ayam yang anda inginkan : ";
			cin>>a;
			harga_m1=a*20000;
			cout<< endl<< endl;
		}	
	else if (pilih_m1==3)
		{
			cout<<"Masukan jumlah nasi putih yang anda inginkan : ";
			cin>>a;
			harga_m1=a*4000;
			cout<< endl<< endl;

		}	

	else if (pilih_m1==4)
		{
			cout<<"Masukan jumlah nasi uduk yang anda inginkan : ";
			cin>>a;
			harga_m1=a*5000;
			cout<< endl<< endl;
		}
{
		
	cout<<"Ingin Menambahkan menu makanan? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men1;    
      }
      
      if (tanya == "n" )
      {
		goto minum;
      }

	men1:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_m2;
	
	if (pilih_m2==1)
		{
			cout<<"Masukan jumlah sate kambing yang anda inginkan : ";
			cin>>a;
			harga_m2=a*15000;
			cout<< endl<< endl;
		}
	else if (pilih_m2==2)
		{
			cout<<"Masukan Jumlah sate ayam yang anda inginkan : ";
			cin>>a;
			harga_m2=a*20000;
			cout<< endl<< endl;
		}	
	else if (pilih_m2==3)
		{
			cout<<"Masukan jumlah nasi putih yang anda inginkan : ";
			cin>>a;
			harga_m2=a*4000;
			cout<< endl<< endl;

		}	

	else if (pilih_m2==4)
		{
			cout<<"Masukan jumlah nasi uduk yang anda inginkan : ";
			cin>>a;
			harga_m2=a*5000;
			cout<< endl<< endl;
		}

		
	cout<<"Ingin Menambahkan menu makanan? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men11;    
      }
      
      if (tanya == "n" )
      {
		goto minum;
      }


	men11:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_m3;
	
	if (pilih_m3==1)
		{
			cout<<"Masukan jumlah sate kambing yang anda inginkan : ";
			cin>>a;
			harga_m3=a*15000;
			cout<< endl<< endl;
		}
	else if (pilih_m3==2)
		{
			cout<<"Masukan Jumlah sate ayam yang anda inginkan : ";
			cin>>a;
			harga_m3=a*20000;
			cout<< endl<< endl;
		}	
	else if (pilih_m3==3)
		{
			cout<<"Masukan jumlah nasi putih yang anda inginkan : ";
			cin>>a;
			harga_m3=a*4000;
			cout<< endl<< endl;

		}	

	else if (pilih_m3==4)
		{
			cout<<"Masukan jumlah nasi uduk yang anda inginkan : ";
			cin>>a;
			harga_m3=a*5000;
			cout<< endl<< endl;
		}

		
	cout<<"Ingin Menambahkan menu makanan? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men111;    
      }
      
      if (tanya == "n" )
      {
		goto minum;
      }

	men111:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_m4;
	
	if (pilih_m4==1)
		{
			cout<<"Masukan jumlah sate kambing yang anda inginkan : ";
			cin>>a;
			harga_m4=a*15000;
			cout<< endl<< endl;
		}
	else if (pilih_m4==2)
		{
			cout<<"Masukan Jumlah sate ayam yang anda inginkan : ";
			cin>>a;
			harga_m4=a*20000;
			cout<< endl<< endl;
		}	
	else if (pilih_m4==3)
		{
			cout<<"Masukan jumlah nasi putih yang anda inginkan : ";
			cin>>a;
			harga_m4=a*4000;
			cout<< endl<< endl;

		}	

	else if (pilih_m4==4)
		{
			cout<<"Masukan jumlah nasi uduk yang anda inginkan : ";
			cin>>a;
			harga_m4=a*5000;
			cout<< endl<< endl;
		}

}

{

	cout<< endl<< endl;
	
	minum:
	cout<<"==================MENU MINUMAN====================="<< endl;
	cout<<"PILIH MENU MINUMAN DIBAWAH INI DAN MASUKAN KODE MINUMAN"<< endl;
	cout<<"1. Es Teh Manis					: Rp. 5.000"<<endl;
	cout<<"2. Es Jeruk					: Rp. 5.000"<<endl;
	cout<<"3. Teh Botol					: Rp. 4.000"<<endl;
	cout<<"4. Air Putih					: Rp. 3.000"<<endl;
	men2:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_mi1;
	
	
	
	///// MENU MINUMAN
	
		
	if (pilih_mi1=1)
		{
			cout<<"Masukan jumlah es teh manis yang anda inginkan : ";
			cin>>b;
			harga_mi1=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi1=2)
		{
			cout<<"Masukan jumlah es jeruk yang anda inginkan : ";
			cin>>b;
			harga_mi1=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi1=3)
		{
			cout<<"Masukan jumlah teh botol yang anda inginkan : ";
			cin>>b;
			harga_mi1=b*4000;
			cout<< endl<< endl;
		}
	else if (pilih_mi1=4)
		{
			cout<<"Masukan jumlah air putih yang anda inginkan : ";
			cin>>b;
			harga_mi1=b*3000;
			cout<< endl<< endl;
		}
		

		
	cout<<"Ingin Menambahkan minuman? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men22;    
      }
      if (tanya == "n" )
      {
		goto lanjut;
      }


	men22:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_mi2;
	
	
		
	if (pilih_mi2=1)
		{
			cout<<"Masukan jumlah es teh manis yang anda inginkan : ";
			cin>>b;
			harga_mi2=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi2=2)
		{
			cout<<"Masukan jumlah es jeruk yang anda inginkan : ";
			cin>>b;
			harga_mi2=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi2=3)
		{
			cout<<"Masukan jumlah teh botol yang anda inginkan : ";
			cin>>b;
			harga_mi2=b*4000;
			cout<< endl<< endl;
		}
	else if (pilih_mi2=4)
		{
			cout<<"Masukan jumlah air putih yang anda inginkan : ";
			cin>>b;
			harga_mi2=b*3000;
			cout<< endl<< endl;
		}
		

		
	cout<<"Ingin Menambahkan minuman? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men222;    
      }
      if (tanya == "n" )
      {
		goto lanjut;
      }

	
		men222:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_mi3;
	
	
	
	///// MENU MINUMAN
	
		
	if (pilih_mi3=1)
		{
			cout<<"Masukan jumlah es teh manis yang anda inginkan : ";
			cin>>b;
			harga_mi3=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi3=2)
		{
			cout<<"Masukan jumlah es jeruk yang anda inginkan : ";
			cin>>b;
			harga_mi3=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi3=3)
		{
			cout<<"Masukan jumlah teh botol yang anda inginkan : ";
			cin>>b;
			harga_mi3=b*4000;
			cout<< endl<< endl;
		}
	else if (pilih_mi3=4)
		{
			cout<<"Masukan jumlah air putih yang anda inginkan : ";
			cin>>b;
			harga_mi3=b*3000;
			cout<< endl<< endl;
		}
		
		
		
	cout<<"Ingin Menambahkan minuman? [y/n] : ";
    cin>>tanya;
      if (tanya == "y" )
      {
		goto men2222;    
      }
      if (tanya == "n" )
      {
		goto lanjut;
      }

	
	
	men2222:
	cout<<"Masukan kode makanan pilihan anda : ";
	cin>>pilih_mi4;
	
	
	
	///// MENU MINUMAN
	
		
	if (pilih_mi4=1)
		{
			cout<<"Masukan jumlah es teh manis yang anda inginkan : ";
			cin>>b;
			harga_mi4=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi2=2)
		{
			cout<<"Masukan jumlah es jeruk yang anda inginkan : ";
			cin>>b;
			harga_mi4=b*5000;
			cout<< endl<< endl;
		}
	else if (pilih_mi4=3)
		{
			cout<<"Masukan jumlah teh botol yang anda inginkan : ";
			cin>>b;
			harga_mi4=b*4000;
			cout<< endl<< endl;
		}
	else if (pilih_mi4=4)
		{
			cout<<"Masukan jumlah air putih yang anda inginkan : ";
			cin>>b;
			harga_mi4=b*3000;
			cout<< endl<< endl;
		}
		
}
	
	
	lanjut:
	cout<<"====================================="<< endl;
	harga=harga_m1+harga_m2+harga_m3+harga_m4+harga_mi1+harga_mi2+harga_mi3+harga_mi4;
	cout<<"TOTAL HARGA MAKANAN DAN MINUM YANG ANDA PESAN ADALAH : "<< harga;
	
	cout<<endl<<endl;
	getch();
}	
