/*
Clique do mouse (figura qualquer)

Problema
Uma nova startup foi selecionada para o processo de incubação no Inova Metrópole (Incubadora do IMD). Eles estão criando um software para auxiliar de engenheiros e arquitetos e precisam de pessoas que conheçam bem como desenvolver softwares de desenho vetorial.

Eles te chamaram para implementar uma parte essencial do projeto: a interface do usuário. Mas, nesse caso, a interface não é feita só de botões e menus. No caso, eles querem que você verifique se o usuário clicou sobre uma das figuras do desenho, que por acaso são definidas por polígonos quaisquer.

Seu programa deve ler inicialmente dois valores inteiros, N e M. O primeiro indica o número de pontos da figura e o segundo indica o número de cliques do mouse a serem testados sobre a figura. Em seguida, o programa deve ler N linhas, cada uma com dois valores inteiros contendo as coordenadas de um ponto da figura. Esses pontos encontram-se em sequência horária (explicação a seguir). Depois, deve ler os M pontos em que o mouse clicou. Os pontos encontram-se um em cada linha, contendo um caractere e dois valores inteiros. Por exemplo: "A 24 56". O caractere é o identificador do ponto e os valores inteiros são as coordenadas do ponto.

O programa deve enviar para a saída padrão os identificadores dos pontos que foram clicados sobre a figura.

Conhecimento necessário
Você precisa então saber quando um ponto encontra-se no interior de uma figura qualquer. Por exemplo, na figura abaixo, definida pela sequência de pontos { 1, 2, 3, 4, 5, 6, 7 }, os pontos A e B se encontram no interior da figura, enquanto os pontos C, D e E não.
https://dimap.ufrn.br/~andre/imgs/pt_fig_4.png

Para resolver este problema, você percebe que se você considerar uma semirreta horizontal partindo do ponto a ser testado, ela sempre vai cruzar um número ímpar de lados da figura quando o ponto se encontra dentro da mesma, ou um número par quando o ponto se encontra fora da figura. Veja abaixo como seria nos pontos citados. As horizontais de A e B cruzam 3 e 1 vezes os lados da figura, respectivamente, enquanto C, D e E cruzam 4, 2 e 0, respectivamente. Então, basta calcular os cruzamentos e se for ímpar é porque está dentro, caso contrário está fora.​
https://dimap.ufrn.br/~andre/imgs/pt_fig_5.png

Para saber se duas retas se cruzam, você pode verificar se os pontos de suas extremidades se encontram em lados opostos (à direita e à esquerda) uma da outra. Por exemplo, na figura abaixo a reta AB se cruza com a reta CD porque o ponto D encontra-se à esquerda de AB e o ponto C à direita. Além disso, o ponto A encontra-se à esquerda de CD e o ponto B à direita de CD.
https://dimap.ufrn.br/~andre/imgs/pt_fig_6.png

Para saber se um ponto encontra-se à direita ou à esquerda de uma reta, é necessário ver o ângulo que ele forma com a reta, considerando uma outra reta partindo do ponto inicial. Por exemplo, na figura abaixo, a reta AD forma um ângulo positivo com a reta AB, indicando que o ponto D se encontra à esquerda de AB. A reta AC forma um ângulo negativo com a reta AB, indicando que o ponto C se encontra à direita. Logo, os pontos C e D encontram-se em lados opostos da reta AB. Da mesma forma, a reta CA encontra-se à esquerda de CD e a reta CB encontra-se à direita. Logo, os pontos A e B encontram-se em lados opostos da reta CD. Quando isso ocorre, podemos dizer que a reta AB cruza a reta CD.
https://dimap.ufrn.br/~andre/imgs/pt_fig_7.png

Mas não precisamos calcular o ângulo exato entre as retas. Basta usarmos o produto cruzado entre seus respectivos vetores. Tecnicamente, o produto cruzado de dois vetores no 3D é um outro vetor 3D, perpendicular aos vetores iniciais. Como estamos no plano (2D), a única coordenada do produto cruzado que não será nula será a coordenada Z. Assim, podemos representar o produto cruzado definidos pelos vetores AB x AC pelo valor de Z, calculado pela expressão:

​z=x1.y2−y1.x2z = x1.y2 - y1.x2z=x1.y2−y1.x2​​

onde:
  x1 é o X do 1º vetor, calculado pela diferença das coordenadas X dos pontos B e A (xb−xax_b - x_axb​−xa​​)
  y1 é o Y do 1º vetor, calculado pela diferença das coordenadas Y dos pontos B e A (yb−yay_b - y_ayb​−ya​​)
  x2 é o X do 2º vetor, calculado pela diferença das coordenadas X dos pontos C e A (xc−xax_c - x_axc​−xa​​)
  y2 é o Y do 2º vetor, calculado pela diferença das coordenadas Y dos pontos C e A (yc−yay_c - y_ayc​−ya​​)

Quando o valor de z for negativo é porque o ponto se encontra à direita. Quando for positivo é porque se encontra à esquerda. Logo, quando for 0 é porque se encontra sobre a reta.

Obs: A estratégia descrita aqui tem casos exceção, quando o cruzamento ocorre exatamente sobre a extremidade de uma reta. Porém, não iremos tratar esses casos aqui.
Ideia
Seu programa deve, então, ler os valores de N e M, e depois armazenar os N pontos em dois arrays: um para as coordenadas X e outro para as coordenadas Y. Em seguida, para cada um dos M pontos seguintes, gere uma nova reta horizontal partindo do ponto até o maior valor de X da figura. Por exemplo, se o ponto for (3, 4) e o valor da maior coordenada X dos pontos da figura (Xmax) for 40, considere então uma reta indo de (3, 4) até (40, 4). Veja que o Y é mantido porque é uma reta horizontal. Teste então essa reta com o lado da figura e vá somando a quantidade de cruzamentos calculados. Se a soma for ímpar é porque o ponto está dentro da figura e seu caractere identificador deve ser impresso.

Para organizar o código, escreva funções:

Para calcular o valor z (dados dois vetores);
Para testar se um ponto se encontra sobre ou à direita de uma reta (dados os dois pontos reta e o terceiro para testar);
Para testar se duas retas se cruzam (dadas as coordenadas X e Y dos dois pontos);
Para testar se um ponto se encontra dentro de uma figura (dado o ponto e dois arrays das coordenadas da figura).
Obs: Lembre-se de testar a reta formada pelo último e o primeiro pontos do array.*/

