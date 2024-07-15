/*
Podemos obter formas geométricas com caracteres. Faça um programa que dado um inteiro
ele imprima no formato de um X na quantidade de linhas -1 do inteiro, com a letra selecionada.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char letra;

 
    cin >> n >> letra;
    n=n-1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == j || i + j == n - 1) {
                cout << letra;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
