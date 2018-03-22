#include <iostream>


using namespace std;

int main()
{
	

	char NIM[3][10];
	char nama [3][50];
	float nilai[3];
	
	for (int i=0;i<3;i++)
	
	{
		cout<<"Nama : ";
		cin.getline (nama[i],50);
		cout<<"NIM : ";
		cin.getline (NIM[i],10);
		cout<<"Nilai : ";
		cin>>nilai[i];
		cin.ignore(); // ignore enter
	}

		for (int i=0; i<3; i++)
		{
			cout<<"Namanya Adalah : "<<nama[i];
			cout<<endl;
			
		}
}
