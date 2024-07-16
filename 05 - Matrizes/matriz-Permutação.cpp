/*Matriz de permutação (0/1)

​Uma matriz quadrada é chamada matriz de permutação se seus elementos são apenas 0’s e 1’s
e se em cada linha e coluna da matriz existe um único valor 1.  
Escreva um programa que verifica se uma dada matriz quadrada é de permutação ou não.

A primeira linha da entrada deve ser um único valor inteiro N com o tamanho da matriz quadrada. 
Em seguida, as N linhas seguintes conterão N valores inteiros, correspondentes aos valores da matriz.
Seu programa deve enviar para a saída padrão 0, se a matriz não for matriz de permutação, ou 1, se for.

Obs: N será sempre menor ou igual a 20.*/
#include <iostream>

int main()
{
    int lin, col;

    bool identidade = true;

    std::cin >> lin;
    col = lin;
    int matriz[lin][col];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> matriz[i][j];
        }
    }
    
    int contador,soma = lin ;
    for (int i = 0; i < lin; i++) {
        contador = 0; 
        for (int j = 0; j < lin; j++) {
             if (matriz[i][j] !=1 && matriz[i][j]!=0)
                {
                    identidade = false;
                }else{
            if (matriz[i][j] == 1) {
                contador++;
            }
        }
        if (contador > 1) { 
            // Se houver mais de um '1' na linha, desconsidera
            contador = 0;
            soma += -1;
        }
    }
    }

    if(soma != col){
         identidade = false;
        std:: cout << identidade;
    }else{
        std:: cout << identidade;
    }

    return 0;
}
