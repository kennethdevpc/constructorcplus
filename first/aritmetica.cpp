#include <iostream>

int main(){
  int a = 11;
  int b = 20;
  int c = a + b+2;
  c+1;
  std::cout << c << std::endl;

  //---resta

  int resta = b - a;
  std::cout << resta << std::endl;

  //---modulo

  int modulo = b % a;
  std::cout << modulo << std::endl;

// orden

  float resultado = 6-5+5 * 3.0 / 2;
  std::cout << "El resultado es: " << resultado << std::endl;
  return 0;
}