#include <iostream>
#include <conio.h>

using namespace std;

void terimakasih()
{
	cout<<"-===============================================================-\n";
	cout<<"-=================TERIMA KASIH TELAH BERKUNJUNG=================-\n";
	cout<<"-========================= DI RUMAH MAKAN ======================-\n";
	cout<<"-================== WARUNG TEGAL JAKARTA PUSAT =================-\n";
}
void menumak()
{
	cout<<"===========================MENU MAKANAN=========================="<< endl;
	cout<<"| PILIH MENU MAKANAN DIBAWAH INI DAN MASUKAN KODE MINUMAN	|"<< endl;
	cout<<"| 1. Sate Kambing				: Rp. 15.000	|"<<endl;
	cout<<"| 2. Sate Ayam					: Rp. 20.000	|"<<endl;
	cout<<"| 3. Nasi Putih					: Rp. 4.000	|"<<endl;
	cout<<"| 4. Nasi Uduk					: Rp. 5.000	|"<<endl;
	cout<<"================================================================="<< endl;
	cout<<"===========================MENU MINUMAN=========================="<< endl;
	cout<<"PILIH MENU MINUMAN DIBAWAH INI DAN MASUKAN KODE MINUMAN"<< endl;
	cout<<"1. Es Teh Manis					: Rp. 5.000"<<endl;
	cout<<"2. Es Jeruk					: Rp. 5.000"<<endl;
	cout<<"3. Teh Botol					: Rp. 4.000"<<endl;
	cout<<"4. Air Putih					: Rp. 3.000"<<endl;
	cout<<"================================================================="<< endl;
}

void harga(int hasil)
{
     cout<<"Harga Total Yang Harus Dibayar Rp. "<<hasil<<endl ;
}

int perhitungan(int a, int b)
{
    int hasil = a+b;
    return hasil; 
}

int main ()
{
	int mak[10], min[10], totalnya, x;
	
	cout<<"Masukan Berapa Porsi Makanan dan Minuman yg anda inginkan : ";
	cin>>x;
	
	menumak();
	
	for (int i=1;i<=x;i++)
	{
	cout<<"-============================================-\n";
	cout<<"-==Masukan Kode Makanan ke-"<<i<<" : ";
    cin>> mak[x];
    cout<<"-==Masukan Kode Makanan ke-"<<i<<" : ";
    cin>> min[x];
    cout<<"-============================================-\n";
    if(mak[x]==1)
		mak[x]=15000;
	else if(mak[x]==2)
		mak[x]=20000;
	else if(mak[x]==3)
		mak[x]=4000;
	else if(mak[x]==4)
		mak[x]=5000;
	else
		cout<<"Pilihan yang anda masukan tidak ada";
		
		 
	if(min[x]==1)
		min[x]=5000;
	else if(min[x]==2)
		min[x]=5000;
	else if(min[x]==3)
		min[x]=4000;
	else if(min[x]==4)
		min[x]=3000;
	else
		cout<<"Pilihan yang anda masukan tidak ada";
	
		totalnya=perhitungan(mak[x],min[x]);
    	harga(totalnya);
    	
}
terimakasih();
getch();
}


