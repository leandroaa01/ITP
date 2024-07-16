/*Matriz Simétrica

Insira uma matriz de tamanho qualquer e verifique se a mesma é simétrica.
  A simetria da matriz é quando sua transposta é igual a ela mesma, no link vai te ajudar a ter mais informações.

Entre com o numero de linhas e colunas da matriz, e entre com a matriz e verifique a simetria*/

#include <bits/stdc++.h>

int main()
{
    int lin, col;

    bool identidade = true;
    // col = 3  e col = 3
    // 1 0 0
    // 0 1 0
    // 0 0 1

    std::cin >> lin >> col;
    int matriz[lin][col];

    if (lin != col)
    {
        identidade = false;
    }
    else
    {
        for (int i = 0; i < lin; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cin >> matriz[i][j];
            }
        }

        for (int i = 0; i < lin; i++)
        {
            for (int j = 0; j < lin; j++)
            {
                if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0))
                {
                    identidade = false;
                    // col = 3  e col = 2
                    // 1 0 
                    // 0 1 
                    // 0 0 
                }
            }
        }
    }
    if (identidade == true)
    {
        std::cout << "Matriz Simétrica";
    }
    else
    {
        std::cout << "Matriz não Simétrica";
    }

    return 0;
}
