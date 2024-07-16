/*
 - Bola de Ouro

Em breve, será divulgado o prêmio da "Bola de Ouro" (da revista France Football). Entre os finalistas, estão craques como C.
Ronaldo, Messi, Lewandowski, Haaland, Mbappé, De Bruyne, Suárez... , sendo Neymar o único brasileiro da lista (bem... Jorginho joga pela Itália). 
Há uma grande ansiedade para saber quem será o ganhador do prêmio (ansiedade patrocinada pelos clubes e canais de TV 😉), mas a principal motivação é
tirar onda com os amigos 😂... e reservar uma grana para bebida e petiscos durante algum jogo que vocês verão juntos. 

Para você não ficar perdido nos valores (e eventualmente perder um amigo), você pensa em fazer um pequeno programa para te auxiliar na contabilização das apostas.

O programa deve ler da entrada padrão inicialmente um valor inteiro N com o número de amigos que irá participar do bolão. Em seguida as apostas serão feitas, 
cada uma em uma linha separada, contendo dois valores inteiros. O primeiro é o valor em real da aposta e o segundo é um índice representando um jogador.
Este índice vai de 1 a 30 (total de finalistas). Ao término das apostas, o índice indicando o jogador ganhador da Bola de Ouro deve ser lido da entrada padrão.

Seu programa deve, então, imprimir o total de reais apostados no bolão, os ganhadores com seus respectivos montantes e o valor a ser reservado para
bebida e petiscos (um valor inteiro truncado correspondente a 10% do total das apostas). Os valores de cada ganhador são calculados em função da quantia apostada e do valor reservado para a bebida e petiscos.

Por exemplo, digamos que apenas três amigos participaram do bolão. O 1º deles apostou R$ 100 no jogador 15, o 2º apostou R$ 50 no jogador 10 e o 3º apostou R$ 35 no jogador 15 também. 
Digamos que o jogador 15 ganhou a Bola de Ouro. Então, teríamos um total de R$ 185 apostados. Desses, R$ 18 serão destinados a bebida e petiscos e os R$ 167 restante serão distribuídos entre os apostadores 1 e 3.
O primeiro fez uma aposta de R$ 100 e o outro de R$ 35, logo os valores revertidos para eles seguirão a mesma proporção. Seu programa não lida com centavos. Assim, o apostador 1 receberá R$ 123 e o apostador 3 receberá R$ 43.
Veja que sobrou R$ 1 dos centavos que não foram para os apostadores. Este valor será revertido para a bebida e pestiscos, totalizando agora R$ 19.

Porém, se não houver aposta ganhadora, o dinheiro da bebida e petiscos (10%) será reservado e o restante é distribuído para todos os apostadores seguindo a proporção de suas apostas.
Por exemplo, se seus amigos fizeram as apostas indicadas no parágrafo anterior, mas o jogador a ganhar a Bola de Ouro foi o jogador 1 (ou seja, nenhuma aposta vencedora), 
então o apostador 1 receberá de volta R$ 90, o apostador 2 R$ 45 e o 3 R$ 31, restando novamente R$ 19 para os comes e bebes.

Seu programa deverá enviar para a saída padrão esses valores, seguindo o formado apresentado nos exemplos e considerando que os índices dos apostadores seguem a ordem em que eles apostaram, começando do índice 1. 
Assim, "Apostador 1" foi quem fez a 1ª aposta, "Apostador 2" a 2ª e assim por diante.*/


#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;

    int apostas[n], jogadores[n];

    int totalApostado = 0;

   
    for (int i = 0; i < n; ++i) {
        std::cin >> apostas[i] >> jogadores[i];
        totalApostado += apostas[i];
    }

    int indiceGanhador;
    std::cin >> indiceGanhador;

    int valorBebidasPetiscos =  round(totalApostado * 0.10);
    int valorPremio = totalApostado - valorBebidasPetiscos;

    
    int totalApostadoGanhador = 0;
    for (int i = 0; i < n; ++i) {
        if (jogadores[i] == indiceGanhador) {
            totalApostadoGanhador += apostas[i];
        }
    }
    std::cout << "Total: R$ " << totalApostado << std::endl;
    // Se houve ganhador, calcular os ganhos dos apostadores
    if (totalApostadoGanhador > 0) {
        for (int i = 0; i < n; ++i) {
            if (jogadores[i] == indiceGanhador) {
                double proporcaoAposta = (double) apostas[i] / totalApostadoGanhador;
                int ganhoApostador =round(proporcaoAposta * valorPremio);
                std::cout << "Apostador " << i + 1 << ": R$ " << ganhoApostador << std::endl;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            int ganhoApostador = apostas[i] * 0.90;
            std::cout << "Apostador " << i + 1 << ": R$ " << ganhoApostador << std::endl;
        }
    }

    std::cout << "Bebidas e petiscos: R$ " << valorBebidasPetiscos << std::endl;

    return 0;
}
