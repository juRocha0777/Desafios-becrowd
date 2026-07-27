#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

auto main() -> int {
  double x1;
  double x2;
  double y1;
  double y2;

  double dx;
  double dy;

  cin >> x1 >> y1;
  cin >> x2 >> y2;

  dx = x2 - x1;
  dy = y2 - y1;

  double distancia = sqrt(pow(dx, 2) + pow(dy, 2));

  cout << fixed << setprecision(4) << distancia << '\n';
  return 0;
}
