/*1.Implemente uma função que soma dois vetores (sequências de
inteiros). A função deve retornar uma nova sequência alocada
dinamicamente.*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int *sumVetor(int size, int v1[], int v2[])
{
    int *sum = new int[size];
    for (int i = 0; i < size; i++)
    {
        sum[i] = v1[i] + v2[i];
    }
    return sum;
}

TEST_CASE("Testando soma de Vetores")
{
    int a[] = {1, 2, 3, 5};
    int b[] = {2, 4, 0, 0};
    int *soma = sumVetor(4, a, b);

    CHECK(soma[0] == 3);
    CHECK(soma[1] == 6);
    CHECK(soma[2] == 3);
    CHECK(soma[3] == 5);
}
