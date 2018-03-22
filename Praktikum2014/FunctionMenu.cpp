#include <iostream>

using namespace std;

void menumak()
{
	cout<<"===========================MENU MAKANAN=========================="<< endl;
	cout<<"| PILIH MENU MAKANAN DIBAWAH INI DAN MASUKAN KODE MINUMAN	|"<< endl;
	cout<<"| 1. Sate Kambing				: Rp. 15.000	|"<<endl;
	cout<<"| 2. Sate Ayam					: Rp. 20.000	|"<<endl;
	cout<<"| 3. Nasi Putih					: Rp. 4.000	|"<<endl;
	cout<<"| 4. Nasi Uduk					: Rp. 5.000	|"<<endl;
	cout<<"================================================================="<< endl;

}


void menumin()
{
	cout<<"===========================MENU MINUMAN=========================="<< endl;
	cout<<"PILIH MENU MINUMAN DIBAWAH INI DAN MASUKAN KODE MINUMAN"<< endl;
	cout<<"1. Es Teh Manis					: Rp. 5.000"<<endl;
	cout<<"2. Es Jeruk					: Rp. 5.000"<<endl;
	cout<<"3. Teh Botol					: Rp. 4.000"<<endl;
	cout<<"4. Air Putih					: Rp. 3.000"<<endl;
	cout<<"================================================================="<< endl;
}

int pilihmak()
{
	int x, ha;
	cout<<"Masukan Kode Menu Makanan yang anda inginkan : ";
	cin>>x;
	if(x==1)
	{
		ha=15000;
	}
	else if(x==2)
	{
		ha=20000;
	}
	else if(x==3)
	{
		ha=4000;
	}
	else if(x==4)
	{
		ha=5000;
	}
}

int pilihmin()
{
	int y, hb;
	cout<<"Masukan Kode Menu Minuman yang anda inginakn : ";
	cin>>y;
	if(y==1)
	{
		hb=5000;
	}
	else if(y==2)
	{
		hb=5000;
	}
	else if(y==3)
	{
		hb=4000;
	}
	else if(y==4)
	{
		hb=3000;
	}
}


	
int main()
{
	int hasil, ha, hb;
	
	menumak();
	pilihmak();
	menumin();
	pilihmin();
	
	hasil=ha+hb;
	cout<<"Jumlah Yang Anda Harus Bayar Adalah Rp. "<<hasil<<endl;
}
