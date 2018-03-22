#include <iostream>
#include <conio.h>

using namespace std;

main()
{
// JANGAN DIHAPUS BAGIAN INI
// SOURCE CODE FILTER BIOSKOP BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
// BELAJAR ALGORITMA PEMOGRAMAN MENGGUNAKAN DEV C++
	int umur, seat;
	string nama, ulangz;
	
	char bangku;
	
	cout<<"========================================================\n";
	cout<<"SELAMAT DATANG DIAPLIKASI FILTERISASI MASUK BIOSKOP\n";
	cout<<"========================================================\n";
	ulangz:
	cout<<"Masukan Nama Panggilan Anda : ";
	cin>>nama;
	cout<<"Masukan Umur Anda : ";
	cin>>umur;
	
	if (umur>=17)
		{
			cout<<"ANDA DIPERBOLEHKAN MASUK \n";
			cout<<"========================================================\n";
			cout<<"Daftar SEAT A, B, C \n";
			seatback:
			cout<<"SILAHKAN PILIH SEAT YANG ANDA INGINKAN : ";
			cin>>bangku;
			
			if ( bangku=='A' || bangku=='a')
				{
					cout<<"Anda memilih seat Urutan A\n";
					cout<<"========================================================\n";
					cout<<"Daftar nomor seat 1, 2, 3\n";
					st:
					cout<<"Masukan nomor seat yang anda inginkan : ";
					cin>>seat;
					
					if (seat==1)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"1\n";
							goto next;
							
						}
					else if (seat==2)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"2\n";
							goto next;
							
						}
					else if (seat==3)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"3\n";
							goto next;
							
						}
					else
						{
							cout<<"Maaf Seat Yang Anda Inginkan Tidak Ada\n";
							goto st;
						}
				
				} 
				// SOURCE CODE FILTER BIOSKOP BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
			else if ( bangku=='B' || bangku=='b')
				{
					cout<<"Anda memilih seat Urutan B\n";
					cout<<"========================================================\n";
					cout<<"Daftar nomor seat 1, 2, 3\n";
					st2:
					cout<<"Masukan nomor seat yang anda inginkan : ";
					cin>>seat;
					
					if ( seat==1 )
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"1\n";
							goto next;
							
						}
					else if ( seat==2 )
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"2\n";
							goto next;
							
						}
					else if ( seat==3 )
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"3\n";
							goto next;
							
						}
					else
						{
							cout<<"Maaf Seat Yang Anda Inginkan Tidak Ada\n";
							goto st2;
						}
				
				}
				// SOURCE CODE FILTER BIOSKOP BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
				
			else if ( bangku=='C' || bangku=='c')
				{
					cout<<"Anda memilih seat Urutan C\n";
					cout<<"========================================================\n";
					cout<<"Daftar nomor seat 1, 2, 3\n";
					st3:
					cout<<"Masukan nomor seat yang anda inginkan : ";
					
					if (seat==1)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"1\n";
							goto next;
							
						}
					else if (seat==2)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"2\n";
							goto next;
							
						}
					else if (seat==3)
						{
							cout<<"========================================================\n";
							cout<<"Nama : ";
							cout<<nama;
							cout<<endl;
							cout<<"Urutan seat yang anda pilih : ";
							cout<<bangku;
							cout<<endl;
							cout<<"Nomor seat anda : ";
							cout<<"3\n";
							goto next;
							
						}
					else
						{
							cout<<"Maaf Seat Yang Anda Inginkan Tidak Ada\n";
							goto st3;
						}
				
				}
				// SOURCE CODE FILTER BIOSKOP BY MUHAMMAD ALWI SHIHAB FASILKOM14' UEU
			else
				{
					cout<<"Seat yang anda inginkan tidak ada\n";
					goto seatback;
				}
		}
	else
		{
			cout<<"MAAF ANDA TIDAK DIPERBOLEHKAN MENONTON BIOSKOP INI\n";
			goto next;
		}

		next:
		cout<<"========================================================\n";
		cout<<"========================================================\n";
		cout<<"========================================================\n";
		cout<<"Mengulang ? [y/n]";
		cin>>ulangz;
		if (ulangz== "y" || ulangz== "y")
		{
			goto ulangz;
		}
		else
		{
			goto next;
		}	
	
	getch();
}
