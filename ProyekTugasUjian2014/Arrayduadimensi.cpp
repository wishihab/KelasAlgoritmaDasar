#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
int i,s;
char nama[5][20];
float nilai1[5];
float nilai2[5];
double hasil[5];

cout<<"Masukkan jumlah siswa: ";
cin>>s;

for(i=1;i<=s;i++)
{
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : "; cin>>nama[i];
cout<<"Nilai Teori  : "; cin>>nilai1[i];
cout<<"Nilai Praktek : "; cin>>nilai2[i];
cout<<endl;
}
cout<<"--------------------------------"<<endl;
cout<<" No | Nama Siswa | Nilai teori |"<<endl;
cout<<"--------------------------------"<<endl;

for(i=1;i<=s;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
cout<<setprecision(2)<<""<<nilai1[i];
cout<<setprecision(4)<<"          "<<nilai2[i];

}

cout<<"--------------------------------------------------------";
cout<<"-------"<<endl;
getch();

}
