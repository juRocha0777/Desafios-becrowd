#include <iomanip>
#include <iostream>

using namespace std;

auto main() -> int {

  int distancia;
  double combustivel;
  double consumo;

  cin >> distancia >> combustivel;

  consumo = distancia / combustivel;

  std::cout << fixed << setprecision(3) << consumo << " km/l\n";

  return 0;
}
