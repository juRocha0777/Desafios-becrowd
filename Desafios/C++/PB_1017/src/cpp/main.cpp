#include <iostream>
#include <iomanip>

using namespace std;

auto main() -> int {
    int tempo;
    int velocidade;
    double distancia;
    double litros;

    cin >> tempo >> velocidade;

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    cout << fixed << setprecision(3) << litros << '\n';

    return 0;
}