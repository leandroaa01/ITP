/*
Ordenação (exchange sort)

Em várias situações, precisamos ordenar informações. Um dos algoritmos de ordenação mais simples (de implementar)
realiza sucessivas trocas levando, a cada iteração, o menor elemento para o início da sequência. Assim, na primeira iteração,
o menor elemento vai para sua posição ordenada (o início da sequência). Na segunda iteração, o segundo menor vai para a segunda posição. Na terceira iteração, será a vez do terceiro e assim por diante.

Esse algoritmo, também conhecido como exchange sort (uma variante do bubble sort), é descrito em pseudocódigo da seguinte forma:

algoritmo exchange_sort(seja A um array de n valores)
   para i de 0 até n-2
   |  para j de i+1 até n-1
   |  |  se A[i] > A[j] então
   |  |  |  troca os valores de A[i] e A[j]
   |  |  fim_se
   |  fim_para
   fim_para
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

    // Algoritmo de ordenação exchange sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                int troca = array[i];
                array[i] = array[j];
                array[j] = troca;
            }
        }
        // Imprime a sequência após cada iteração
        for (int k = 0; k < n; k++) {
            std::cout << array[k] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
