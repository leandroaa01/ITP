/*
Comitê Olímpico
O Comitê Olímpico Internacional está desesperado porque houve um problema noseus servidores
e o programa que fazia a classificação dos países na olimpíadaficou comprometido. Eles precisam
de uma nova versão do programa de classificaçãoe pediram para você fazer uma primeira versão apenas
contando o número total demedalhas dos países.

Teu programa deve ler da entrada o resultado de várias provas, cada uma seguindoa ordem de classificação
 (1º, 2º e 3º lugares), e enviar para a saída a quantidadede medalhas de ouro (1º lugar), prata (2º lugar)
e bronze (3º lugar) que cada paísobteve. A versão protótipo do teu programa será avaliada com
apenas 3 países, identificadospelos números de 1 a 3.

A entrada de dados consiste inicialmente de uma linha com um valor inteiro N,indicando o número de provas
disputadas, seguida de N linhas, que informam osresultados das N provas. Cada linha possui 3 valores
inteiros (entre 1 e 3) indicandorespectivamente os países que obtiveram o 1º, 2º e 3º lugar.
A saída de dados consiste em 3 linhas, cada uma com o identificador do país, seguidodo número de medalhas
de ouro, prata e bronze.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int qtd;
    cin >> qtd;

    int p1, p2, p3;
    int oup1, prap1, brop1;
    int oup2, prap2, brop2;
    int oup3, prap3, brop3;
    // Pais 1
    oup1 = 0;
    oup2 = 0;
    oup3 = 0;
    // Pais 2
    prap1 = 0;
    prap2 = 0;
    prap3 = 0;
    // Pais 3
    brop1 = 0;
    brop3 = 0;
    brop2 = 0;

    for (int i = 0; i < qtd; i++)
    {
        cin >> p1 >> p2 >> p3;
        // ouro
        if (p1 == 1)
        {
            oup1 += 1;
        }
        else if (p1 == 2)
        {
            oup2 += 1;
        }
        else if (p1 == 3)
        {
            oup3 += 1;
        }

        // prata
        if (p2 == 1)
        {
            prap1 += 1;
        }
        else if (p2 == 2)
        {
            prap2 += 1;
        }
        else if (p2 == 3)
        {
            prap3 += 1;
        }

        // bronze
        if (p3 == 1)
        {
            brop1 += 1;
        }
        else if (p3 == 2)
        {
            brop2 += 1;
        }
        else if (p3 == 3)
        {
            brop3 += 1;
        }
    }
    cout << "país 1: " << oup1 << " ouros, " << prap1 << " pratas e " << brop1 << " bronzes"
         << "\n";
    cout << "país 2: " << oup2 << " ouros, " << prap2 << " pratas e " << brop2 << " bronzes"
         << "\n";
    cout << "país 3: " << oup3 << " ouros, " << prap3 << " pratas e " << brop3 << " bronzes"
         << "\n";

    return 0;
}
