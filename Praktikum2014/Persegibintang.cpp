#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int x, i,j;
	
	cout<<"Masukan Angka : ";
	cin>>x;
	
	for (int i=0;i<x;i++)
	{
		for (int j=1;j<=x;j++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
	
	getch();
}
