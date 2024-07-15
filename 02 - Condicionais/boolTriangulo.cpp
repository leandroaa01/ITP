/*
Um triângulo só é possível se cada lado não é maior que a soma dos outros dois.

Escreva um programa que recebe três números inteiros como os tamanhos dos três lados
 de um triângulo e verifica se estes tamanhos podem formar um triângulo.
 Se for possível formar um triângulo, o programa deve escrever "possivel".
 Caso contrário, deve escrever "impossivel".

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < (b + c) && b < (c + a) && c < (a + b))
    {
        cout << "possivel" << endl;
    }
    else
    {
        cout << "impossivel" << endl;
    }
    return 0;
}