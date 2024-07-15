/*

Escreva um programa que leia quatro números inteiros (podem ser negativos)
e escreva na tela string "Maior: " seguida do maior deles. Se houver empate, escreva somente um deles
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a >= b && a >= c && a >= d)
    {
        cout << "Maior: " << a << "\n";
        return 0;
    }
    if (b >= a && b >= c && b >= d)
    {
        cout << "Maior: " << b << "\n";
        return 0;
    }
    if (c >= b && c >= d && c >= a)
    {
        cout << "Maior: " << c << "\n";
        return 0;
    }
    if (d >= b && d >= c && d >= a)
    {
        cout << "Maior: " << d << "\n";
    }
}