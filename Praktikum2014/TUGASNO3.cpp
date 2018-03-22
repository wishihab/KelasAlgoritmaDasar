#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	
	int berat, tinggi, berat1, berat2, berat3, idealmax, idealmin;
	cout<<"-==============================================================================-";
	cout<<"-========== APLIKASI PENGHITUNG BERAT BADAN IDEAL UNTUK ORANG DEWASA ==========-";
	cout<<"-==============================================================================-";
	ulang:
	cout<<"-========== Masukan tinggi badan anda 	: ";
	cin>>tinggi;
	cout<<"-========== Masukan berat badan anda 	: ";
	cin>>berat;
	cout<<"-==============================================================================-";


	berat1=tinggi-100;
	berat2=berat1*0.1;
	berat3=berat1-berat2;
	
	idealmax=berat3+2;
	idealmin=berat3-2;
	
	if (berat>idealmin && berat<idealmax)
	{
		cout<<"-=========================== BERAT BADAN ANDA IDEAL ===========================-";
		cout<<"-==============================================================================-\n";
		cout<<"-========== Berat badan ideal sempurna 	: "<<berat3<<endl;
		cout<<"-========== Berat ideal maximal anda 	: "<<idealmax<<endl;
		cout<<"-========== Berat ideal minimal anda 	: "<<idealmin<<endl;
		
	}
	else if (berat<idealmin || berat>idealmax)
	{
		cout<<"-======================= BERAT BADAN ANDA KURANG IDEAL ========================-";
		cout<<"-==============================================================================-";
		cout<<"-========== Berat badan ideal sempurna 	: "<<berat3<<endl;
		cout<<"-========== Berat ideal maximal anda 	: "<<idealmax<<endl;
		cout<<"-========== Berat ideal minimal anda 	: "<<idealmin<<endl;
	}

	cout<<"-==============================================================================-";
	getch();
}
