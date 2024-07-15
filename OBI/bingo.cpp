#include <iostream>
#include <ios>

int main() {
  std::ios_base::sync_with_stdio (false);

  int n, k, u;
  std::cin >> n >> k >> u;

  bool cartelas[n][u+1] = {}; // inicializa todos valores da matriz com false
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int c;
      std::cin >> c;
      cartelas[i][c] = true; // aqueles que pertencem à cartela serão true
    }
  }
  bool tem_vencedor = false;
  int cont[n] = { 0 };  // contador de números sorteados em cada cartela

  for (int s = 0; s < u && tem_vencedor == false; s++) {
    int sorteado;
    std::cin >> sorteado;  // número sorteado
    for (int i = 0; i < n; i++) {
      if (cartelas[i][sorteado]) { // verifica se pertence à cartela
        cont[i]++;
      }
      if (cont[i] == k) {    // se o num sorteados na cartela for igual ao máximo...
        tem_vencedor = true; // ...é porque i é vencedor
        std::cout << i + 1 << " ";
      }
    }
  }
  return 0;
}