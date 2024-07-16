/*
Espelhamento de strings

Crie um programa que receba uma string e imprima a string concatenada a seu espelho (string invertida).

Exemplo:

ITP -> ITP|PTI*/

#include <bits/stdc++.h>


int main() {
    std::string a;

    std::getline(std::cin, a);

     std:: string inverso =  a;
     std::reverse(inverso.begin(), inverso.end());
   
    std::cout << a <<"|"<<inverso << std::endl;
    
    

    return 0;
}
