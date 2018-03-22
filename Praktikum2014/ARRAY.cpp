#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int angka[3][4];

   for (int a=0; a<3; a++)
   {
       for(int b=0; b<4; b++)
      {
          cout <<"elemen array [" << a <<"][" << b <<"]= ";
         cin >> angka[a][b];
      }
   }

   cout <<"\n";

   for (int a=0; a<3; a++)
   {
       for (int b=0; b<4; b++)
      {
          cout << angka[a][b]<<" ";
      }
      cout <<"\n";
   }

       cout <<"transpose: \n \n";

   for (int b=0; b<4; b++)
   {
       for (int a=0; a<3; a++)
      {
          cout << angka[a][b] <<" ";
      }
      cout <<"\n";
   }

   getch();
}
