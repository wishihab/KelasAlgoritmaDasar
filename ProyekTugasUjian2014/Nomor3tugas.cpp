#include <iostream>

using namespace std;
main()
{
      int i=0, vocal=0, ks=0, x;
      char kalimat[255];

   cout<<"\t\t  :: Program Penghitung Huruf Vocal ::\n";
   cout<<" ==============================================================================\n";
   cout<<" ==============================================================================\n";
   cout<<"\t :: Masukan Kalimat Yang Ingin Anda Hitung Huruf Vocalnya ::\n\n\n";

      cin.getline(kalimat,225);
      x=strlen(kalimat);
      for(i=0;i<x;i++)
            {
            if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
            vocal++;
            else
            ks++;
      }
      cout<<"Jumlah Huruf Vokal\t: "<<vocal<<" huruf"<<endl;
      cout<<"Jumlah Huruf Konsonan\t: "<<ks<<" huruf"<<endl;
      
}
