/*
Ordenação (bubble sort)

Em várias situações, precisamos ordenar informações. Um dos algoritmos de ordenação mais simples (de implementar) realiza sucessivas trocas entre valores consecutivos levando,
a cada iteração, o maior elemento para o fim da sequência. Assim, na primeira iteração, o maior elemento vai para sua posição ordenada (último).
Na segunda iteração, o segundo maior vai para sua posição (penúltimo). Na terceira iteração, será a vez do antepenúltimo e assim por diante.

Esse algoritmo, também conhecido como bubble sort, é descrito em pseudocódigo da seguinte forma:

algoritmo bubble_sort(seja A um array de n valores)
   repita
   |  para i de 1 até n-1
   |  |  se A[i-1] > A[i] então
   |  |  |  troca os valores de A[i-1] e A[i]
   |  |  fim_se
   |  fim_para
   enquanto houver troca de valores no laço interno
fim_algoritmo

Implemente este algoritmo e imprima o estado de uma sequência de valores para compreender como ele funciona.

Entrada

O seu programa deve ler da entrada-padrão um valor inteiro N seguido de N valores inteiros.

Saída

A saída consiste em várias linhas, cada uma contendo os valores da sequência na iteração corrente, durante a execução do algoritmo.
A primeira linha deve imprimir a sequência original (não ordenada) enquanto a última linha deve imprimir os valores da sequência em ordem crescente. */

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int array[n];

    // Leitura dos valores
    for (int &v : array) {
        std::cin >> v;
    }

    // Imprime a sequência original
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Algoritmo de ordenação bubble sort
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int troca = array[j];
                array[j] = array[j + 1];
                array[j + 1] = troca;
                trocou = true;
            }
        }
        // Se não houve trocas nesta iteração, o array já está ordenado
        if (!trocou) {
            break;
        }
        // Imprime a sequência após cada iteração
        for (int k = 0; k < n; k++) {
            std::cout << array[k] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
