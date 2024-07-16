/*
Iniciais maiúsculas (hm)

Escreva um programa que solicite ao usuário, digitar uma frase contendo no máximo 60 caracteres. 
O programa deve processar a frase sem utilizar a biblioteca cstring e exibir na saída as letras iniciais de cada palavra em maiúsculas e as demais letras em minúsculas.
Por exemplo, se o usuário digitar a frase "Todo homem morre, mas nem todo homem vive.", 
o programa deve exibir a frase resultante como "Todo Homem Morre, Mas Nem Todo Homem Vive."*/

#include <bits/stdc++.h>

int main()
{
   std::string msg;

   getline(std::cin, msg);
   
   for (size_t i = 0; i < msg.size(); i++)
   {
    msg[i+1]= tolower(msg[i+1]);
    if (msg[i]==' ')
    {
       msg[i+1]= (char)toupper(msg[i+1]);
    }
    
   }
   

   
   std::cout << msg;

   return 0;
}
