#include <bits/stdc++.h>

int main() {

    
    int a, b, c;

    std::cin >> a >> b >> c;

    if ((a <= b && a >= c) || (a >= b && a <= c)) {
        std::cout << a << std::endl;
    } else if ((b <= c && b >= a) || (b >= c && b <= a)) {
        std::cout << b << std::endl;
    } else if ((c <= a && c > b) || (c >= a && c <= b)) {
        std::cout << c << std::endl;
    }

    return 0;
}
