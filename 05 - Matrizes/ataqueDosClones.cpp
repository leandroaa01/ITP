/*
Ataque dos Clones

Após a ordem 66, os Jedis passaram a ser caçados impiedosamente pelo exército de Clones da República galática, agora sob o comando do Império Sith. 
Àqueles que não sucumbiram no ataque inicial, fugiram para locais isolados do universo, em busca de abrigo e aguardando um momento oportuno para um contra ataque.

Para tentar auxiliar os Jedis, a Aliança Rebelde faz buscas em planetas atacados pelos Clones, na esperança de encontrar sobreviventes.
Como os Jedis são adversários formidáveis, os Clones bombardearam os planetas com ogivas radioativas, na esperança de eliminar os cavaleiros da força à distância.
Após os ataques, a comunicação com o planeta é cortada, porém os Rebeldes conhecem a última posição onde cada Jedi estava escondido.

Seu programa deverá fazer uma leitura de um mapa de radiação do planeta, definido por dois valores inteiros N e M, o tamanho N x M do mapa. 
Em seguida, ele lerá dois valores inteiros, as últimas coordenadas conhecidas do Jedi que estava escondido no planeta. Essas coordenadas
são respectivamente a linha (de 1 até N) e a coluna (de 1 até M) do ponto no mapa.

A partir daí, seu programa deve ler N x M valores inteiros, representando os índices de radiação de um planeta.
Os locais onde as bombas de ataque foram lançados apresentam picos de radiação, ou seja, o valor de radiação é
mais alto do que todos os locais ao redor. Veja esse exemplo de um mapa 3x3:

                                                                                                                2 3 3

                                                                                                                1 8 4

                                                                                                                3 1 2

Podemos ver que houve um ataque na 2° linha e na 2º coluna do mapa, onde o valor é 8, porque é maior do que todos os oito valores em volta.
Todo mapa possui pelo menos uma bomba, e não há bombas em posições adjacentes, porque o império é poderoso mas precisa economizar no arsenal.

Seu programa deverá identificar no mapa e imprimir os locais onde as bombas caíram, e uma mensagem "Descanse na força..." quando
o Jedi for atingido por uma bomba, e "Ao resgate!" quando ele sobreviver aos ataques. Observe os exemplos de entrada e saída para ver o formato correto para impressão dos resultados. */

#include <iostream>

int main() {
    int lin, col; 
    std::cin >> lin >> col;

    int matriz[lin][col];
    
    int colin, cocol; 
    std::cin >> colin >> cocol; 

    // Lendo a matriz
    for (int i = 0; i < lin; i++) { 
        for (int j = 0; j < col; j++) { 
            std::cin >> matriz[i][j]; 
        } 
    }
    int count = 0;
    bool bomba = false;

    // Verificando os valores máximos
    for (int i = 0; i < lin; i++) { 
        for (int j = 0; j < col; j++) {
            bool maior = true;
            // Verificando se matriz[i][j] é maior que todos os seus vizinhos
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < lin && nj >= 0 && nj < col && !(di == 0 && dj == 0)) {
                        if (matriz[i][j] <= matriz[ni][nj]) {
                            maior = false;
                            break;
                        }
                    }
                }
                if (!maior) break;
            }
            if (maior) {
                std:: cout <<"Local "<< count+1 << ": " << i+1 << " " << j+1 << std::endl;
                
                count +=1;
                
                if( i+1 == colin && j+1 == cocol){
                    bomba = true;
                }
            }
      
        }
    } 
           if(bomba == true){
             std:: cout <<"Descanse na Força...";  
             } else{
        std:: cout <<"Ao resgate!";
      }

    return 0;
}
