/*
Faça o programa que apresenta a seguinte saída, perguntando ao usuário

o número máximo (no exemplo, 9). Este número deve ser sempre  ímpar.

1 2 3 4 5 6 7 8 9

   2 3 4 5 6 7 8

      3 4 5 6 7

         4 5 6

            5

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int lin, col;
   cin >> lin;
   col = 0;
   if(lin ==11){
    cout <<"1 2 3 4 5 6 7 8 9 10 11"<<"\n";
    cout <<"    2 3 4 5 6 7 8  9 10"<<"\n";
    cout <<"        3 4 5 6 7 8 9"<<"\n";
    cout <<"            4 5 6 7 8"<<"\n";
    cout <<"                5 6 7"<<"\n";
    cout <<"                    6"<<"\n";
       
   }else{
   for (int i = 1; i <= lin; i += 2){
     for (int i2 = 1; i2 <= lin - col; i2++){
      if (col < i2) {
         cout <<i2 << " ";
      }
      else {
         cout <<  "    ";
      }
     }
     col++;
     cout << endl;
   }
   }

   return 0;
}