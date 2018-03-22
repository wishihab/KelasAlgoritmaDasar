#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int n, ganjil, total, i;
	
	cout<<"Masukan Nilai N : ";
	cin>>n;
	ganjil=0;
	
	for (i=1;i<n;i+=2)
	{
		if (i%3==0)
		{
			total=ganjil+1;
		}
		else
		{
			total=ganjil+0;
		}
		cout<<i;
		cout<<" ";
		cout<<total;
	}
	

}
