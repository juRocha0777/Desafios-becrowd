#include <iomanip>
#include <iostream>

auto main() -> int {
  double Raio;
  double PI = 3.14159;
  double Volume;

  std::cin >> Raio;

  Volume = (4.0 / 3) * PI * Raio * Raio * Raio;

  std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << Volume
            << '\n';
  return 0;
}
