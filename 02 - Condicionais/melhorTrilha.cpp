/*

Escreva um programa em C que determine o nível da trilha (Iniciante, Intermediário ou Avançado)
mais adequado para uma pessoa baseado em sua experiência e saúde física. Primeiro, o programa
deve ler o número de trilhas que a pessoa já fez. A avaliação inicial é feita conforme a seguinte tabela:

Número de Trilhas   Trilha Recomendada
0 ≤ T < 5            Iniciante
5 ≤ T < 20          Vide avaliação #1 da saúde física
T ≥ 20              Vide avaliação #2 da saúde física
Se for necessária uma avaliação da saúde física, e somente neste caso,
seu programa deve ler do usuário um valor lógico representando a saúde da pessoa (0 para Regular, 1 para Boa).
As tabelas abaixo, denominadas avaliação #1 e avaliação #2, respectivamente, classificam a trilha
recomendada baseada nessa avaliação.

Saúde Física  Trilha Recomendada (avaliação #1)
Regular        Iniciante
Boa            Intermediário
Saúde Física  Trilha Recomendada (avaliação #2)
Regular         Intermediário
Boa             Avançado
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t >= 0 && t < 5)
    {
        cout << "Iniciante\n";
    }
    else
    {
        int s;
        cin >> s;
        if (t >= 5 && t < 20)
        {
            cout << ((s == 0) ? "Iniciante\n" : "Intermediário\n");
        }
        else
        {
            cout << ((s == 0) ? "Intermediário\n" : "Avançado\n");
        }
    }
}
