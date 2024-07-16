/*
Contador de substrings

Escreva um programa que recebe duas strings de até 40 caracteres, A e B, e informa quantas vezes a
primeira ocorre dentro da segunda. O programa deve ignorar diferenças de maiúsculas e minúsculas.
*/

#include <bits/stdc++.h>

int main()
{
   std::string a, b;

   std:: cin>> a;
   getchar();
   getline(std::cin, b);

   
   for (int i = 0; i < a.size(); i++)
   {
      a[i]= tolower(a[i]);
   }

   for (int i = 0; i < b.size(); i++)
   {
      b[i]= tolower(b[i]);
   }
   

   int soma = 0;
   int pos = 0;

   while ((pos = b.find(a, pos)) != std::string::npos)
   {
   pos++;
     soma += 1;
   };

    std::cout << soma;

   return 0;
} 
