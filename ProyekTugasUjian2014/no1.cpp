#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int uangalwi, sribu, ribu, ltus, sisatus, ratus, sisal, lima, sisadu, dualima, sisa;
    
                 
            cout << "Masukkan uang Anda : ";
            cin >> uangalwi;
            cout<<endl<<endl;
            //codealwi
            sisa= uangalwi % 1000;
            sribu= uangalwi - sisa;
            ribu= sribu / 1000;
            ltus= sisa / 500;
            sisatus= sisa % 500;
            ratus= sisatus / 100;
            sisal=sisa%100;
            lima=sisal/50;
            sisadu=sisa %50;
            dualima=sisadu/25;
            
            cout<<"Jumlah Ribuan : "<<ribu<<endl;
            cout<<"Jumlah Limaratus : "<<ltus<<endl;
			cout<<"Jumlah Ratusan : "<<ratus<<endl;
            cout<<"Jumlah limapuluh : "<<lima<<endl;//codealwi
            cout<<"Jumlah dualima : "<<dualima<<endl;
            
        
           
    getch();        
}
