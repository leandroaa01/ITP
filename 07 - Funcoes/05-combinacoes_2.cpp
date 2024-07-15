#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Muitas vezes precisamos saber a quantidade de combinações possíveis de um 
 * conjunto de dados. Por exemplo, se quisermos saber quantas duplas podem ser
 * formadas com uma turma com 30 alunos podemos usar a fórmula:
 *   N! / (K!.(N-K)!)
 * onde:
 *   N: é a quantidade de elementos do conjunto. No caso, 30 alunos;
 *   K: é o tamanho da combinação. No caso, 2 alunos, já que queremos formar duplas.
 * Assim, teremos 30! / (2!.28!) = 435 possíveis duplas.
 * 
 * Porém, calcular valores como 30!, que é um valor com mais de 32 dígitos, requer
 * um tipo de dado especial, que não é nativo na maioria das linguagens de
 * programação. Uma forma alternativa é simplificar o cálculo. Por exemplo,
 *   30! = 30.29.28!, logo cortando 28! no numerador com 28! no denominador, temos:
 *   30! / (2!.28!) =
 *   (30.29.28!) / (2!.28!) =
 *   30.29 / 2 =
 *   435
 * Então, podemos implementar essa simplificação através de uma função que
 * calcula o produtório de valores inteiros sucessivos a partir de um dado
 * valor inicial até um dado valor final (o fatorial é um produtório de
 * inteiros sucessivos no qual o valor inicial é 1).
 * 
 * Implemente uma função para calcular o produtório dado um valor inteiro final
 * (1º parâmetro) e um valor inteiro inicial (2º parâmetro). Assuma que, se o
 * 2º parâmetro não for passado, ele assumirá o valor default 1.
 *
 * Veja que o 1º parâmetro é o valor final e o 2º é o valor inicial, logo o
 * 1º parâmetro deve ser maior ou igual ao 2º. Se isso não ocorrer, retorne o
 * valor 1.
 * 
 * Implemente uma segunda função para calcular o número de combinações dado
 * o tamanho do conjunto e o tamanho da combinaçã desejada. Use a função anterior
 * (produtório) para calcular o resultado desta (número de combinações).
 */

int produtorio(int a, int b = 1){
  if( b == 1){
  b = a;
  int pro = 0, soma = 1;
  if (a == 0 || a == 1)
  {
    return 1;
  }

  for (int i = 1; i < b; i++)
  {
    pro = soma * i;
    soma = pro;
  }

  pro *= a;

  return pro;
} else{
  int pro = 0, soma = 1;
  if (a == 0 || a == 1)
  {
    return 1;
  }

  for (int i = b; i < a; i++)
  {
    pro = soma * i;
    soma = pro;
  }

  pro *= a;

  return pro;
}
}

int num_combinacoes(int n , int k){

  return produtorio(n, n - k + 1) / produtorio(k);

}

TEST_CASE("Testando o produtório de valores sucessivos") {
  CHECK(produtorio(0) == 1);
  CHECK(produtorio(1) == 1);
  CHECK(produtorio(2) == 2);
  CHECK(produtorio(3) == 6);
  CHECK(produtorio(5) == 120);
  CHECK(produtorio(9,3) == 181440);
  CHECK(produtorio(10,8) == 720);
  CHECK(produtorio(15,10) == 3603600);
}

TEST_CASE("Testando o número de combinações") {
  CHECK(num_combinacoes(2, 2) == 1);
  CHECK(num_combinacoes(3, 2) == 3);
  CHECK(num_combinacoes(4, 2) == 6);
  CHECK(num_combinacoes(4, 3) == 4);
  CHECK(num_combinacoes(6, 4) == 15);
  CHECK(num_combinacoes(10, 2) == 45);
  CHECK(num_combinacoes(10, 8) == 45);
  CHECK(num_combinacoes(10, 9) == 10);
  CHECK(num_combinacoes(30, 2) == 435);
  CHECK(num_combinacoes(45, 3) == 14190);
}