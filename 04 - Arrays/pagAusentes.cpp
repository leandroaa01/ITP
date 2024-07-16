/*
Páginas ausentes (R04)

Um museu está precisando digitalizar alguns livros antigos e precisa de um programa que informe facilmente quais páginas estão faltando.
Escreva um programa que faça a leitura da quantidade m (m ≤ 1000) de páginas do livro original (numeradas de 1 a m) , a quantidade n (n ≤ m)
de páginas digitalizadas e, em seguida, o número das n páginas que foram digitalizadas (não necessariamente em ordem crescente).
O seu programa deve escrever na tela quais as páginas que estão faltando, em ordem crescente.

Por exemplo, considere a entrada 13 6 2 5 13 8 11 7. Nesse caso, temos m = 13, n = 6 e as seguintes 6 páginas digitalizadas:
2 5 13 8 11 7. As páginas que faltam e devem ser escritas na tela, nessa ordem, são: 1 3 4 6 9 10 12*/

#include <bits/stdc++.h>

int main()
{
  int numeroPaginas, numeroPaginasDigitalizadas ;
  std::cin >> numeroPaginas >> numeroPaginasDigitalizadas;

  int array[numeroPaginas];
  bool visitado[numeroPaginas+1];

  // Inicialize o array visitado como false
  for (int i = 0; i <= numeroPaginas; i++)
  {
    visitado[i] = false;
  }

  // Leia as páginas digitalizadas e marque seus índices correspondentes no array visitado como true
  for (int i = 0; i < numeroPaginasDigitalizadas; i++)
  {
    std::cin >> array[i];
    visitado[array[i]] = true;
  }

  // Itere sobre o array visitado e imprima as páginas que faltam
  for (int i = 1; i <= numeroPaginas; i++)
  {
    if (!visitado[i])
    {
      std::cout << i << " ";
    }
  }

  return 0;
}
