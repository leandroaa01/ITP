/*
Você comprou um ingresso para assistir a um filme no cinema. Você lembrou que toda vez que precisa se levantar para ir comprar pipoca,
tem que pedir licença para todas as pessoas do seu assento até uma das duas saídas da fileira. Como você quer incomodar o menor número 
de pessoas possível, resolveu escrever um programa para ajudar a decidir para qual lado você deve sair. O seu programa deve ler um 
inteiro n (n≤20n \le 20n≤20​), o número de assentos na fileira, seguido de n inteiros com 3 valores possíveis:

2: significa que é o seu assento (assuma que há uma ocorrência e somente uma ocorrência)
1: significa que o assento está ocupado com alguma outra pessoa
0: significa que o assento está livre
O seu programa deve escrever "direita" se houver menos pessoas à direita do seu assento, "esquerda" se houver menos pessoas à esquerda do seu assento e "tanto faz" se houver a mesma quantidade de pessoas para ambos os lados.

Por exemplo, considere n=7n = 7n=7​ e os assentos com os seguintes valores: 0 0 0 1 2 1 1. Neste caso o programa deve escrever "esquerda" pois há um menor número de pessoas à esquerda do seu assento (há 1 à esquerda e 2 à direita).*/

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> assentos(n);
    int posicao;

    // Lendo os valores dos assentos e identificando a posição do seu assento
    for (int i = 0; i < n; ++i) {
        std::cin >> assentos[i];
        if (assentos[i] == 2) {
            posicao = i;
        }
    }

    int count_esquerda = 0, count_direita = 0;

    // Contando o número de pessoas à esquerda e à direita do seu assento
    for (int i = 0; i < posicao; ++i) {
        if (assentos[i] == 1) {
            count_esquerda++;
        }
    }
    for (int i = posicao + 1; i < n; ++i) {
        if (assentos[i] == 1) {
            count_direita++;
        }
    }

    // Decidindo para qual lado sair
    if (count_esquerda < count_direita) {
        std::cout << "esquerda";
    } else if (count_esquerda > count_direita) {
        std::cout << "direita";
    } else {
        std::cout << "tanto faz";
    }

    return 0;
}
