/*
Analisando matematicamente as mortes de 7 reinos, o conselheiro Lucas descobriu que elas acontecem
exponencialmente da seguinte forma: As mortes acontecem exponencialmente de acordo com o número de famílias
envolvidas nas batalhas e o tempo de acordo com o diagrama abaixo.
Portanto, escreva um programa (sem os comentários) no qual a entrada n representa o
número de família e o resultado seja a seguinte tabela:

1                                    (1 família, nenhuma morte)

2 4                                (2 familias, 4 mortes no primeiro ano)

3 6 9                             (3 familias, 6 mortes no primeiro ano, 9 mortes no segundo ano)

4 8 12 16

n...
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lin, col;
    cin >> lin;
    col = 0;
    for (int i = 1; i <= lin; i++)
    {
        col = i;
        for (int i2 = 0; i2 < i; i2++)
        {
            cout << col << " ";
            col += i;
        }
        cout << endl;
    }

    return 0;
}
