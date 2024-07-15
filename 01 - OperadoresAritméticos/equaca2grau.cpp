/*Escreva um programa que lê os coeficientes de uma equação de 2o 
grau e o valor da incógnita (x). Em seguida, o programa deverá imprimir
 os dois valores resultantes da função (y' e y"). Por exemplo, se os coeficientes a, b e c 
 da equação forem 2, 5 e 2 respectivamente, teremos a equação 2x2 + 5x + 2 = 0. Logo, teremos
as possíveis soluções:

x' = -2

x" = -0.5

A entrada de dados consiste em uma linha contendo os coeficientes a, b e c de uma equação do 2o grau.
 A saída de dados serão 2 números reais com precisão de 2 casas decimais, sem arredondamento.

Obs: para calcular a raiz quadrada de um número, você pode usar as funções sqrt() ou pow() da biblioteca padrão do C++. Para isso, inclua o arquivo de cabeçalho <cmath>.
*/

#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // Calculando o discriminante
    double delta = b * b - 4 * a * c;

   
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        // Imprimindo as raízes
        cout << std::fixed;
        cout.precision(2);
        cout << x1 <<" "<<  x2<< endl;
       

    return 0;
}
