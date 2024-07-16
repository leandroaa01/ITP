/*Comprimento da Ponte (R03)

A prefeitura está pedindo sua ajuda para determinar o comprimento de uma ponte que será construída. A ponte será construída nos dois pontos mais altos da região.
Os dois pontos mais altos são sempre iguais, então não deve haver uma ponte inclinada. Escreva um programa que leia um número n (assuma n ≤ 30), em seguida n 
números inteiros (todos maiores que 0) representando a altura do terreno (vide Figuras a seguir). O programa deve escrever na tela o comprimento da ponte que une 
os dois pontos mais altos. Assuma que há sempre duas, e somente duas, ocorrências do ponto mais alto e que o comprimento da ponte é no mínimo 1.

figura 01 : https://dimap.ufrn.br/~rafaelbg/ponte1.jpg
 || 02 : https://dimap.ufrn.br/~rafaelbg/ponte2.jpg
 || 03: https://dimap.ufrn.br/~rafaelbg/ponte4.jpg

Entrada da primeira figura: 10 2 5 3 2 2 3 5 3 2 1 (saída 4)

Entrada da segunda figura: 10 4 5 3 5 5 6 5 3 6 4 (saída 2)

Entrada da terceira figura: 20 1 2 4 6 1 2 3 3 3 3 4 4 5 4 3 2 3 6 4 2 (saída 13)
*/


#include <iostream>


int main()
{
  int n;
  std::cin >> n;

  int array[n];


  for (int &v : array)
  {
    std::cin >> v;
  }

  int maior = array[0];
  int posicao =0;


  for (int i = 0; i < n; i++)
  {
    if (array[i] > maior)
    {
      maior = array[i];
      posicao = i;
    }
  }

  int distancia = 0;

  for (int i = posicao + 1; i < n; i++)
  {
    if (array[i] == maior)
    {
      distancia = i - posicao - 1;
      
    }
  }

  std::cout << distancia;

  return 0;
}
