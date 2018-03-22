#include<iostream>

using namespace std;

float m[10][10];

void menu()
{
	
	cout<<"-=================================================-\n";
	cout<<"-============ Matriks - Pilih Ordonya ============-\n";
	cout<<"-=================================================-\n";
	cout<<"1.Untuk ordo 2x2\n";
	cout<<"2.Untuk ordo 3x3\n";	
}

int perkalian(int x)
{
	float p[10][10];
	int a;
	for (int i=0;i<=x;i++)
	{      
		for (int j=0;j<=x;j++)
		{          
			p[i][j]=0;          
			
		for (int k=0;k<=x;k++)
			{              
				a=m[i][k]*m[k][j];              
				p[i][j]=p[i][j]+a;          
			}      
		}  
	}
	
	for(int i=0; i<x+1; i++)
	{
		for(int j=0; j<x+1; j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}

int penjumlahan(int x)
{
	float p[10][10];
	for(int i=0; i<x+1; i++)
	{	
		for(int j=0; j<x+1; j++)
		{
			p[i][j]=m[i][j]+m[j][i];
		}
	}
	for(int i=0; i<x+1; i++)
	{
		for(int j=0; j<x+1; j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}
}

int transpos(int x)
{
	cout<<endl<<"Hasil Transpos :"<<endl;
	for(int i=0; i<x+1; i++)
	{
		for(int j=0; j<x+1; j++)
		{
			cout<<m[j][i]<<" ";
		}
		cout<<endl;
	}
}

int det2()
{
	int det;
	det = m[0][0]*m[1][1]-m[1][0]*m[0][1];
	return det;
}

int det3()
{
	int det;
	int a=m[0][0];
	int b=m[0][1];
	int c=m[0][2];
	double C1,C2,C3;
	C1=m[1][1]*m[2][2]-m[1][2]*m[2][1];
	C2=(m[1][0]*m[2][2]-m[2][0]*m[1][2])*-1;
	C3=m[1][0]*m[2][1]-m[2][0]*m[1][1];
	det=a*C1+b*C2+c*C3;
	return det;
}
	
int invers(int x)
{
	int a;
	cout<<"Hasil Invers : ";
	if (x==1)
	{
		a=det2();
		for(int i=0; i<x+1; i++)
		{
			for(int j=0; j<x+1; j++)
			{
				cout<<m[j][i]/a<<" ";
			}
			cout<<endl;
		}
	}
	else if (x==2)
	{
		a=det3();
		for(int i=0; i<x+1; i++)
		{
			for(int j=0; j<x+1; j++)
			{
				cout<<m[j][i]/a<<" ";
			}
			cout<<endl;
		}
	}
}

int menuordo(int a)
{
	cout<<"-=================================================-\n";
	cout<<"-============ Program Opreasi Matriks "<<a+1<<"x"<<a+1<<" ============-\n";
	cout<<"-=================================================-\n";
	cout<<"1. Perkalian\n";
	cout<<"2. Penjumlahan\n";
	cout<<"3. Transpos\n";
	cout<<"4. Invers\n";
	
}

int ordo(int x)
{
	int pilih;
	
	for(int i=0; i<x+1; i++)
	{
		for(int j=0; j<x+1; j++)
		{
			cout<<"masukkan ordo ke"<<i+1<<"."<<j+1<<": ";
			cin>>m[i][j];
		}
	}
	cout<<endl<<"Matriks :"<<endl;
	for(int i=0; i<x+1; i++)
	{
		for(int j=0; j<x+1; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	menuordo(x);
	cout<<"Masukkan pilihan anda : ";
	cin>>pilih;
	if(pilih==1)
	{
		perkalian(x);
	}
	else if (pilih==2)
	{
		penjumlahan(x);
	}
	else if(pilih==3)
	{
		transpos(x);
	}
	else if(pilih==4)
	{
		invers(x);
	}
}

main(){
	int pilih;
	menu();
	cout<<"Masukkan pilihan : ";
	cin>>pilih;
	cout<<endl;
	ordo(pilih);
}
