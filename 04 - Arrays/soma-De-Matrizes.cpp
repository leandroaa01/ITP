/*
Soma de matrizes

Escreva um programa para somar duas matrizes A e B. A primeira linha da entrada de seu programa é constituída 
de dois valores inteiros, correspondentes respectivamente ao número de linhas L e número de colunas C das matrizes. 
As L linhas seguintes definem as linhas das matrizes A, contendo, cada uma C valores inteiros.
Em seguida, haverá as L linhas da matriz B, cada uma contendo também C valores inteiros.
A saída do programa deve ser a matriz L x C resultante da soma de A e B.
Obs: L e C são menores ou igual a 20.*/

#include <bits/stdc++.h>

int main()
{
    int lin, col,k;

    std::cin >> lin >> col;
    int matrizA[lin][col];
    int matrizB[lin][col];
    int matrizAB[lin][col];
    

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
         matrizAB[i][j]= matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << matrizAB[i][j] << " ";
        }
        std ::cout << std::endl;
    }

    return 0;
}
