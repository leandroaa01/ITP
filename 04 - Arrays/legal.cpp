/*
Vetor Legal

Um vetor é legal caso a diferença entre um elemento e seu antecessor seja par. Escreva um programa que lê um inteiro positivo nnn​ e em seguida os nnn valores do vetor.
  Então, exibe a mensagem "Legal" quando o vetor for legal, e "Chato" caso contrário. Considere 0 par.

Exemplos:

​[-2, -4, 10, 3, 5]​​   ​Não é Legal, pois:
                      3 - 10 = -7;​
​[5, 7, 9, 13, 27]​    É Legal, pois:
                      7 - 5  == 2
                      9 - 7 == 2
                      13 - 9 == 4
                      9 - 13 == 14 */

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int seq[n];
    bool teste = false;

    for (int &v : seq) {
        std::cin >> v;
    }

    for (int i = 1; i < n; i++) {
        if ((seq[i] - seq[i - 1]) % 2 == 0 || (seq[i] == 0 && seq[i - 1] == 0)) { 
            teste = true;
        } else {
            teste = false;
            break; 
    }
        
    }

    if (teste) {
        std::cout << "Legal";
    } else {
        std::cout << "Chato";
    }

    return 0;
}
