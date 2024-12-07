#include <iostream>
#include <cmath>

int main(){


  std::string name;
  std::string apellido;

  while(name.empty()){
    std::cout<<"ingrese su nombre: "<<std::endl;
    std::getline(std::cin , name);
  
  }

  std::cout << "Su nombre es: " << name << std::endl;

  do{
    std::cout<<"ingrese su apellido: "<<std::endl;
    std::getline(std::cin , apellido);
  }while(apellido.empty());

  std::cout << "su apellido es " << apellido << std::endl;

  return 0;


}