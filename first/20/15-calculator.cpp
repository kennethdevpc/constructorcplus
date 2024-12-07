#include <iostream>
#include <cmath>
int main(){
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "  \n ";
  std::cout << "########## CALCULATOR ########## \n ";
  std::cout << "Ingrese operador (+ - * /) \n ";
  std::cin >> op;

  std::cout << "Ingrese el primer numero: ";
  std::cin >> num1;
  std::cout << "Ingrese el segundo numero: ";
  std::cin >> num2;

  switch(op){
    case('+'):
      result = num1 + num2;
      std::cout << "El resultado es: " << result << std::endl;
      break;
    case('-'):
      result = num1 - num2;
      std::cout<<"el resultado es: " << result << std::endl;
      break;
      case('*'):
      result = num1 * num2;
      std::cout<<"el resultado es: " << result << std::endl;
      break;
      case('/'):
      if (num2 == 0){
        std::cout << "No se puede dividir por 0" << std::endl;
        break;
      }
      result = num1 / num2;
      std::cout<<"el resultado es: " << result << std::endl;
      break;
      default:
      std::cout << "Operador no valido" << std::endl;
    }

  std::cout << "########## ########## ########## \n ";

  return 0;
}