#include <iomanip>
#include <iostream>


auto main() -> int {
  // Peça 1
  int Codigo_1;
  int QTD_1; // Quantidade 1
  double valor_1;

  std::cin >> Codigo_1 >> QTD_1 >> valor_1;

  double total_Pec1 = QTD_1 * valor_1;

  //--------------------------------------------------------//

  // Peça 2
  int Codigo_2;
  int QTD_2;
  double valor_2;

  std::cin >> Codigo_2 >> QTD_2 >> valor_2;

  double total_Pec2 = QTD_2 * valor_2;
  // -----------------------------------------------------//

  double Valor_Total = total_Pec1 + total_Pec2;

  std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ "
            << Valor_Total << '\n';

  return 0;
}
