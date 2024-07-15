#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Altere a função `eh_primo()` abaixo de forma que ela retorne verdade (true)
 * se o valor passado como parâmetro é primo, ou falso (false) caso contrário.
 * Por definição, um número é primo se ele for maior que 1 e possuir apenas dois
 * divisores: 1 e o próprio número.
 */

bool eh_primo(int numero)
{
  bool primo = true;
  if (numero == 1)
  {
    return false;
  }
  if (numero == 2)
  {
return true;
  }
  
  if (numero % 2 == 0)
  {
    primo = false;
  }
  else
  {
    int count = 0;
    for (size_t i = 1; i <= numero; i++)
    {
      if (numero % i == 0)
      {
        count++;
      }
    }
    if (count > 2)
    {
      primo = false;
    }
  }
  return primo;
}

TEST_CASE("Testando a função pare verificar se um número é primo.") {
  CHECK(eh_primo(1) == false);
  CHECK(eh_primo(2) == true);
  CHECK(eh_primo(3) == true);
  CHECK(eh_primo(8) == false);
  CHECK(eh_primo(9) == false);
  CHECK(eh_primo(11) == true);
  CHECK(eh_primo(26) == false);
  CHECK(eh_primo(31) == true);
  CHECK(eh_primo(267) == false);
  CHECK(eh_primo(359) == true);
  CHECK(eh_primo(397) == true);
  CHECK(eh_primo(0) == false);
  CHECK(eh_primo(-2) == false);
}