/*
Dados três valores inteiros positivos, a​, b​ e c​, sendo c​ o maior valor,
eles são chamados de terno pitagórico quando:

a² + b² = c²

Escreva um programa que lê três valores inteiros e verifica se formam um terno pitagórico.
 Note que, os valores são fornecidos em qualquer ordem. Portanto, atente ao valor de c
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t1, t2, t3, corte;
    cin >> t1 >> t2 >> t3;

    t1 = t1 * t1;
    t2 = t2 * t2;
    t3 = t3 * t3;

    if (t1 + t2 == t3 || t2 - t1 == t3 || t1 - t2 == t3)
    {
        cout << "Pythagorean triple! \n";
    }
    else
    {
        cout << "Not a Pythagorean triple! \n";
    }
}
