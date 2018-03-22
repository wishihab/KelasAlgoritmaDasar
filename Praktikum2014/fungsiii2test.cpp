#include <iostream>
#include <conio.h>
using namespace std;
int x, y, k;

int findmax()
{
	if (x>y)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}

void printmax()
{

	cout<<"Bilangan terbesar adalah : "<<k;
	
}

main()
{
	cout<<"Masukan Bilangan Pertama : ";
	cin>>x;
	cout<<"Masukan Bilangan Kedua : ";
	cin>>y;
	k = findmax ();
	printmax();
	
	getch();
}

