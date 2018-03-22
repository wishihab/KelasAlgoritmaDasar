#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int angka;
	
	ulang:
	cout<<"Masukan angka yang anda inginkan : ";
	cin>>angka;
	
	if (angka>0)
		{
			cout<<angka;
			cout<<" Adalah ";
			cout<<"bilangan bulat positif"<<endl;
				{
					if (angka%4==0)
						{
							cout<<"Angka yang anda masukan adalah kelipatan 4";
						}
					else
						{
							cout<<"Angka yang anda masukan bukanlah kelipatan 4";
						}	
				}
		
		
		}
	else if (angka<0)
		{
			cout<<angka;
			cout<<" Adalah ";
			cout<<"bukan bilangan bulat positif"<<endl;
		}
	else
		{
			cout<<"Angka yang anda masukan salah\n";
			goto ulang;
		}
		

	getch();	
}
