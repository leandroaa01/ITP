/*
Gomoku horizontal e vertical

Gomoku é um jogo japonês milenar, jogado em um tabuleiro de 15x15 células e pedras pretas e brancas. Um jogador joga com as pedras brancas,
o outro joga com as pedras pretas. O objetivo do jogo, como o nome sugere -- go-moku em japonês quer dizer cinco pedras -- é colocar cinco 
pedras da mesma cor consecutivamente ou numa mesma linha, ou numa mesma coluna, ou numa diagonal do tabuleiro.

Você está desenvolvendo uma versão digital de uma versão simples do jogo Gomoku, na qual apenas as pedras na vertical e na horizontal
são levadas em conta para determinar o vencedor. Escreva, então, um programa que lê da entrada de dados o estado do tabuleiro.
  A entrada é composta por quinze linhas, cada uma contendo quinze inteiros. Cada inteiro representa o conteúdo de uma célula do tabuleiro.
O número 1 indica uma pedra preta, o número 2 indica uma pedra branca e o número 0 indica que não há pedra na célula.

Seu programa deve imprimir o valor inteiro 1 se o jogador com as pedras pretas venceu,
o inteiro 2 se o jogador com as pedras brancas venceu, ou o número 0 se ainda não há vencedor.



Obs 1: considere que um tabuleiro não possui dois vencedores simultâneos (haverá no máximo um).

Obs 2: quando um problema disser "considere" é porque você não precisa verificar. É um fato verdadeiro... ;-) */

#include <iostream>

int main() {
  int tab[15][15];
  bool achou_vencedor = false;

  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      std::cin >> tab[i][j];
    }
  }

  // testar ver se forma algum jogo na horizontal
  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 11; j++) {
      int player = tab[i][j];
      if (!achou_vencedor && player != 0) {
        bool venceu = true;
        for(int k = 1; k < 5; k++) {
          if (tab[i][j+k] != player) {
            venceu = false;
            break;
          }
        }
        if (venceu) {
          std::cout << player << std::endl;
          achou_vencedor = true;
        }
      }
    }
  }
  if(!achou_vencedor) {
    for(int i = 0; i < 11; i++) {
      for(int j = 0; j < 15; j++) {
        int player = tab[i][j];
        if (!achou_vencedor && player != 0) {
          bool venceu = true;
          for(int k = 1; k < 5; k++) {
            if (tab[i+k][j] != player) {
              venceu = false;
              break;
            }
          }
          if (venceu) {
            std::cout << player << std::endl;
            achou_vencedor = true;
          }
        }
      }
    }
  }

  if(!achou_vencedor) {
    std::cout << 0 << std::endl;
  }

  return 0;
}
