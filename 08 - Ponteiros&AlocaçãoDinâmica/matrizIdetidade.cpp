/*
2.Implemente uma função para criar uma matriz identidade cujo
tamanho é passado por parâmetro. A função deve retornar a matriz
criada dinamicamente.*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
int **identidade(int size)
{
    int **matriz = new int *[size];
    for (int i = 0; i < size; i++)
    {
        matriz[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        for (int y = 0; y < size; y++)
        {
            matriz[i][y] = (i == y) ? 1 : 0;
        }
    }
    return matriz;
}

TEST_CASE("Testando uma matriz idetidade 2x2")
{
    int size = 2;
    int **id = identidade(size);

    CHECK(id[0][0] == 1);
    CHECK(id[0][1] == 0);
    CHECK(id[1][0] == 0);
    CHECK(id[1][1] == 1);
    // 1 0
    // 0 1
}
