/*
Clique do mouse (figura convexa)

Problema
Uma nova startup foi selecionada para o processo de incubação no Inova Metrópole (Incubadora do IMD). Eles estão criando um software para auxiliar de engenheiros e arquitetos e precisam de pessoas que conheçam bem como desenvolver softwares de desenho vetorial.

Eles te chamaram para implementar uma parte essencial do projeto: a interface do usuário. Mas, nesse caso, a interface não é feita só de botões e menus. No caso, eles querem que você verifique se o usuário clicou sobre uma das figuras do desenho, que por acaso são definidas por polígonos convexos (possuem ângulos internos menores que 180).

Seu programa deve ler inicialmente dois valores inteiros, N e M. O primeiro indica o número de pontos da figura e o segundo indica o número de cliques do mouse a serem testados sobre a figura. Em seguida, o programa deve ler N linhas, cada uma com dois valores inteiros contendo as coordenadas de um ponto da figura. Esses pontos encontram-se em sequência horária (explicação a seguir). Depois, deve ler os M pontos em que o mouse clicou. Os pontos encontram-se um em cada linha, contendo um caractere e dois valores inteiros. Por exemplo: "A 24 56". O caractere é o identificador do ponto e os valores inteiros são as coordenadas do ponto.

O programa deve enviar para a saída padrão os identificadores dos pontos que foram clicados sobre a figura.

Conhecimento necessário
Você precisa então saber quando um ponto encontra-se no interior de uma figura. Por exemplo, na figura abaixo, definida pela sequência de pontos { 1, 2, 3, 4, 5 }, o ponto A se encontra no interior da figura, enquanto o ponto B não.
https://dimap.ufrn.br/~andre/imgs/pt_fig_1.png

Para resolver este problema, você percebe que, considerando que a sequência de pontos { 1, 2, 3, 4, 5 } segue o sentido horário, o ponto A encontra-se sempre à direita das retas definidas pelos pontos da figura, enquanto o ponto B não. Ou seja, para todas as retas 1-2, 2-3, 3-4, 4-5 e 5-1, o ponto A encontra-se à sua direita, enquanto o ponto B encontra-se à esquerda da reta 4-5, como apresentado na figura abaixo.
https://dimap.ufrn.br/~andre/imgs/pt_fig_2.png

Para saber se um ponto encontra-se à direita ou à esquerda de uma reta, é necessário ver o ângulo que ele forma com a reta, considerando uma outra reta partindo do ponto inicial. Por exemplo, na figura abaixo, a reta 2-C faz um ângulo positivo com a reta 2-3, indicando que o ponto C se encontra à esquerda de 2-3. A reta 2-A faz um ângulo negativo com a reta 2-3, indicando que o ponto A se encontra à direita. A ideia é a mesma para testar o ponto B, que também faz um ângulo negativo com a reta 4-5, indicando que ela se encontra fora da figura.
https://dimap.ufrn.br/~andre/imgs/pt-fig_3.png

Mas não precisamos calcular o ângulo exato entre as retas. Basta usarmos o produto cruzado entre seus respectivos vetores. Tecnicamente, o produto cruzado de dois vetores no 3D é um outro vetor 3D, perpendicular aos vetores iniciais. Como estamos no plano (2D), a única coordenada do produto cruzado que não será nula será a coordenada Z. Assim, podemos representar o produto cruzado definidos pelos vetores 2-3 x 2-C pelo valor de Z, calculado pela expressão:

​z=x1.y2−y1.x2z = x1.y2 - y1.x2z=x1.y2−y1.x2​​

onde:
  x1 é o X do 1º vetor, calculado pela diferença das coordenadas X dos pontos 3 e 2 (x3−x2x_3 - x_2x3​−x2​​)
  y1 é o Y do 1º vetor, calculado pela diferença das coordenadas Y dos pontos 3 e 2 (y3−y2y_3 - y_2y3​−y2​​)
  x2 é o X do 2º vetor, calculado pela diferença das coordenadas X dos pontos C e 2 (xc−x2x_c - x_2xc​−x2​​)
  y2 é o Y do 2º vetor, calculado pela diferença das coordenadas Y dos pontos C e 2 (yc−y2y_c - y_2yc​−y2​​)

Quando o valor de z for negativo é porque o ponto se encontra à direita. Quando for positivo é porque se encontra à esquerda. Logo, quando for 0 é porque se encontra sobre a reta.
Ideia
Seu programa deve, então, ler os valores de N e M, e depois armazenar os N pontos em dois arrays: um para as coordenadas X e outro para as coordenadas Y. Em seguida, para cada um dos M pontos seguintes, você deve testá-lo sobre os arrays de pontos armazenados, sabendo que os pontos vão definir as sequências de retas a serem usadas como teste. Se o valor calculado de z for negativo em todos os testes, você imprime o caractere indicador do ponto.

Para organizar o código, escreva funções:

Para calcular o valor z (dados dois vetores);
Para testar se um ponto se encontra sobre ou à direita de uma reta (dados os dois pontos reta e o terceiro para testar);
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
        int j;
        bool dentro = true;
        for (j = 0; j < n-1; ++j) {
            int vetor[2];
            int vetorLetra[2];
            int z;

            vetor[0] = x[j + 1] - x[j];
            vetor[1] = y[j + 1] - y[j];

            vetorLetra[0] = coX[i] - x[j];
            vetorLetra[1] = coY[i] - y[j];

            z = (vetor[0] * vetorLetra[1]) - (vetor[1] * vetorLetra[0]);

            if (z > 0) { // Se o produto cruzado for positivo, o ponto está fora da figura
                dentro = false;
                z=0;
                break;
            }
            z=0;
        }
        if (dentro) { // Se o ponto estiver dentro da figura, imprime o identificador
            std::cout << letra[i] << std::endl;
        }
    }

    return 0;
}
