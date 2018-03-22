#include <iostream>
#include "clear.cpp"
#include "garis."
using namespace std;

void mat()
{
	
	char j;
	
	cout<<"Pertanyaan Matematika Pertama :\n";
	cout<<"10+10+10 ?\n";
	cout<<"a. 45 | b. 100 | c. 30 | d. 56\n";
	jaw:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='c' || j=='C')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='b' || j=='B' || j=='a' || j=='A' || j=='d' || j=='D')
	{
		cout<<"Jawaban Salah!! \n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!";
		goto jaw;
	}
	garis();
	cout<<endl;
	
	cout<<"Pertanyaan Matematika Kedua :\n";
	cout<<"10x100-100+10 ?\n";
	cout<<"a. 950 | b. 910 | c. 900 | d. Salah semua\n";
	jaw1:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='b' || j=='B')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='a' || j=='A' || j=='c' || j=='C' || j=='d' || j=='D')
	{
		cout<<"Jawaban Salah!!\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw1;
	}
	garis();
	clear();

	cout<<"Pertanyaan Matematika Ketiga :\n";
	cout<<"Sin90 x cos90 x tangen 350 \n";
	cout<<"a. TidakTahu | b. 500 | c. 140 | d. 958 \n";
	jaw2:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='a' || j=='A')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='b' || j=='B' || j=='c' || j=='C' || j=='d' || j=='D')
	{
		cout<<"Jawaban Salah\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw2;
	}
	garis();
	clear();

	cout<<"Pertanyaan Matematika Keempat :\n";
	cout<<"Bebek berenang disungai yang dalamnya 10m brpakah jarak bebek dengan air ?\n";
	cout<<"a. 1m | b. 110m | c. 50m | d. 0m\n";
	jaw3:
	cout<<"Jawaban : ";
	cin>>j;
	
	if (j=='d' || j=='D')
	{
		cout<<"Jawaban Anda Benar !!\n";
	}
	else if (j=='a' || j=='A' || j=='c' || j=='C' || j=='b' || j=='B')
	{
		cout<<"Jawaban Salah\n";
	}
	else
	{
		cout<<"Jawaban Tidak Ada!!\n";
		goto jaw3;
	}
}
	
