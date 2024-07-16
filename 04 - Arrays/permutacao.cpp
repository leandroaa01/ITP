/*
Permutação (R05)

Escreva um programa em c que leia um número inteiro n (assuma 1 ≤ n ≤ 10) e, em seguida, n números inteiros (não necessariamente estão entre 1 e n).
O programa deve escrever “sim” se esses n números são uma permutação dos números entre 1 e n e “não” caso contrário.
por exemplo, se n = 5, então [1 3 4 2 5] e [5 2 3 1 4] são permutações de [1 2 3 4 5], enquanto não são: [1 6 4 3 2] (pois falta o 5) e [1 2 5 3 3] (pois falta o 4).
*/

#include <bits/stdc++.h>

int main()
{
  int n;
  std::cin >> n;

  int array[n];
  bool permutacao = true;

  for (int &v : array)
  {
    std:: cin >> v;
  }

  for (int i = 0; i < n; i++)
  {
    if (array[i] < 1 || array[i] > n)
    {
      permutacao = false;
      break;
    }

    for (int j = i + 1; j < n; j++)
    {
      if (array[i] == array[j])
      {
        permutacao = false;
        break;
      }
    }
  }

  if (permutacao == true)
  {
    std::cout << "sim";
  }
  else
  {
    std::cout << "não";
  }

  return 0;

}
