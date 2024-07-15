#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Muitas vezes precisamos saber a quantidade de combinações possíveis de um 
 * conjunto de dados. Por exemplo, se quisermos saber quantas duplas podem ser
 * formadas com uma turma com 30 alunos, podemos usar a fórmula:
 *   N! / (K!.(N-K)!)
 * onde:
 *   N: é a quantidade de elementos do conjunto. No caso, são 30 alunos;
 *   K: é o tamanho da combinação. No caso, 2, já que queremos formar duplas.
 * Assim, teremos 30! / (2!.28!) = 435 possíveis duplas.
 * 
 * Implemente uma função para calcular o número de combinações dado o tamanho
 * do conjunto e o tamanho da combinaçã desejada. Como essa função utilizará
 * o fatorial, implemente também uma função para calcular o fatorial de um
 * valor.
 */

int fatorial(int num)
{
  int fat = 0, soma = 1;
  if (num == 0 || num == 1)
  {
    return 1;
  }

  for (int i = 1; i < num; i++)
  {
    fat = soma * i;
    soma = fat;
  }

  fat *= num;

  return fat;
}
int num_combinacoes(int n , int k){
  int n_fat = fatorial(n);
  int k_fat = fatorial(k);
  int nk = n-k;
  int nk_fat = fatorial(nk);

  int com = n_fat /(k_fat*nk_fat);

  return com;

}

TEST_CASE("Testando o fatorial") {
  CHECK(fatorial(0) == 1);
  CHECK(fatorial(1) == 1);
  CHECK(fatorial(2) == 2);
  CHECK(fatorial(3) == 6);
  CHECK(fatorial(5) == 120);
  CHECK(fatorial(9) == 362880);
}

TEST_CASE("Testando o número de combinações") {
  CHECK(num_combinacoes(2, 2) == 1);
  CHECK(num_combinacoes(3, 2) == 3);
  CHECK(num_combinacoes(4, 2) == 6);
  CHECK(num_combinacoes(4, 3) == 4);
  CHECK(num_combinacoes(6, 4) == 15);
  CHECK(num_combinacoes(10, 2) == 45);
}