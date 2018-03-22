#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int a, b, c, d, e;
	char tanya;
	ulang:
	cout<<"Masukan Angka Pertama	: ";
	cin>>a;
	cout<<"Masukan Angka Kedua	: ";
	cin>>b;
	cout<<"Masukan Angka Ketiga	: ";
	cin>>c;
	cout<<"Masukan Angka Keempat	: ";
	cin>>d;
	cout<<"Masukan Angka Kelima	: ";
	cin>>e;
	cout<<endl;
	
	if (a>=b && a>=c && a>=d && a>=e)
	{
		cout<<"Bilangan Paling Besar : "<<a<<endl;
	}
	else if (b>=a && b>=c && b>=d && b>=e)
	{
		cout<<"Bilangan Paling Besar : "<<b<<endl;
	}
	else if (c>=a && c>=b && c>=d && c>=e)
	{
		cout<<"Bilangan Paling Besar : "<<c<<endl;
	}
	else if (d>=a && d>=b && d>=c && d>=e)
	{
		cout<<"Bilangan Paling Besar : "<<d<<endl;
	}
	else if (e>=a && e>=b && e>=c && e>=d)
	{
		cout<<"Bilangan Paling Besar : "<<e<<endl;
	}
	else
	{
		cout<<"Inputan Error\n";
		goto ulang;
	}
	
	cout<<"Ingin Mengulang ? [Y/N] : ";
	cin>>tanya;
	if (tanya=='Y' || tanya=='y')
	{
		goto ulang;
	}
	
	getch();
}

