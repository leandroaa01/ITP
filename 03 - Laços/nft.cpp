/*
Atualmente na moda, os NFT (Non-Fungible Tokens) são o novo esquema negócio envolvendo
transações digitais com blockchain e criptomoedas. Seja um meme famoso, uma imagem marcante
ou até mesmo uma arte nova, qualquer artefato digital único pode ser comprado por um pessoa. 
E acredite, eles estão vendendo por preços altíssimos!

Você deve estar se perguntando: uau professor, vamos criar imagens milionárias nesse exercício????
NOPE!

Nesse programa, vocês vão fazer desenhos simples com asteriscos :P.
 O desenho tem um tamanho LINHA x COLUNA, onde cada linha contém um
número específico de asteriscos que formam a imagem.

Seu programa receberá um valor inteiro L, representando o número de linhas
 que sua imagem vai ter, seguido de L valores C, representando quantos caracteres 
 (asteriscos) serão desenhados em cada linha.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  
int lin, col;
   cin >> lin;

   for (int i = 0; i < lin; i++){
      cin >> col;
      for (int i2 = 0; i2 < col; i2++)
      {
      cout << "*";
      }
      cout << endl;
   }

  

   return 0;
}
