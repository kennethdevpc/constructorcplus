#include <iostream>
#include <cmath>
int main(){

  int mes;
  std::cout << "ingrese el mes:" << std::endl;
  std::cin >> mes;

  switch(mes){
    case 1:
      std::cout << "el mes es enero" << std::endl;
      break;
    case 2:
      std::cout << "el mes es febrero" << std::endl;
      break;
    case 3:
      std::cout << "el mes es marzo" << std::endl;
      break;
      case 4: 
      std::cout << "el mes es abril" << std::endl;
      break;
      case 5:
      std::cout << "el mes es mayo" << std::endl;
      break;
      case 6:
      std::cout << "el mes es junio" << std::endl;
      break;
      case 7:
      std::cout << "el mes es julio" << std::endl;
      break;
      case 8:
      std::cout << "el mes es agosto" << std::endl;
      break;
      case 9:
      std::cout << "el mes es septiembre" << std::endl;
      break;
      case 10:
      std::cout << "el mes es octubre" << std::endl;
      break;
      case 11:
      std::cout << "el mes es noviembre" << std::endl;
      break;
      default :
        std::cout << "solo se permiten del 1 al 12";

      }

  return 0;
}