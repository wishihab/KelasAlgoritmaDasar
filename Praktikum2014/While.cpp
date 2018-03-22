#include <iostream>


using namespace std;

main()
{
	int i, j;
	for (i=0;i<7;i++){
	
		for (j=0;j<6;j++)
		{
			if (j>i)
			{
				cout<<"*";
			}
			//else if(j<=i){
			//	cout<<" ";
			//}
		}
		cout<<endl;
	}
	
	
	

}



