/*
Uma brincadeira muito popular entre crianças velhas é a adedonha:
 as crianças colocam valores numéricos com os dedos para escolher
 uma das letras do alfabeto, e então precisam responder palavras de
 uma categoria de informações escolhidas que começam com aquela letra.

Por exemplo, se a categoria for Personagens de Naruto e a soma dos dedos
colocados for 11, então dará a letra K, e o pessoal vai começar a responder Kaguya, Kakashi, etc...

Para ajudar os vários pais cansados de jogar adedonha, vocês
 vão fazer um programa que facilita pelo menos um dos trabalhos dos jogadores:
  a contagem de dedos para saber qual é a letra.

O seu programa receberá 4 valores inteiros, correspondendo
a quantidade de dedos que foram colocados por cada um de quatro
 jogadores (sempre serão 4). O valor desses dedos pode ser de 0
 (não colocou nenhum) até 10. Seu programa então deve imprimir uma mensagem no seguinte formato:

- "Ei! Ninguém colocou nada!" - caso o total de dedos colocado seja 0.

- "Letra: @" - onde @ é a letra a ser impressa (A, B, C, D....Z, sempre maiúscula).
 Essa impressão ocorre quando o total de dedos colocados for maior que zero.

Atente para os casos de teste para ver a formatação da entrada e saída do programa!


*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;

    if (sum != 0)
    {
        cout << "Letra: " << char(65 + ((sum - 1) % 26)) << endl;
    }
    else
    {
        cout << "Ei! Ninguém colocou nada!\n";
    }
    return 0;
}
