#include <bits/stdc++.h>

int main() {

    
    int a, b, d =0; 

    std::cin >> a >> b;
     int c[b];

     for (int &i : c )
     {
        std:: cin >> i; 
     }
    int saldo = 0;
    for (size_t i = 0; i < b; i++)
    {
    saldo = a - c[i];
    d +=saldo;
    saldo = 0;
      
      
    }
    std:: cout << d +a<<" ";

    return 0;
}