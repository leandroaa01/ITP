/*
Redução de uma matriz

Escreva um programa para reduzir o tamanho de uma matriz de valores inteiros realizando uma média de cada 4 células quadradas.
Assim, o tamanho da matriz L×CL \times CL×C​ será reduzida para ⌊L/2⌋×⌊C/2⌋\lfloor L/2 \rfloor \times \lfloor C/2 \rfloor⌊L/2⌋×⌊C/2⌋. ​Por exemplo, uma matriz 4 x 4 a seguir:

1 8 5 3 
2 5 9 5 
1 3 4 7
6 2 3 2

...resultará na matriz 2 x 2:

4 5
3 4

... uma vez que a média dos valores no 1º quadrante, (1 + 8 + 2 + 5) / 4 é 4, a média no 2º quadrante, (5 + 3 + 9 + 5) / 4 é 5,5,
mas como trata-se de uma matriz de inteiros, considera-se apenas a parte inteira, a média do 3º quadrante, (1 + 3 + 6 + 2) / 4 é 3, e a média do último quadrante, (4 + 7 + 3 + 2) / 4, é 4.

Como estão sendo calculados a média a cada 4 valores (duas linhas e duas colunas), a matriz resultante do matriz a seguir:

​1 8 5 3 2
​2 5 9 5 7
​1 3 4 7 1
​6 2 3 2 9
3 6 1 2 8 

...continuaria sendo:

4 5
​3 4

...pois a última linha e última coluna seria desprezada (não há par para formar com elas).

​A entrada do programa consiste incialmente de uma linha com dois valores inteiros L e C contendo o número de linhas e colunas da matriz,
respectivamente. Em seguida, haverá L linhas com C valores cada, representando os dados da matriz. A saída do seu programa deverá ser a matriz reduzida.*/

#include <iostream>

using namespace std;

int main() {
  
    
     int L, C;
    cin >> L >> C;
    
    

    // Lendo os valores da matriz
    int matriz[L][C];
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matriz[i][j];
        }
    }
    // Lendo os valores da matriz
   

    // Reduzindo a matriz e calculando a média
    int novaL = L / 2;
    int novaC = C / 2;
    int matrizReduzida[novaL][novaC];
    for (int i = 0; i < novaL; ++i) {
        for (int j = 0; j < novaC; ++j) {
            int soma = matriz[2*i][2*j];
            int elementos = 1;
            if (2*i + 1 < L) {
                soma += matriz[2*i+1][2*j];
                ++elementos;
            }
            if (2*j + 1 < C) {
                soma += matriz[2*i][2*j+1];
                ++elementos;
            }
            if (2*i + 1 < L && 2*j + 1 < C) {
                soma += matriz[2*i+1][2*j+1];
                ++elementos;
            }
            matrizReduzida[i][j] = soma / elementos;
        }
    }

    // Imprimindo a matriz reduzida
    for (int i = 0; i < novaL; ++i) {
        for (int j = 0; j < novaC; ++j) {
            cout << matrizReduzida[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
