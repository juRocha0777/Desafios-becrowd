#include <iomanip>
#include <iostream>
#include <numbers>

using namespace std;

auto main() -> int {
  const double PI = std::numbers::pi;
  double area, raio;

  std::cin >> raio;

  area = PI * raio * raio;

  std::cout << "A= " << std::fixed << std::setprecision(4) << area << '\n';
  return 0;
}
