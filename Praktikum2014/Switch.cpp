#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int bil;
	cout<<"Masukan sebuah bilangan 1 s/d 5 : ";
	cin>>bil;
	
	switch (bil)
	{
		case 1 : cout<<"Bilangan yang anda masukan adalah SATU";
		break;
		case 2 : cout<<"Bilangan yang anda masukan adalah DUA";
		break;	
		case 3 : cout<<"Bilangan yang anda masukan adalah TIGA";
		break;
		case 4 : cout<<"Bilangan yang anda masukan adalah EMPAT";
		break;
		case 5 : cout<<"Bilangan yang anda masukan adalah LIMA";
		break;
		default : cout<<"BILANGAN YANG ANDA MASUKAN DILUAR BATAS";
		break;
	}
	getch();
}
