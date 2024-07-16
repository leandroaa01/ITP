/*
Você tem um lote de terreno em uma rua, no qual pretende construir um empreendimento. Mas antes de calcular os custos envolvidos,
você gostaria de verificar quantos lotes vazios adicionais a partir do seu lote você pode tentar adquirir para uma futura expansão,
sem passar por outros lotes já ocupados.Para resolver essa questão, você resolveu criar um programa que leia um inteiro n (n≤20n \le 20n≤20​), 
o número de lotes na rua, seguido de n inteiros com 3 valores possíveis:

​° 2: significa o seu lote (assuma que há uma ocorrência e somente uma ocorrência)
° 1: significa que o lote já está ocupado
° 0: significa que o lote está vazio

O seu programa deve escrever quantos lotes vazios você pode tentar adquirir para expandir o seu empreendimento. 
Por exemplo, considere n=7 lotes com os seguintes valores: 0 1 0 0 2 0 1. Neste caso o seu lote está na quinta posição e o programa deve escrever 3,
pois você pode tentar adquirir 2 lotes vazios à esquerda e 1 lote vazio à direita. O lote da primeira posição não deve ser contado, pois no caminho da expansão há um lote ocupado na segunda posição.

Exemplos

Entrada: 10 0 1 0 0 1 0 2 0 0 1

Saída: 3

Entrada: 10 1 0 0 0 2 0 0 0 1 0

Saída: 6*/

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int terra[n];
    int posicao;


    for (int i = 0; i < n; ++i) {
        std::cin >> terra[i];
        if (terra[i] == 2) {
            posicao = i;
        }
    }

    int esquerda = 0, direita = 0;

 // Conta os lotes vazios à esquerda do seu lote
    for (int i = posicao - 1; i >= 0; --i) {
        if (terra[i] == 0) {
            esquerda++;
        } else {
            break; // Interrompe a contagem se encontrar um lote ocupado
        }
    }

    // Conta os lotes vazios à direita do seu lote
    for (int i = posicao + 1; i < n; ++i) {
        if (terra[i] == 0) {
            direita++;
        } else {
            break; // Interrompe a contagem se encontrar um lote ocupado
        }
    }

    // Exibe o total de lotes vazios disponíveis para expansão
    std::cout << esquerda + direita;



    return 0;
}
