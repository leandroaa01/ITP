/*
Sugestões de amizade

​Você foi contratado para ajudar na implementação de uma rede social que conta com M usuários cadastrados. Um recurso que você quer implementar é a sugestão de amigos.
Um usuário B deverá ser sugerido para A se eles não forem amigos, mas ambos possuirem pelo menos um amigo em comum.

As amizades estão armazenadas em uma matriz M × M de inteiros, onde o valor aij é igual a 1 se o usuário i (0 ≤ i < M) for amigo do usuário j (0 ≤ j < M)
e 0 caso contrário. Assuma que a matriz sempre é simétrica, então aij = aji. Além disso considera-se que não há uma conexão de amizade para si mesmo, ou seja: aii = 0.

Implemente um programa que leia um inteiro M (M ≤ 100), seguidos de M × M inteiros e um inteiro x. 
O programa deve escrever todas as sugestões de amizades para o usuário x em ordem numérica crescente.*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int M;
    cin >> M;

    // Criar matriz de amizades
    int matriz[M][M];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matriz[i][j];
        }
    }

    int usuario;
    cin >> usuario;

    int sugestoes[M];
    int numSugestoes = 0;

    // Verificar sugestões de amizade para o usuário dado
    for (int i = 0; i < M; ++i) {
        if (i != usuario && matriz[usuario][i] == 0) {
            bool temAmigoEmComum = false;
            for (int j = 0; j < M; ++j) {
                if (matriz[usuario][j] == 1 && matriz[i][j] == 1) {
                    temAmigoEmComum = true;
                    break;
                }
            }
            if (temAmigoEmComum) {
                sugestoes[numSugestoes] = i;
                numSugestoes++;
            }
        }
    }

    // Ordenar sugestões em ordem crescente
    sort(sugestoes, sugestoes + numSugestoes);

    // Imprimir sugestões
    for (int i = 0; i < numSugestoes; ++i) {
        cout << sugestoes[i] << " ";
    }
    cout << endl;

    return 0;
}
