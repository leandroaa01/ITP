/*Maior Elemento de uma Linha/Coluna

Faça um programa que, dados os números n, m (n,m <=30), lê do usuário os valores de uma matriz A de inteiros de dimensão n x m. 
Depois, o usuário vai digitar um caractere ch e um inteiro x. Caso ch seja igual 'l',o seu programa deve imprimir o maior elemento na linha x de A.
Caso ch seja igual a 'c', o seu programa deve imprimir o maior elemento na coluna x de A. */

#include <bits/stdc++.h>


int main()
{
    int lin, col, x;
    std::string ch;

    std::cin >> lin >> col;
    int matriz[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    std::cin >> ch >> x;

    if (ch == "l")
    {
        int mxlin = matriz[x][0];
        for (int j = 1; j < col; ++j)
        {
            if (matriz[x][j] > mxlin)
            {
                mxlin = matriz[x][j];
            }
        }
        std::cout << mxlin;
       
    }
    else if (ch == "c")
    {
        int mxcol = matriz[0][x];
        for (int i = 1; i < lin; ++i)
        {
            if (matriz[i][x] > mxcol)
            {
                mxcol = matriz[i][x];
            } 
        }
         std::cout << mxcol;
      
        
    }  return 0;
}
