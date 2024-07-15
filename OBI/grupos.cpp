#include <bits/stdc++.h>

int main() {

    
    std:: string resultado;
    int contador = 0 ;
   

    for (size_t i = 0; i < 6; i++)
    {
    std:: cin >> resultado;

       if(resultado == "V"){
        contador += 1;
       }
    }
    if(contador > 0){
    if(contador == 1 || contador == 2){
        std:: cout << 3;
    }else if( contador == 3 || contador == 4){
         std:: cout << 2;
    }else if(contador == 5 || contador == 6){
         std:: cout << 1;
    }
    } else{
         std:: cout << -1;
    }
    

    return 0; 
}
