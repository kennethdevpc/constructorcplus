#include <iostream> //---- libreria de entrada y salida
#include <cmath> //---- libreria matematica
int main(){
  int edad;
  std::cout << "ingrese su edad: "<<std::endl;

  std::cin >> edad;

  if(edad >= 18){
    std::cout << "usted es mayor de edad"<<std::endl;
  }else if(edad==17){
    std::cout << "usted esta en 17" << std::endl;

    }
    else{
    std::cout << "usted es menor de edad" << std::endl;

    }
  return 0;
}