#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Em matemática, fatoração é um processo em que um número (ou uma expressão) é
 * representado pela multiplicação de elementos menores (fatores). Por exemplo,
 * o número 56 pode ser representado por 2.2.2.7.
 * 
 * Quando fatoramos valores numéricos, eles são normalmente representados pelo
 * produto de potências (normalmente de números primos), como no exemplo anterior,
 * representado por 2³.7¹.
 * 
 * Implemente uma função para descobrir, a partir de uma sequência de potências,
 * qual o valor foi fatorado.
 * Essa função deve receber 2 arrays de inteiros. O primeiro conterá os valores
 * das bases das potências e o segundo os expoentes.
 * 
 * Por exemplo, se a função receber os sequintes arrays:
 * base = { 2, 7 }
 * expo = { 3, 1 }
 * ...ela deverá retornar 56, uma vez que 2³.7¹ = 56
 * 
 * A função deve receber na lista de parâmetros apenas um valor para o tamanho
 * dos arrays, uma vez que ambos terão o mesmo tamanho.
 * 
 * Obs 1: Assuma que os valores em ambos os arrays (base e expoente) serão valores
 * não-negativos.
 * 
 * Obs 2: Não utilize nenhuma função de bibliotecas (por exemplo, pow() da <cmath>).
 */
int  num( int num, int vezes){
  int r = 0;
  
  int n = 1;

  if (vezes == 0){
    r = 1;
  } else if(vezes == 1){
    r = num;
  }
  else{
     while (n < vezes)
  {
    r += num * num;
    
    n++;
  }
  }
  return r;
  }

int fatorado (int t_array, int array_base[], int array_expo[]){
// int a = num(array_base[0], array_expo[0]);
// int b = num(array_base[1], array_expo[1]);
// int c = num(array_base[2], array_expo[2]);

int r;
int soma = 1;
for (int i = 0; i < t_array; i++)
{
  r = num(array_base[i], array_expo[i]);
  soma *= r ;
}
r = soma;


// if(t_array == 1){
//   b = 1;
//   c = 1;
// }else if( t_array == 2){
//   c= 1;
// }



//   if (array_expo[0] == 0){
//     a = 1;
//   } else if(array_expo[0] == 1){
//     a = array_base[0];
//   }
//   else{
//      while (n < array_expo[0])
//   {
//     a += array_base[0] * array_base[0];
    
//     n++;
//   }
//   n =1;
//   }
 
//  if (array_expo[1] == 0){
//     b = 1;
//   } else if(array_expo[1] == 1){
//     b = array_base[1];
//   }
//   else{
//   while (n < array_expo[0])
//   {
//     b += array_base[1] * array_base[1];
    
//     n++;
//   }
// }
  
  return r;
}


TEST_CASE("Testando a função com valores quaisquer.") {
  int base[] = { 2, 7 };
  int expo[] = { 3, 1 };
  CHECK(fatorado(2, base, expo) == 56);
}

TEST_CASE("Testando a função com valores quaisquer.") {
  int base[] = { 2, 3, 5 };
  int expo[] = { 3, 1, 2 };
  CHECK(fatorado(3, base, expo) == 600);
}

TEST_CASE("Testando a função com uma sequência unitária.") {
  int base[] = { 13 };
  int expo[] = { 1 };
  CHECK(fatorado(1, base, expo) == 13);
}

TEST_CASE("Testando a função com uma sequência unitária de exponente 0.") {
  int base[] = { 13 };
  int expo[] = { 0 };
  CHECK(fatorado(1, base, expo) == 1);
}

TEST_CASE("Testando a função com uma sequência unitária de base 0.") {
  int base[] = { 0 };
  int expo[] = { 15 };
  CHECK(fatorado(1, base, expo) == 0);
}

TEST_CASE("Testando a função com uma sequência unitária de base e expoente 0.") {
  int base[] = { 0 };
  int expo[] = { 0 };
  CHECK(fatorado(1, base, expo) == 1);
}

TEST_CASE("Testando a função com um expoente com valor 0.") {
  int base[] = { 7, 5, 2 };
  int expo[] = { 1, 0, 2 };
  CHECK(fatorado(3, base, expo) == 28);
}

