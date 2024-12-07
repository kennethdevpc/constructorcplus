#include <iostream>
#include <cmath>
int main(){

  char op;
  std::string tempDigitada;
  double temperatura;
  std::cout << "**********Temperatura **********" << std::endl;
  std::cout << "Ingrese la temperatura que desea transformar: ";
  std::cin >> op;

  if(op=='f' || op=='F'){
    std::cout << "Ingrese la temperatura en Fahrenheit: ";
    std::getline(std::cin >> std::ws, tempDigitada);
    temperatura = std::stod(tempDigitada);

    temperatura=(temperatura-32)*5/9;
    std::cout << "La temperatura en Celsius es: " << temperatura << std::endl;
  }
  else if(op=='c' || op=='C'){
    std::cout << "Ingrese la temperatura en Celsius: ";
    std::getline(std::cin >> std::ws, tempDigitada);
    temperatura = std::stod(tempDigitada);
    temperatura=(temperatura*9/5)+32;

    std::cout << "La temperatura en Fahrenheit es: " << temperatura << std::endl;
  }
  if(op!='f' && op!='F' && op!='c' && op!='C'){
    std::cout << "Ingrese una opcion valida" << std::endl;
  }
  
 

    


  return 0;
}