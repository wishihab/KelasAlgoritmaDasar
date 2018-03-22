#include <iostream>
#include <conio.h>
using namespace std;

main()

{
	int x, y, z;
	
	cout<<"Masukan Angka Pertama	: ";
	cin>>x;
	cout<<"Masukan Angka Kedua	: ";
	cin>>y;
	cout<<"Masukan Angka Ketiga	: ";
	cin>>z;
	cout<<endl;
	
	cout<<"Mengurutkan : ";
	if (x>y && x>z )
		{
			if (y>z)
			{
				cout<<z; cout<<", ";
				cout<<y; cout<<", ";
				cout<<x; cout<<". ";
			}
			else
			{
				cout<<y; cout<<", ";
				cout<<z; cout<<", ";
				cout<<x; cout<<". ";
			}
		}
	else if (y>x && y>z)
		{
			if (x>z)
			{
				cout<<z; cout<<", ";
				cout<<x; cout<<", ";
				cout<<y; cout<<". ";
			}
			else
			{
				cout<<x; cout<<", ";
				cout<<z; cout<<", ";
				cout<<y; cout<<". ";
			}
		}
	else if (z>x && z>y)
		{
			if (x>y)
			{
				cout<<y; cout<<", ";
				cout<<x; cout<<", ";
				cout<<z; cout<<". ";
			}
			else
			{
				cout<<x; cout<<", ";
				cout<<y; cout<<", ";
				cout<<z; cout<<". ";
			}
		}
	else if (x=y=z)
		{
				cout<<x; cout<<", ";
				cout<<y; cout<<", ";
				cout<<z; cout<<". ";
				cout<<" Angka yang anda masukan sama semua!";
		}
	else
		{
			cout<<"MAAF ANGKA MASUKAN MAKSUD LO!!!!";
		}
	getch();
}

