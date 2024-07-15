#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Escreva uma função que conta a quantidade de "vogais" de uma string.
 * A função deve receber um texto qualquer e retornar a quantidade de letras
 * do texto que representam sons vogais da nossa língua (ou seja a, e, i, o , u).
 * A função deve contar tanto as letras minúsculas e quanto as maiúsculas, mas
 * não levar em conta letras acentuadas (como à, ã, é) nem o y.
 */
 
int conta_vogais( const std:: string texto){
  int contador = 0;
    for (size_t i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U' ||
            texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            contador += 1;
        }
    }

    return contador;
 }

 

TEST_CASE("Testando a contagem de vogais de uma string") {
  CHECK(conta_vogais("") == 0);
  CHECK(conta_vogais("aaUaUUEIooaoIIII") == 16);
  CHECK(conta_vogais("2x + y = 48z") == 0);
  CHECK(conta_vogais("Por esse pão pra comer, por esse chão pra dormir") == 14);
  CHECK(conta_vogais("A certidão pra nascer e a concessão pra sorrir") == 15);
  CHECK(conta_vogais("Por me deixar respirar, por me deixar existir") == 16);
  CHECK(conta_vogais("Deus lhe pague") == 6);
}