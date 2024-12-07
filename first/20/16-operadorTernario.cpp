#include <iostream>
int main(){

  int a = 0;
  bool finalizado = false;

  a ? std::cout << "verdadero" << std::endl : std::cout << "falso" << std::endl;
  finalizado ? std::cout << "verdadero finalizo" << std::endl : std::cout << "falso finalizo" << std::endl;

  return 0;
}