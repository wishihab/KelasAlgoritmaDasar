
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int x, i,j;
	
	cout<<"Masukan Angka : ";
	cin>>x;
	
	for (int i=x;i>0;i--)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<" *";
		}	
		cout<<endl;
	}
	
	getch();
}
