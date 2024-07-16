/*
Somar três vetores em C

Crie um programa em C que deve receber três vetores do tipo int, denominados A, B e C, com um número específico de elementos mas todos do mesmo tamanho N. 
O programa deve solicitar inicialmente o tamanho do vetor e, em seguida, os respectivos elementos. Depois, deve-se calcular a soma dos elementos de cada posição correspondente nos vetores A, B e C
e armazenar os resultados em um vetor D, de tamanho N. Por fim, o programa deve exibir os valores do vetor resultante D, separados por espaços. */

#include <bits/stdc++.h>

int main()
{

    int n;
    std::cin >> n;
    int a[n], b[n], c[n], d[n];

    for (int &v : a)
    {
        std::cin >> v;
    }
    for (int &v : b)
    {
        std::cin >> v;
    }
    for (int &v : c)
    {
        std::cin >> v;
    }
   
    for (int i = 0; i < n; i++) {
        d[i] = a[i] + b[i] + c[i];
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d ", d[i]);
    }

    return 0;
}
