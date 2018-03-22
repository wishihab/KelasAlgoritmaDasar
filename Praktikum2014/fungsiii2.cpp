#include <iostream>
#include <conio.h>
using namespace std;

int findmax (int n1, int n2)
{
	if (n1>n2)
	{
		return (n1);
	}
	else
	{
		return (n2);
	}
}

void printmax(int m)
{
	cout<<"Bilangan terbesar adalah : "<<m;
	
}

main()
{
	int x, y, k;
	cout<<"Masukan Bilangan Pertama : ";
	cin>>x;
	cout<<"Masukan Bilangan Kedua : ";
	cin>>y;
	k = findmax (x,y);
	printmax(k);
	
	getch();
}

