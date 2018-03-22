#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int a[11] = {1,3,5,7,9,11,13,15,17,19,21};
	int total=0;
	
	for (int i=0; i<11; i++)
	{
		total+=a[i];
	}
	cout<<"Total Seluruh : "<<total;
	getch();
	
}
