/*
Há 3 crianças em uma sala, cada uma com um dos três brinquedos
numerados de 1 a 3. Cada criança então diz um número: positivo
se é o brinquedo que ela está usando ou negativo se é o brinquedo
que ela não está usando. Por exemplo, se a criança disser -2, significa
que ela não está usando o brinquedo 2. Seu programa deve ler do usuário
cada um desses números e, a partir dessas informações, seu programa deve
escrever, da primeira até a terceira criança, com qual brinquedo cada uma
está ou uma interrogação caso não seja possível afirmar.
*/

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cin >> a >> b >> c;

    int soma = (a + b + c);

    if (a > 0 && b > 0 && c > 0)
    {
        cout << a << " " << b << " " << c;
    }

    if (b == c && b != a)
    {
        cout << b * -1 << " " << "?" << " " << "?";
    }

    if (a == c && a != b)
    {
        cout << "?" << " " << a * -1 << " " << "?";
    }

    if (a == b && a != c)
    {
        cout << "?" << " " << "?" << " " << a * -1;
    }

    if (a != b && a != c && b != c && a < 0 && b < 0 && c < 0)
    {
        cout << "? ? ?";
    }

    if (a < 0 && b < 0 && c < 0 && a == b && a == c && b == c)
    {
        cout << "? ? ?";
    }

    if (a > 0 && b > 0 && c < 0)
    {
        switch (a + b)
        {
        case 3:
            cout << a << " " << b << " 3";
            break;

        case 4:
            cout << a << " " << b << " 2";
            break;

        case 5:
            cout << a << " " << b << " 1";
        }
    }

    if (a > 0 && b < 0 && c > 0)
    {
        switch (a + c)
        {
        case 3:
            cout << a << " 3" << " " << c;
            break;

        case 4:
            cout << a << " 2" << " " << c;
            break;

        case 5:
            cout << a << " " << "1 " << c;
        }
    }

    if (a < 0 && b > 0 && c > 0)
    {
        switch (b + c)
        {
        case 3:
            cout << "3" << " " << b << " " << c;
            break;

        case 4:
            cout << "2" << " " << b << " " << c;
            break;

        case 5:
            cout << "1" << " " << b << " " << c;
        }
    }

    if (a > 0 && b < 0 && c < 0 && b != c && b > c)
    {
        switch (b + c)
        {
        case -3:
            if (a == 1)
                cout << a << " 2 " << "3";
            if (a == 2)
                cout << a << " 3 " << "1";
            if (a == 3)
                cout << a << " 2 " << "1";
            break;

        case -4:
            if (a == 1)
                cout << a << " 3 " << "2";
            if (a == 2)
                cout << a << " 3 " << "1";
            if (a == 3)
                cout << a << " 2 " << "1";
            break;

        case -5:
            if (a == 1)
                cout << a << " 3 " << "2";
            if (a == 2)
                cout << a << " 3 " << "1";
            if (a == 3)
                cout << a << " 1 " << "2";
        }
    }

    if (a > 0 && b < 0 && c < 0 && b != c && b < c)
    {
        switch (b + c)
        {
        case -3:
            if (a == 1)
                cout << a << " 3 " << "2";
            if (a == 2)
                cout << a << " 1 " << "3";
            if (a == 3)
                cout << a << " 1 " << "2";
            break;

        case -4:
            if (a == 1)
                cout << a << " 2 " << "3";
            if (a == 2)
                cout << a << " 1 " << "3";
            if (a == 3)
                cout << a << " 1 " << "2";
            break;

        case -5:
            if (a == 1)
                cout << a << " 2 " << "3";
            if (a == 2)
                cout << a << " 1 " << "3";
            if (a == 3)
                cout << a << " 2 " << "1";
        }
    }

    if (a < 0 && b < 0 && c > 0 && b != a && b > a)
    {
        switch (b + a)
        {
        case -3:
            if (c == 1)
                cout << "3" << " 2 " << c;
            if (c == 2)
                cout << "1" << " 3 " << c;
            if (c == 3)
                cout << "1" << " 2 " << c;
            break;

        case -4:
            if (c == 1)
                cout << "2" << " 3 " << c;
            if (c == 2)
                cout << "1" << " 3 " << c;
            if (c == 3)
                cout << "1" << " 2 " << c;
            break;

        case -5:
            if (c == 1)
                cout << "2" << " 3 " << c;
            if (c == 2)
                cout << "1" << " 3 " << c;
            if (c == 3)
                cout << "2" << " 1 " << c;
        }
    }

    if (a < 0 && b < 0 && c > 0 && b != a && b < a)
    {
        switch (b + a)
        {
        case -3:
            if (c == 1)
                cout << "2" << " 3 " << c;
            if (c == 2)
                cout << "3" << " 1 " << c;
            if (c == 3)
                cout << "2" << " 1 " << c;
            break;

        case -4:
            if (c == 1)
                cout << "3" << " 2 " << c;
            if (c == 2)
                cout << "3" << " 1 " << c;
            if (c == 3)
                cout << "2" << " 1 " << c;
            break;

        case -5:
            if (c == 1)
                cout << "3" << " 2 " << c;
            if (c == 2)
                cout << "3" << " 1 " << c;
            if (c == 3)
                cout << "1" << " 2 " << c;
        }
    }

    if (a < 0 && b > 0 && c < 0 && c != a && c > a)
    {
        switch (c + a)
        {
        case -3:
            if (b == 1)
                cout << "3 " << b << " 2";
            if (b == 2)
                cout << "1 " << b << " 3";
            if (b == 3)
                cout << "1 " << b << " 2";
            break;

        case -4:
            if (b == 1)
                cout << "2 " << b << " 3";
            if (b == 2)
                cout << "1 " << b << " 3";
            if (b == 3)
                cout << "1 " << b << " 2";
            break;

        case -5:
            if (b == 1)
                cout << "2 " << b << " 3";
            if (b == 2)
                cout << "1 " << b << " 3";
            if (b == 3)
                cout << "2 " << b << " 1";
        }
    }

    if (a < 0 && b > 0 && c < 0 && c != a && c < a)
    {
        switch (c + a)
        {
        case -3:
            if (b == 1)
                cout << "2 " << b << " 3";
            if (b == 2)
                cout << "3 " << b << " 1";
            if (b == 3)
                cout << "2 " << b << " 1";
            break;

        case -4:
            if (b == 1)
                cout << "3 " << b << " 2";
            if (b == 2)
                cout << "3 " << b << " 1";
            if (b == 3)
                cout << "2 " << b << " 1";
            break;

        case -5:
            if (b == 1)
                cout << "3 " << b << " 2";
            if (b == 2)
                cout << "3 " << b << " 1";
            if (b == 3)
                cout << "1 " << b << " 2";
        }
    }
}
