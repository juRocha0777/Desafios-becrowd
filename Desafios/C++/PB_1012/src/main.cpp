#include <iomanip>
#include <iostream>

using std::cout;

auto main() -> int {

  // Entradas
  double A;
  double B;
  double C;

  std::cin >> A >> B >> C;

  // Calculos
  double triangulo = A * C / 2;
  double circulo = 3.14159 * C * C;
  double trapezio = (A + B) * C / 2;
  double quadrado = B * B;
  double retangulo = A * B;

  // Saidas
  std::cout << std::fixed << std::setprecision(3);

  std::cout << "TRIANGULO: " << triangulo << '\n';
  std::cout << "CIRCULO: " << circulo << '\n';
  std::cout << "TRAPEZIO: " << trapezio << '\n';
  std::cout << "QUADRADO: " << quadrado << '\n';
  std::cout << "RETANGULO: " << retangulo << '\n';

  return 0;
}
