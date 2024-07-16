/*
Desvio de fluxo

​Um muro possui N colunas, cada uma com um cano de onde sai um fluxo de água. No muro há canaletas que desviam a água para a coluna da esquerda ou da direita,
conforme ilustra imagem ao lado. O fluxo de água percorre M linhas até ser escoado no ralo de uma das colunas. O muro é especificado por uma matriz M × N,
onde um 0 representa um espaço livre, 1 representa uma canaleta que desvia a água para a coluna da esquerda e 2 representa uma canaleta que desvia a água para 
a coluna da direita. Implemente em C um programa que leia um inteiro M, um inteiro N (M ≤ 10, N ≤ 10), seguidos de M × N inteiros com a especificação do muro e 
um inteiro x que representa a origem do fluxo. A saída consiste na coluna do ralo onde a água que sai do cano da coluna x escoa ou a string “ops” c
aso o fluxo de água saia dos limites do muro. Assuma que o muro é tal que não há uma canaleta imediatamente do lado da outra.
exemplo: https://www.dimap.ufrn.br/~rafaelbg/canos.png
*/

#include <bits/stdc++.h>

int main()
{
    int lin, col;

    std::cin >> lin >> col;

    int matriz[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matriz[i][j];
        }
    }
    int x ;
    std:: cin >> x;

   
        for (int j = 0; j < lin; j++)
        { 
            if (matriz[j][x]==1){
                x = x-1;
            }else if( matriz[j][x]== 2){
                x = x+1;
           
            }
        }if( x < 0 || x>= col){
                std:: cout << "ops";
            }else{
        std:: cout << x;}
    
    return 0;
}
