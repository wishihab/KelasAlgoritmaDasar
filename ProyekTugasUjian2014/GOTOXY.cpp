#include <iostream>
using namespace std;

void gotoxy()
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

main()
{
	string z;
	
	gotoxy(5,5);cout<<"Masukan : ";
	cin>>z;
}
