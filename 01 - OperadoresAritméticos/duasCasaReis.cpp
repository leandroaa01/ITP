/*
Escreva um programa que leia dois valores reais (R)
e envie para a saída padrão a soma deles com precisão de duas casas.
A precisão deve ser arredondada (os valores após a 2a casa decimal serão aproximados à 2a casa).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double n, n2;
    cout << fixed  << setprecision(2);
    cin >> n >> n2;

    cout<< n+n2 << endl;


    

    return 0;
   
}