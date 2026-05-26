#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  double  A,B,C;
  double pesoA = 2;
  double pesoB = 3;
  double pesoC = 5;
  
  double MEDIA;
  
  double soma;
  double tempA;
  double tempB;
  double tempC;
  
  cin >> A;
  tempA = A * pesoA;
  
  cin >> B;
  tempB = B * pesoB;
  
  cin >> C;
  tempC = C * pesoC;
  
  soma = tempA + tempB + tempC;
  MEDIA = soma / 10;
  
  cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << "\n";
  
  return 0;
}
