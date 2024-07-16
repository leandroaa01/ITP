/*
Multiplexador de strings

Um multiplexador é dispositivo que combina as sinais de múltiplas fontes em um único canal de saída. Crie um programa que simula um multiplexador para dois canais de entrada, A e B.
Cada canal de entrada deverá receber uma string de até 40 caracteres. A saída C do multiplexador será os caracteres alternados de A e B. 
Caso um dos canais de entrada se torne ocioso (sem dados a processar), o canal de saída será ocupado pelos dados do canal remanescente. Exemplo: A=abc; B=defgh; C=adbecfgh*/

#include <iostream>
#include <string>

int main() {
    std::string a, b, c;

    std::getline(std::cin, a);
    std::getline(std::cin, b);

    size_t len_a = a.size();
    size_t len_b = b.size();
    size_t max_len = std::max(len_a, len_b);

    for (size_t i = 0; i < max_len; i++) {
        if (i < len_a) {
            c += a[i];
        }
        if (i < len_b) {
            c += b[i];
        }
    }
    
    std::cout << c << std::endl;

    return 0;
}
