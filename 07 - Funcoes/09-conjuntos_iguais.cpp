#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Dadas duas sequências de inteiros, implemente uma função para verificar se duas
 * sequências são conjuntos (elementos não se repetem) iguais, ou seja se as duas
 * sequências armazenam os mesmos elementos independentemente da ordem em que eles
 * são armazenados.
 */

int iguais(int array_1[], int tam_1, int array_2[], int tam_2)
{
    if (tam_1 != tam_2)
    {
        return false;
    }

    // Criação de arrays para marcar quais elementos foram encontrados
    bool encontrados_1[tam_1] = {false};
    bool encontrados_2[tam_2] = {false};

    // Verificar se todos os elementos de array_1 estão em array_2
    for (int i = 0; i < tam_1; ++i)
    {
        bool igual = false;
        for (int j = 0; j < tam_2; ++j)
        {
            if (array_1[i] == array_2[j] && !encontrados_2[j])
            {
                igual = true;
                encontrados_2[j] = true;  // Marcar que encontramos este elemento em array_2
                break;
            }
        }
        if (!igual)
        {
            return false;
        }
        encontrados_1[i] = true;  // Marcar que encontramos este elemento em array_1
    }

    // Se todos os elementos de array_1 foram encontrados em array_2 e vice-versa, então são iguais
    return true;
}

TEST_CASE("Testando com dois conjuntos iguais na mesma ordem.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3 };
  CHECK(iguais(seq1, 5, seq2, 5) == true);
}

TEST_CASE("Testando com dois conjuntos iguais, mas fora de ordem.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 2, 3, 7, 4, 1 };
  CHECK(iguais(seq1, 5, seq2, 5) == true);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3, 8, 6 };
  CHECK(iguais(seq1, 5, seq2, 7) == false);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4 };
  CHECK(iguais(seq1, 5, seq2, 3) == false);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3, 8, 6 };
  CHECK(iguais(seq1, 5, seq2, 7) == false);
}

TEST_CASE("Testando com duas sequências vazias.") {
  int seq1[1] = { };
  int seq2[1] = { };
  CHECK(iguais(seq1, 0, seq2, 0) == true);
}

TEST_CASE("Testando com uma sequência vazia.") {
  int seq1[1] = { };
  int seq2[] = { 3, 6, 1 };
  CHECK(iguais(seq1, 0, seq2, 3) == false);
}

TEST_CASE("Testando com uma sequência vazia.") {
  int seq1[] = { 7, 2, 1 };
  int seq2[1] = { };
  CHECK(iguais(seq1, 3, seq2, 0) == false);
}
