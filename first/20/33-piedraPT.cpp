#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <limits>


int main(){






  
  int numero;

do{
  std::cout<<"ingrese un caracter para saber si es un numero"<<std::endl;
  if(!(std::cin>>numero)){
    std::cout<<"no es un numero"<<std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    continue;
  }
} while (numero != 4);

  double num;

  std::cout <<"ingrese un numero doble para redondearlo con <iomanip>" << std::endl;
  std::cin >> num;
  std::cout << std::setprecision(2) << std::fixed << num << "\n";
  return 0;
}