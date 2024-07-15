/*
As médias são utilizadas quando temos um conjunto de dados e queremos
estimar um valor que represente esses dados. A média pode ser entendida
como um valor central de determinados dados. Entre com 10 números e calcule
as média aritmética, geométrica e harmônica, no link temos as formulas matemáticas
necessárias para o calculo, nesse link pode ser visto o uso de uma função necessária
 para calcular as médias. Ao final calcule e imprima o erro médio
(entre as médias geométricas e harmônicas) em relação a média aritmética.

Para o calculo dos erros use as funções abaixo:

Erro_harmônica= (média harmônica - média aritmética) / média aritmética

Erro_geométrica= (média geométrica- média aritmética) / média aritmética

Erro_médio= (Erro_harmônica + Erro_geométrica)/2​


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    double mul;
    double ma = 0;
    double mg = 1;
    double mh = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        mul = n * n;
        ma = ma + n;
        mg = mg * n;
        mh = mh + 1 / n;
    }
    ma = ma / 10;
    mg = pow(mg, 1 / 10.0);
    mh = 10 / mh;

    double erro_h = (mh - ma) / ma;
    double erro_g = (mg - ma) / ma;
    double erro_m = ((erro_h + erro_g) / 2) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Média aritmética é " << ma << "\n";
    cout << "Média harmônica é " << mh << "\n";
    cout << "Média geométrica é " << mg << "\n";
    cout << "Erro médio é " << erro_m << " % \n";

    return 0;
}
