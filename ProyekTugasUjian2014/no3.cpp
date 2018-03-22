#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main()
{
 
	int nomcom,dur,tot,pot;
	char nama[20];
	char repeat;
	do
	{
	cout <<"-====================Selama Datang============================- \n";
	cout <<"Number Computer		: ";
	cin >> nomcom;
	cout <<"Masukan Nama Pengguna	: ";
	cin >>nama;
	cout <<"Lama Pamakaian <jam>	: ";
	cin >>dur;
	cout <<"-===========================1000/Jam==========================- \n";
	
	if (dur<=5)
	{
		pot = 0 ;
	}
	
	if (dur>5)
	{
		pot = dur * 1000 * 7.5/100 ;
		tot = dur * 1000 - pot;
	}
	else
	{
		tot = dur * 1000;
	}
	cout <<"-=============================================================- \n";
	cout <<"\nNumber Computer		: "<<nomcom;
	cout <<"\nNama Pengguna		: "<<nama;
	cout <<"\nLama Pemakaian (jam)	: "<<dur;
	cout <<"\nPotongan Harga		: "<<pot;
	cout <<"\nTotal Harga		: "<<tot;
	cout <<"\n-===========================================================- \n";
	cout<<"Apakah anda ingin mengulang [Y/T]? "<<endl;
	cin>>repeat;
	system("pause");
	system ("cls");
	}
	
	while (repeat== 'Y' || repeat== 'y');
	getch ();
}
