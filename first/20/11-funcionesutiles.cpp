#include <iostream>//---- libreria de entrada y salida
#include <cmath> //---- libreria matematica 
int main(){

  double x = 3;
  double y = 4;
  double z;

  z = std::max(x, y); //----  devuelve el mayor de los dos argumentos
  std::cout << z << std::endl;
  z= std::min(x, y); //----  devuelve el menor de los dos argumentos
  std::cout << z << std::endl;
  z= std::abs(x); //---- devuelve el valor absoluto de x
  std::cout << z << std::endl;
  z= std::sqrt(x); //---- devuelve la raiz cuadrada de x
  std::cout << z << std::endl;
  z= std::pow(x, y); //---- devuelve x elevado a la y
  std::cout << z << std::endl;
  z=std::round(4.5); //---- devuelve el valor redondeado de x >= 0.5 hacia arriba y < 0.5 hacia abajo
  std::cout << z << std::endl;
  z=std::ceil(4.5); //---- devuelve el valor redondeado hacia arriba
  std::cout << z << std::endl;
  z=std::floor(4.5); //---- devuelve el valor redondeado hacia abajo
  std::cout << z << std::endl;

  


  return 0;

}