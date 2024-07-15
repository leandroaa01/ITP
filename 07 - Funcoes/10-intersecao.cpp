#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Implemente uma função para calcular a interseção entre dois conjuntos.
 * Sua função deve receber como parâmetro 3 sequências (arrays). As duas primeiras
 * são os conjuntos que você quer calcular a interseção. A terceira sequência
 * será alterada para conter a interseção dos dois anteriores.
 * 
 * Lembre-se que tanto os valores da sequência resultante (interseção) quando
 * seu tamanho podem ser alterados.
 * 
 * Para facilitar, você pode utilizar a função criada na atividade anterior (conjunto)
 * para transformar as sequências em conjuntos (sem repetição de valores) antes de
 * calcular a interseção delas.
 * 
 * Re-utilize a função da atividade anterior (conjuntos iguais) para saber se o
 * conjunto com a interseção calculada é igual ao conjunto com a interseção esperada.
 */


void conjunto(int &tamanho, int sequencia[])
{
    int novoTamanho = 0;
    for (int i = 0; i < tamanho; ++i)
    {
        bool encontrado = false;
        for (int j = 0; j < novoTamanho; ++j)
        {
            if (sequencia[i] == sequencia[j])
            {
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            sequencia[novoTamanho] = sequencia[i];
            novoTamanho++;
        }
    }
    tamanho = novoTamanho;
}

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

void intersecao(int arrayOne[], int sizeOne, int arrayTwo[], int sizeTwo, int arrayThree[], int &sizeThree)
{
    // Transformar as sequências em conjuntos (sem repetição)
    conjunto(sizeOne, arrayOne);
    conjunto(sizeTwo, arrayTwo);

   
    sizeThree = 0;
    for (int i = 0; i < sizeOne; i++)
    {
        for (int j = 0; j < sizeTwo; j++)
        {
            if (arrayOne[i] == arrayTwo[j])
            {
                arrayThree[sizeThree] = arrayOne[i];
                sizeThree++;
                break;
            }
        }
    }
}
TEST_CASE("Testando com duas sequências sem repetições.") {
  int seq1[]  = { 7, 1, 4, 2, 3 };
  int seq2[]  = { 8, 4, 2, 1, 6, 9, 0 };
  int esperada[] = { 1, 4, 2 };
  int calculada[20];
  int tam;
  intersecao(seq1, 5, seq2, 7, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando a 1a sequência sem repetições.") {
  int seq1[]  = { 8, 4, 2, 1, 6, 9, 0 };
  int seq2[]  = { 7, 1, 4, 2, 3, 1, 7, 4, 7, 3 };
  int esperada[] = { 1, 4, 2 };
  int calculada[20];
  int tam;
  intersecao(seq1, 7, seq2, 10, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando a 2ª sequência sem repetições.") {
  int seq1[]  = { 7, 1, 4, 2, 3, 1, 7, 4, 7, 3 };
  int seq2[]  = { 8, 4, 2, 1, 6, 9, 0 };
  int esperada[] = { 1, 4, 2 };
  int calculada[20];
  int tam;
  intersecao(seq1, 10, seq2, 7, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando ambas sequência com repetições.") {
  int seq1[20]  = { 7, 1, 4, 1, 2, 7, 3, 2, 2, 1 };
  int seq2[20]  = { 8, 4, 2, 1, 4, 2, 6, 9, 0 };
  int esperada[] = { 1, 4, 2 };
  int calculada[20];
  int tam;
  intersecao(seq1, 10, seq2, 9, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}


