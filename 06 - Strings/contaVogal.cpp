/*
Conta Vogal

Escreva uma função que possui uma string como parâmetro. Essa função deve retornar
a quantidade de vogais (a, e, i, o, u) presentes na string.

Ao final, seu programa deve imprimir a mensagem segundo os exemplos abaixo.

Entrada     Saida
entrada      Tem 3 vogais
xfdjkml       Não possui vogais
*/

#include <bits/stdc++.h>

int main()
{
    std::string a;

    std::getline(std::cin, a);
    int contador = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ||
            a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            contador += 1;
        }
    }

    if( contador > 0){
         std::cout << "Tem " << contador <<" vogais " << std::endl;

    }else{
        std:: cout << "Não possui vogais";
    }

   
    return 0;
}
