#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>

using namespace std;
main()
{
	int i, j, x, y;
	int a[10][10], b[10][10], c[10][10], d[10][10];
	
	cout<<"Masukan Jumlah Batas Baris : ";
	cin>>x;
	cout<<"Masukan Jumlah Batas Kolom : ";
	cin>>y;
		
	// cout<<"Masukan Baris ke-"<<i+1<<" : ";
	// cout<<"Masukan Kolom ke-"<<j+1<<" : ";
	
	// A
	for (i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	// B
	for (i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			cin>>b[i][j];
		}
	}
	
	
	// Tambahan
	for (i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	// Pengurangan
	for (i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	
	// Cout Tambahan dan Pengurang
	for (i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
		cout<<setw(3)<<c[i][j]<<setw(3)<<d[i][j];
		}
		cout<<endl;
	}
	
	getch();
}
