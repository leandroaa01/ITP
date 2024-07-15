/*
Estação meteorológica
As estações meteorológicas possuem sensores e instrumentos que recolhem dados para análise do tempo,
 como temperatura, velocidade e direção do vento, umidade do ar, chuva, entre outros. A estações convencionais
  precisam de um operador diário para coletar os dados, mas as automáticas coletam e disponibilizam
  automaticamente esses dados, facilitando a análise em tempo real.

O Instituto Nacional de Meteorologia (INMET) possui centenas dessas estações espalhadas pelo nosso país
 (podem ser consultadas em https://mapas.inmet.gov.br/), disponibilizando vários dos dados coletados e
 facilitando a vida de fazendeiros e agricultores.

Um desses agricultores te contratou para desenvolver um programa de análise diária dos dados oriundos do site
 https://tempo.inmet.gov.br/. Inicialmente, ele quer saber a hora em que houve a mudança mais brusca de
 temperatura em uma determinada estação, ou seja quando houve a maior diferença entre a temperatura máxima
 e mínima.

Para simplificar os testes iniciais, a tabela do INMET foi simplificada para conter apenas: 1) o
horário da medição, 2) a temperatura máxima durante aquela hora, 3) a temperatura mínima durante aquela hora.

A entrada de dados do seu programa consiste em uma linha contendo um inteiro N, que representa
 a quantidade de medidas da estação, seguido de N linhas contendo: o horário, a temperatura
 máxima e a temperatura mínima.

A saída de seu programa deve ser o horário com maior diferença entre as temperaturas máximas e mínimas.
Caso dois horários possuem a mesma diferença máxima de temperatura, a que deve ser enviada para a saída
 padrão é a primeira encontrada.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int qtd;
    cin >> qtd;

    double hrs, tmax, tmin, t;
    int max = 0, res=0;

    for (int i = 0; i < qtd; i++)
    {
        cin >> hrs >> tmax >> tmin;
        t = tmax - tmin;
        if (t > max)
        {
            res = t;
            res = hrs;
        }
    }
    cout << res;
    return 0;
}
