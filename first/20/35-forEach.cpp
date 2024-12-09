#include <iostream>
int main(){

  int arr[5] = {1,2,3,4,5};
  for (int i : arr) {
    std::cout << i << std::endl;
  }

  std::string cadena[]={"hola","mundo"};

  for (std::string iterador: cadena)

  {
    std::cout<<"iterando con forEach: "<<iterador<<std::endl;
  }

  return 0;


}