/*
3.Implemente uma função para desalocar uma matriz alocada
dinamicamente.*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

void liberarMatriz(int lin, int col, int **matriz)
{
    for (int i = 0; i < lin; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
}
TEST_CASE("Testando uma matriz 2x2")
{
    int **matriz = new int *[2];
    matriz[0] = new int[2]{1, 3};
    matriz[1] = new int[2]{4, 5};
    liberarMatriz(2, 2, matriz);

    CHECK(matriz[0][0] != 1);
    CHECK(matriz[0][1] != 3);
    CHECK(matriz[1][0] != 4);
    CHECK(matriz[1][1] != 5);
}
