/*Matriz como vetor

Em C, uma matriz declarada estaticamente é alocada em uma região contínua na memória, em um único bloco de memória no computador.
Ou seja, mesmo que a matriz tenha duas (ou mais) dimensões, ela será armazenada em uma sequência de endereços como se fosse um vetor (array de uma única dimensão).

Logo, podemos alocar um vetor com 100 valores inteiros e acessá-lo como se fosse uma matriz de 10x10... ou 20x5... ou 4x25... Isso significa que,
dependendo das dimensões da matriz, o elemento que se encontra por exemplo na 2ª linha e 2ª coluna será diferente.

Veja por exemplo o vetor de 6 elementos:  1, 2, 3, 4, 5, 6. Se ele for tratado como uma matriz 2x3, será:

1 2 3

4 5 6

...e o elemento na 2ª linha e 2ª coluna será 5. Porém, se ele for tratado como uma matriz 3x2, será:

1 2

3 4

5 6

...e o elemento na 2ª linha e 2ª coluna será 4. 

Escreva um programa que lê da entrada-padrão uma sequência de valores e armazena-os em um vetor (array de uma única dimensão) e imprime o valor correspondente 
a uma determinada posição, como se os valores estivessem em uma matriz de determinada dimensão (no exemplo acima, a posição indicada corresponde ao valor 5 se 
fosse uma matriz 2x3 ou 4 se fosse 3x2).

A entrada de dados consiste em quatro linhas. A primeira indica a quantidade N de valores a serem lidos no array.
A segunda linha contém os N valores inteiros do array. A terceira linha contém dois valores inteiros correspondentes
ao número de linhas (L) e colunas da matriz (C) (a relação L x C = N será sempre verdadeira). 
Por fim, a quarta linha contém o índice da linha e da coluna do valor a ser consultado (o índice inicial é 0!). Seu programa deve enviar para a saída de dados o valor consultado. */
#include <iostream>
int main() {
    int n;
    std::cin >> n;

     int array[n];

    for (int &v : array) {
        std::cin >> v;
    }

    int l, c;
    std::cin >> l >> c;

    int  matriz[l][c];

    int k = 0;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            matriz[i][j] = array[k++];
        }
    }

    int linha, coluna;
    std::cin >> linha >> coluna;

    std::cout << matriz[linha][coluna] << std::endl;

    return 0;
}

