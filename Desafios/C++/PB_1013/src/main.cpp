#include <cstdlib>
#include <iostream>

auto main() -> int {
  int valorA;
  int valorB;
  int valorC;

  std::cin >> valorA >> valorB >> valorC;

  int maiorEntreAB = (valorA + valorB + std::abs(valorA - valorB)) / 2;

  int maiorDosTres =
      (maiorEntreAB + valorC + std::abs(maiorEntreAB - valorC)) / 2;

  std::cout << maiorDosTres << " eh o maior\n";

  return 0;
}
