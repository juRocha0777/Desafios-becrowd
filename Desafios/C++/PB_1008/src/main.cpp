#include <iomanip>
#include <iostream>
using namespace std;

auto main() -> int {

  int nFuncionario;
  int horasTrabalhadas;
  double VPH; // Valor por hora
  double salario;

  cin >> nFuncionario >> horasTrabalhadas >> VPH;

  salario = horasTrabalhadas * VPH;

  std::cout << "NUMBER = " << nFuncionario << '\n';

  std::cout << fixed << setprecision(2) << "SALARY = U$ " << salario << '\n';

  return 0;
}
