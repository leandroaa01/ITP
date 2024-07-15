/*
Faça a leitura de um valor inteiro N ≥ 0.

Extraia o último dígito de N e imprima o "restante" do número seguido do dígito final extraído.

Se o número tiver apenas um dígito, o "restante" do número será 0.

Exemplo 1:
Entrada:123
Saída: 12 3
Exemplo 2:
Entrada: 5
Saída: 0 5
Exemplo 3:
Entrada: 0
Saída: 0 0
Dica: Use os operadores de divisão "/" e módulo "%".
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    int n1 = n %10;
    n /= 10;
    cout << n <<" "<< n1<< endl;

    return 0;
   
}