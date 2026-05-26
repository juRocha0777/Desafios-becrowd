#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double A,B;
  double MEDIA;
  
  double PesoA = 3.5;
  double PesoB = 7.5; 
  
  double tempA;
  double tempB;
  
  
  cin >> A;
  tempA = A * PesoA;
  cin >> B;
  tempB = B * PesoB;
  
  MEDIA = (tempA + tempB) / 11;


  cout << fixed << setprecision(5) << "MEDIA = "<< MEDIA << "\n";




  return 0;
}
