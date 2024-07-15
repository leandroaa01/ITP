/*
Escreva um programa em que o usuário entre com dois números, A e B, ambos maiores ou iguais a 0.
Após isso o programa deverá imprimir:

A soma dos dois números se ambos forem pares
A mensagem "Não posso somar, pois <A> não é par", onde <A> deve ser substituido pelo valor de A
A mensagem "Não posso somar, pois <B> não é par", onde <B> deve ser substituido pelo valor de B
Caso ambos os números não sejam pares, o programa deve imprimir as duas mensagens.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, soma;
    cin >> a >> b;
    if (a >= 0 && b >= 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            soma = a + b;
            cout << soma << endl;
        }
        else
        {
            if (a % 2 != 0)
            {
                cout << "Não posso somar, pois " << a << " não é par" << endl;
            }
            if (b % 2 != 0)
            {
                cout << "Não posso somar, pois " << b << " não é par" << endl;
            }
        }
    }
    return 0;
}
