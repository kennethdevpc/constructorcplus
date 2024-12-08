#include <iostream>
#include <cmath>
#include <ctime>
int main (){
  int num;
  int adivinar;
  int intentos=0;


  srand(time(NULL));

  num = rand() % 5 +1;

  std::cout << "********adivina el numero********"<< std::endl;

  do
  {
    std::cout<<"escribe un numero de 1 a 5"<< std::endl;
    std::cin >> adivinar;
       intentos= intentos+1;
 
    if (adivinar>num){
      std::cout << "el numero es menor\n" << std::endl;
    }else if (adivinar<num){
      std::cout << "el numero es mayor\n" << std::endl;
    }else{
      std::cout << "adivinaste el numero en " << intentos << std::endl;
    }

  } while (num != adivinar);
  

  return 0;
}