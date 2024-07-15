#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Uma das operações mais usadas para tratar dados preenchidos por usuários é
 * remover os espaços em branco no inicio ou no final de um formulário, por exemplo.
 * Essa operação chama-se "trim".
 * 
 * Implemente uma função que realiza a operação trim em uma string passada. A função
 * deve retornar uma nova string com os espaços em branco iniciais e finais removidos.
 */


std::string trim(const std::string &texto) {
    int start = 0;
    int end = texto.size() - 1;

    // Encontrar o primeiro caractere que não seja espaço em branco
    while (start <= end && texto[start] == ' ') {
        start++;
    }

    // Encontrar o último caractere que não seja espaço em branco
    while (end >= start && texto[end] == ' ') {
        end--;
    }

    // Substring do primeiro ao último caractere não-espaço
    std::string result;
    for (int i = start; i <= end; i++) {
        result += texto[i];
    }

    return result;
}
TEST_CASE("Testando com uma string sem espaço em branco.") {
  std::string str = "Amou daquela vez como se fosse a ultima";
  CHECK(trim(str) == "Amou daquela vez como se fosse a ultima");
}

TEST_CASE("Testando com uma string com espaço em branco no início.") {
  std::string str = "   Beijou sua mulher como se fosse a ultima";
  CHECK(trim(str) == "Beijou sua mulher como se fosse a ultima");
}

TEST_CASE("Testando com uma string com espaço em branco no final.") {
  std::string str = "E cada filho seu como se fosse o unico";
  CHECK(trim(str) == "E cada filho seu como se fosse o unico    ");
}

TEST_CASE("Testando com uma string com espaço em branco em ambos os lados.") {
  std::string str = "E atravessou a rua com seu passo timido";
  CHECK(trim(str) == "     E atravessou a rua com seu passo timido        ");
}
