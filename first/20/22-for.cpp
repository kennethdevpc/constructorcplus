#include <iostream>
#include <cmath>
int main(){

  for (int i = 0; i <= 20;i+=1)
  {
    if(i==10){
      continue; //----en esta interaccion no muestra el 10 pero continua desde el 11
    }
    if(i==17){  //----en esta interaccion no muestra el 17 y se sale del for
      break;
    }
    std::cout << "imprime el valor de i" << i << std::endl;
  }

  std::cout << "me sali del for \n" ;

  return 0;
}