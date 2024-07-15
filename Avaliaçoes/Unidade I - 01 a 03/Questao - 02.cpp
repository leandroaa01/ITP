/*
O problema dos 3 corpos
Você foi contactado pelos San-Ti... pois sabem que você é capaz de
 salvar o planeta deles evitando a erado caos!

Para salvá-los, basta você enviar um programa que, dadas as posições de 3 corpos celestes
 (no sistema solar deles),envie para a saída a distância do corpo mais próximo ao centro do
sistema (deles).O cálculo da distância de um ponto no espaço (X, Y, Z) à origem (0, 0, 0) é 
feito através da fórmula abaixo:

​d=x2+y2+z2d = \sqrt{x^2 + y^2 +z^2}d=x2+y2+z2​​​

Escreva então um programa que leia as coordenadas de 3 pontos no espaço
(cada ponto é definido por X, Y e Z), calculea distância desses pontos
à origem e envie para a saída a distância do corpo mais próximo, arredondando a duascasas decimais.

Obs1: Para calcular a raiz quadrada, inclua o arquivo de cabeçalho cmath e use a função sqrt().

Obs2: Use o tipo double para ter uma precisão maior nos cálculos.

Obs3: Antes de enviar o programa aos San-Ti, peça que eles usem os computadores dos museus deles, 
que datam de 5.000anos atrás e ainda usam uma arquitetura 64 bits, e instalem o Linux neles. 
Caso contrário, não vai funcionar!
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

   double x, z, y, x2, z2, y2, x3, z3, y3;
   double d1, d2, d3;

   cin >> x >> y >> z;
   cin >> x2 >> y2 >> z2;
   cin >> x3 >> y3 >> z3;

   x = x * x;
   y = y * y;
   z = z * z;

   x2 = x2 * x2;
   y2 = y2 * y2;
   z2 = z2 * z2;

   x3 = x3 * x3;
   y3 = y3 * y3;
   z3 = z3 * z3;

   double soma1 = x + y + z;
   double soma2 = x2 + y2 + z2;
   double soma3 = x3 + y3 + z3;

   d1 = sqrt(soma1);
   d2 = sqrt(soma2);
   d3 = sqrt(soma3);

   double res;

   if (d1 <= d2 && d1 <= d3)
   {
      res = d1;
   }
   else if (d2 <= d3 && d2 <= d1)
   {
      res = d2;
   }
   else if (d3 <= d2 && d3 <= d1)
   {
      res = d3;
   }

   cout << fixed << setprecision(2);
   cout << res;
   return 0;
}