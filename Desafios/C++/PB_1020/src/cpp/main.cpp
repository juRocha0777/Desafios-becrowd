#include <iostream>
using namespace std;

auto main() -> int {
  
  int idade;
  int anos;
  int meses;
  int dias;

  cin >> idade;

  anos = idade / 365;
  int resto = idade % 365;

  meses = idade / 30;
  resto % 30;

  dias = resto;

 cout << anos << " ano(s)" << meses << " mese(s)" <<
  dias << " dia(s)" << "\n";



  return 0;
}
