/*
Você foi contratado pela Confederação Brasileira de Atletismo para auxiliar nos processos
administrativos da confederação. Uma das suas primeiras tarefas é desenvolver um programa
 para facilitar o desenvolvimento de orçamentos para compra de equipamentos e materiais para as competições.

Mais especificamente, você deve desenvolver um programa que recebe como entrada a descrição dos diferentes
itens do orçamento de modo que cada item é descrito por dois valores: sua quantidade e seu valor unitário.
Como os orçamentos possuem várias páginas, a quantidade total de itens não é conhecida previamente.
Assim, o programa receberá uma quantidade indeterminada de itens até que o valor -1 seja apresentado.

O programa deve apresentar como saída a quantidade total de elementos, uma vez que cada item pode apresentar
mais de uma unidade, e em seguida o valor total do orçamento (considerando duas casas decimais).

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, p;
    double soma = 0;
    double qdt = 0;

    cin >> n >> p;

    while (n != -1)
    {
        soma += n;
        qdt += n * p;
        cin >> n >> p;
    }
    cout << soma << " ";
    cout << fixed << setprecision(2);
    cout << qdt;
    return 0;
}