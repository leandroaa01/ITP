#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Em matemática, fatoração é um processo em que um número (ou uma expressão) é
 * representado pela multiplicação de elementos menores (fatores). Por exemplo,
 * o número 56 pode ser representado por 2.2.2.7.
 *
 * Quando fatoramos valores numéricos, eles são normalmente representados pelo
 * produto de potências de números primos, como no exemplo anterior, representado
 * por 2³.7¹.
 *
 * Implemente uma função para fatorar um número, gerando uma sequência de potências.
 * A sequência de pontências será representada por dois arrays, um com as bases e
 * outro com os expoentes.
 * A função deverá então receber os seguintes parâmetros:
 *   - um valor inteiro com o número a ser fatorado;
 *   - uma variável do tipo inteiro que será alterada com o total de potências;
 *   - um array de inteiros que será alterado com as bases das potências;
 *   - um array de inteiros que será alterado com os expoentes das potências.
 *
 * Assim, a partir do inteiro passado no 1º parâmetro, a função deverá alterar os
 * dos demais parâmetros de forma que eles representem a fatoração do valor passado.
 * Por exemplo, se for passado o valor 56 no 1º parâmetro, o segundo deverá ser
 * alterado para 2, o terceiro parâmetro (um array) será modificado para ter os
 * valores { 2, 7 } e o quarto parâmetro (também um array) também será modificado
 * para ter os valores { 3, 1 }.
 *
 * Obs: Assuma que o valor a ser fatorado será sempre um valor positivo (o zero
 * não será passado).
 */

// tamanho máximo da sequência de potência.
const int MAX_SIZE = 20;

// bool eh_primo(int numero)
// {
//   bool primo = true;
//   if (numero == 1)
//   {
//     return false;
//   }
//   if (numero == 2)
//   {
//     return true;
//   }

//   if (numero % 2 == 0)
//   {
//     primo = false;
//   }
//   else
//   {
//     int count = 0;
//     for (size_t i = 1; i <= numero; i++)
//     {
//       if (numero % i == 0)
//       {
//         count++;
//       }
//     }
//     if (count > 2)
//     {
//       primo = false;
//     }
//   }
//   return primo;
// }

// void fatora(int num, int &tamanho, int array_base[], int array_expo[])
// {
//   bool primo = eh_primo(num);
//   if (primo == true)
//   {
//     tamanho = 1;
//     for (int i = 0; i < tamanho; i++)
//     {
//       array_base[i] = num;
//       array_expo[i] = 1;
//     }
//   }
//   else if (num == 1)
//   {
//     tamanho = 1;
//     for (int i = 0; i < tamanho; i++)
//     {
//       array_base[i] = 1;
//       array_expo[i] = 1;
//     }
//   }
//   else
//   {
//     tamanho = 0;
    // 56 / 2 = 28
    // 28 / 2 = 14
    // 14 / 2 = 7
    // 2 2 2
    // 56 / 7 = 7

    // 600 / 2 = 300
    // 600 / 3 = 200
    // 600 / 5 = 120
    //   int a, b, c, div;
    //   int aa = 1, k= 1;
    //  for (int i = 2; i < 7; i++)
    //  {
    //    if (num % i == 0)
    //    {
    //     if(eh_primo(i)== true){
    //      a = i;
    //      div = num / i;
    //      for (int j = 0; j < i; j++)
    //      {
    //       div = div / i;
    //       // 28/ 2  j=0
    //       // 14 /2  j=1
    //       a++;
    //       // aa = 3
    //      }
    //       array_base[k]= a;
    //       array_expo[k]= aa;
    //       k++;
    //     }

    //    }
    //  }
    //  tamanho = k;

//     int count_base = 0;
//     for (int i = 0; i < num / 2; i++)
//     {
//       int count_expo = 1;
//       if (eh_primo(i) && (num % i == 0))
//       {
//         array_base[tamanho] = i;
//         int value = num / i;
//         for (int j = 0; num % i; j++)
//         {
//           count_expo++;
//           value = value / i;
//         }
//         array_expo[tamanho] = count_expo;
//         tamanho++;
//       }
//     }
//   }
// }

void fatora(int valor, int &tamanho, int base[], int expo[])
{
  tamanho = 0;
  base[0] = 1;
  expo[0] = 0;
  if (valor == 1)
  {
    tamanho = 1;
  }
  else
  {
    while (valor > 1)
    {
      do
      {
        base[tamanho]++;
      } while (valor % base[tamanho] != 0);
      do
      {
        expo[tamanho]++;
        valor /= base[tamanho];
      } while (valor % base[tamanho] == 0);
      tamanho++;
      base[tamanho]= base[tamanho-1];
      expo[tamanho]= 0;
    }
  }
}
TEST_CASE("Testando a fatoração de um número qualquer (56).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(56, tam, base, expo);
  // 56 = 2³.7¹
  CHECK(tam == 2);
  CHECK(base[0] == 2);
  CHECK(expo[0] == 3);
  CHECK(base[1] == 7);
  CHECK(expo[1] == 1);
}

TEST_CASE("Testando a fatoração de um número qualquer (600).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(600, tam, base, expo);
  // 600 = 2³.3¹.5²
  CHECK(tam == 3);
  CHECK(base[0] == 2);
  CHECK(expo[0] == 3);
  CHECK(base[1] == 3);
  CHECK(expo[1] == 1);
  CHECK(base[2] == 5);
  CHECK(expo[2] == 2);
}

TEST_CASE("Testando a fatoração de um número primo (13).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(13, tam, base, expo);
  // 13 = 13¹
  CHECK(tam == 1);
  CHECK(base[0] == 13);
  CHECK(expo[0] == 1);
}

TEST_CASE("Testando a fatoração de 1.")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(1, tam, base, expo);
  // 1 = 1ⁱ (onde i é qualquer valor, ou seja basta que base[0] = 1).
  CHECK(tam == 1);
  CHECK(base[0] == 1);
}