#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n >> m;

    int x[n], y[n], coX[m], coY[m];
    std::string letra[m];

    // Leitura dos pontos da figura
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i] >> y[i];
    }

    // Leitura dos pontos clicados
    for (int i = 0; i < m; ++i) {
        std::cin >> letra[i] >> coX[i] >> coY[i];
    }

    // Verificação de quais pontos clicados estão dentro da figura
    for (int i = 0; i < m; ++i) {
        int cruzamentos = 0; // Inicializa o número de cruzamentos como zero
        for (int j = 0; j < n; ++j) {
            int proximo = (j + 1) % n; // Índice do próximo ponto (considerando que o último ponto se conecta ao primeiro)
            
            // Verifica se a reta horizontal a partir do ponto clicado cruza o lado da figura
            if ((y[j] <= coY[i] && coY[i] < y[proximo]) || (y[proximo] <= coY[i] && coY[i] < y[j])) {
                // Calcula a coordenada X onde a reta horizontal cruza o lado da figura
                double intersectX = (double)(x[proximo] - x[j]) * (coY[i] - y[j]) / (y[proximo] - y[j]) + x[j];
                if (coX[i] < intersectX) {
                    cruzamentos++; // Incrementa o número de cruzamentos se a interseção estiver à direita do ponto clicado
                }
            }
        }
        
        // Se o número de cruzamentos for ímpar, o ponto está dentro da figura
        if (cruzamentos % 2 == 1) {
            std::cout << letra[i] << std::endl;
        }
    }

    return 0;
}
