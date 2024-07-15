/*

Escreva um programa que lê três coordenadas reais (x1,y1), (x2,y2) e (x3,y3),
onde (x1,y1), (x2,y2) definem a coordenada superior esquerda e inferior direita
de um retângulo no espaço 2D, respectivamente. (x3,y3) define um ponto no espaço 2D.
Seu programa deve verificar se o ponto (x3,y3) está dentro do retângulo (x1,y1), (x2,y2).
Caso sim, a saída do programa deve ser “O ponto está dentro do retângulo”. Caso contrário
deve imprimir “O ponto está fora do retângulo”.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if ((x1 <= x3) && (x3 <= x2) && (y2 <= y3) && (y3 <= y1))
    {
        cout << "O ponto está dentro do retângulo" << endl;
    }
    else
    {
        cout << "O ponto está fora do retângulo" << endl;
    }
    return 0;
}