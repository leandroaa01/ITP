/*
Batalha naval - 1 tiro

Batalha naval é um jogo clássico de papel e caneta em que os jogadores devem posicionar seus navios em uma grid (malha) 
escondida dos demais jogadores e depois, a cada turno, eles escolhem uma posição da grid do adversário para atirar. Vence quem afundar todos os navios do adversário.

Na sua versão do jogo, os navios são sempre retos, dispostos obrigatoriamente na horizontal ou na vertical, e podem ocupar de 1 a 5 casas da grid. É importante ressaltar
que eles não podem "se tocar", ou seja sempre há pelo menos um espaço de "água" entre os navios. Eles podem, entretanto, se encontrar nas "bordas" da grid, como ilustrado na figura abaixo.
figura: https://upload.wikimedia.org/wikipedia/commons/b/bf/Schiffeversenk.jpg

Um navio é afundado quando todos as casas que ele ocupa forem atingidas por tiros. Assim, a cada tiro, há 3 possibilidades de resultado: 1) errou (foi na "água");
2) acertou em uma parte de um navio, mas ainda não o afundou completamente; 3) acertou em uma parte de um navio, afundando-o completamente.

Escreva um programa para verificar o resultado de um tiro em um grid. A primeira linha da entrada de dados possui dois valores A e L, correspondentes à altura (A) e largura (L) da grid.
Em seguida, haverá A linhas, cada uma contendo L valores, definindo o conteúdo das células da grid, cujos valores são 0, se for água, ou 1, se for parte de um navio. 
Por fim, uma última linha possui dois valores inteiros correspondes respectivamente à linha e à coluna do tiro. 
Os valores da linha e coluna começam de 1, como nas colunas da figura acima (na imagem, a linha A equivale a 1, B vale 2 e assim por diante).

A saída do programa deverá ser: 1 se o tiro acertou na "água", 2 se acertou em uma parte de um navio, mas ainda não o afundou
completamente ou 3 se acertou em uma parte de um navio,afundando-o completamente.

Obs1: As dimensões da grid A e L serão sempre menores ou igual a 20.

Obs2: As coordenadas do tiro serão sempre dentro da grid (não precisa verificar).*/
#include <bits/stdc++.h>

int main()
{
    int alt, larg, tcol,tlin;

    std::cin >> alt >> larg;

    int tabuleiro[alt][larg];
    for (int i = 0; i < alt; i++)
    {
        for (int j = 0; j < larg; j++)
        {
            std::cin >> tabuleiro[i][j];
        }
    }
    std::cin >> tcol >> tlin;
    tcol--;
    tlin --;

    if(tabuleiro[tlin][tcol] == 0){
        std:: cout << "1";
    }else{
        if((tlin-1 < 0||tabuleiro[tlin-1][tcol] ==0 ) &&
        (tlin >= alt || tabuleiro[tlin+1][tcol] == 0) &&
        (tcol<1||tabuleiro[tlin][tcol-1] == 0 )&&
       (tcol>=larg ||tabuleiro[tlin][tcol+1] == 0)
        ){
              std:: cout << "2";
        }else{
              std:: cout << "3";
        }
    }

    return 0;
}
