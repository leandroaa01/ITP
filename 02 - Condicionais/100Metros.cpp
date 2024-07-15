/*
100 metros rasos é uma modalidade do atletismo que compõe o quadro
de competições das olimpíadas desde 1896, em Atenas.

Na etapa classificatória, os participantes têm direito a 3 tentativas,
sendo menor tempo sua nota final. Então, sua melhor distância
é comparada a uma nota de corte, caso seja menor ou igual, o participante é aprovado para próxima etapa.

Você ficou responsável por escrever um programa que lê tempos de um atleta,
e a nota de corte, nessa ordem. Seu programa deve escolher a melhor distância
 do atleta, e verificar se ele atingiu ou ultrapassou a nota de corte.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t1, t2, t3, corte;
    cin >> t1 >> t2 >> t3 >> corte;
    double melhot;

    if (t1 <= t2 && t1 <= t3)
    {
        melhot = t1;
    }
    else if (t2 <= t3 && t2 <= t1)
    {
        melhot = t2;
    }
    else
    {
        melhot = t3;
    }

    if (melhot > corte)
    {
        cout << "Atleta reprovado com tempo " << melhot << "s e nota de corte " << corte << "s\n";
    }
    else
    {
        cout << "Atleta aprovado com tempo " << melhot << "s e nota de corte " << corte << "s\n";
    }
}
