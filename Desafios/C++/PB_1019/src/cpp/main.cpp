#include <iostream>
using namespace std;

auto main() -> int {
  int N;
  int horas;
  int minutos;
  int segundos;

  cin >> N;

  horas = N / 3600;
  int resto = N % 3600;

  minutos = resto / 60;
  segundos = resto % 60;

  cout << horas << ":" << minutos << ":" << segundos  << "\n";

  return 0;
}
