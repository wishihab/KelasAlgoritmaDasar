#include <iostream>
#include <conio.h>

using namespace std;

main()
{

	int i, j, k;
	for (i=0; i>=0;i++)
	{
		for(k=5;k>=0;k--)
		cout<<"*";
	}
	for(i=5;i>=0;i--)
    {
        for(j=0;j<5-i;j++)
        cout<<" ";
        for(j=0;j<2*i-1;j++)
        {
           cout<<"*";
        }
        cout<<"\n";
   
}
	
}



