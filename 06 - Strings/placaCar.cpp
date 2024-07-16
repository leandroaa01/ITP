/*
Placa de carro

Escreva um programa em C que leia uma string de até 20 caracteres e em seguida escreva
se essa string representa uma placa válida ( “sim” ou “não” ). Uma string é uma placa válida
se contiver somente e na sequência: 3 letras maiúsculas, hífen e 4 dígitos numéricos.*/

#include <bits/stdc++.h>

int main() {
    std::string placa;
    std::cin >> placa;

    if (placa.size() != 8) {
        std::cout << "não" << std::endl;
        return 0;
    }

    // Verifica as três primeiras letras maiúsculas
    for (int i = 0; i < 3; ++i) {
        if (isupper(placa[i]) == 0) {
            std::cout << "não" << std::endl;
            return 0;
        }
    }

    //esserifica o hífen na posição 3
    if (placa[3] != '-') {
        std::cout << "não" << std::endl;
        return 0;
    }

    // Verifica os quatro últimos dígitos numéricos
    for (int i = 4; i < 8; ++i) {
        if (isdigit(placa[i]) == 0) {
            std::cout << "não" << std::endl;
            return 0;
        }
    }

    std::cout << "sim" << std::endl;

    return 0;
}
