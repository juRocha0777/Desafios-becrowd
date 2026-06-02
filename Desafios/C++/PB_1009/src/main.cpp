#include <iomanip>
#include <iostream>

using namespace std;

auto main() -> int {

  string nome;
  double salarioFixo;
  double vendas;
  double totalFinal;

  cin >> nome >> salarioFixo >> vendas;

  double COMISSAO = vendas * 0.15;
  totalFinal = salarioFixo + COMISSAO;

  std::cout << fixed << setprecision(2) << "TOTAL = R$ " << totalFinal << '\n';

  return 0;
}
