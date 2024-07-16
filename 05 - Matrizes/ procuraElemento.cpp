/*
Procura Elemento na Matriz

Faça um programa que, dados os números n, m (n,m <=30), lê do usuário os valores de uma matriz A de inteiros de dimensão n x m. 
Depois, o programa deve ler um número x e imprimir uma mensagem indicando se a matriz possui algum elemento cujo valor é x. */

#include <iostream>

int main()
{
    int lin, col, n;

    bool elemento = false;

    std::cin >> lin >> col;
    int matriz[lin][col];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> matriz[i][j];
        }
    }

    std::cin>> n;

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
          if(matriz[i][j]==n){
            elemento = true;
          }
        }
    }

    if(elemento == true){
        std:: cout <<"Matriz tem elemento "<< n;
    }else{
        std:: cout <<"Matriz não tem elemento "<< n; 
    }
    
    

    return 0;
}
