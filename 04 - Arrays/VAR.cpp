/*
mpedimento no VAR

O VAR (Video Assistant Referee) tem ajudado muitos juízes. Suas mães já não recebem os mesmos insultos como recebiam há alguns anos.
Em muitos lances, não há mais polêmica. Por exemplo, não há interpretação em impedimento. Não é algo subjetivo. E o VAR está lá para evitar as discussões. 
"A regra é clara" e diz que um jogador está impedido quando estiver no campo de ataque e à frente do último adversário (com exceção do goleiro).
Nesse caso, ele não pode participar da jogada (mesmo que indiretamente).

A Conmebol resolveu atualizar seu sistema de VAR e pediu para você fazer um pequeno programa para verificar se num determinado momento há jogadores impedidos (em qualquer um dos times). 
O sistema de processamento de imagens da Conmebol irá produzir arrays contendo o número do jogador e sua a posição no campo dos jogadores de cada time (o goleiro é excluído no processamento)
e enviar para seu programa. A posição no campo refere-se à distância do jogador à linha de centro do campo, de forma que o 0 indica que o jogador se encontra sobre a linha central, um valor
positivo indica que o jogador se encontra em um lado do campo e um valor negativo que se encontra do outro lado do campo.

Seu programa deve então ler da entrada-padrão os quatro arrays. Os dois primeiros contêm os números (das camisas) dos jogadores dos times A e B, respectivamente.
Os dois seguintes possuem as posições no campo dos respectivos jogadores (na mesma ordem dos dois arrays iniciais). 
Seu programa deve enviar para a saída padrão duas linhas. A primeira deve conter o texto "A: ", seguido dos números dos jogadores do time A que se encontram impedidos ou o texto "sem impedimento",
se não houver impedimento. A segunda linha deve conter o texto "B: ", seguido dos números dos jogadores do time B que se encontram impedidos ou o texto "sem impedimento", se não houver impedimento.

Obs1: O campo de defesa do time A é o lado que possui valores negativos. Logo, a posição dos jogadores que estivem no lado de ataque terão valores positivos.
O mesmo ocorre com o time B, só que os valores contrários: o campo de defesa possui valores positivos e o de ataque negativos.

Obs2: Veja que o texto inicial em cada linha possui uma letra (A ou B), seguida de : , seguido de um espaço em branco. Haverá erro se não seguir estritamente este formato.*/

#include <iostream>

int main()
{
  int timeA[10], timeB[10];
  double p1[10], p2[10];

  for (int &v : timeA)
  {
    std::cin >> v;
  }
  for (int &v : timeB)
  {
    std::cin >> v;
  }
  for (double &v : p1)
  {
    std::cin >> v;
  }
  for (double &v : p2)
  {
    std::cin >> v;
  }

  double menor_p1 = p1[0];
  double maior_p2 = p2[0];

  for (int i = 1; i < 10; i++)
  {
    if (p1[i] < menor_p1)
    {
      menor_p1 = p1[i];
    }
    if (p2[i] > maior_p2)
    {
      maior_p2 = p2[i];
    }
  }

  bool impedimentoA = false;
  bool impedimentoB = false;
  int ipA[10];
  int ipB[10];
   int a = 0;
  for (int i = 0; i <= 10; i++)
  {
   
      if (p1[i] > maior_p2 && p1[i]>0)
      {
        ipA[a] = timeA[i];
        a+=1;
        impedimentoA = true;
      }  
  }
   int b=0;
  for (int i = 0; i <= 10; i++)
  {
   
      if (p2[i] < menor_p1 && p2[i]< 0)
      {
        ipB[b] = timeB[i];
        b++;
      impedimentoB = true;
    }
  }
  // std::cout << menor_p1 << " " << maior_p2 << " " << k << " " << j;


    
    if(impedimentoA == true)
    {
      std::cout << "A: ";
      for (int i = 0; i < a; i++)
      {
         std::cout << ipA[i] << " ";
      }
    }
    else
    {
      std::cout << "A: sem impedimentos";
    }

    std::cout << std::endl;
     if(impedimentoB == true){
      std::cout << "B: ";
      for (int i = 0; i < b; i++)
      {
         std::cout << ipB[i] << " ";
      }
    
  }
    else
    {
      std::cout << "B: sem impedimentos";
    }

  return 0;
}
