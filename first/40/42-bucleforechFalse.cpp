#include  <iostream>

int main()
{
  int arr[5] = {1,2,3}; //----LLene 3 parametros pero dije que es el tamaño 5, asi qu eharia el for 5 veces

  // for (int i=0; true; i++) //----cuando el parametro del medio es falso se sale del bucle asi que si no quiero imprimir vacios 
  for(int i=0; (arr[i]!=0); i++)
  {
    std::cout<<arr[i] << std::endl;
  }
  
  //----ejemplo2

  std::string arrString[5] = {"a","be","ce"};


  for(int i=0; !(arrString[i].empty()); i++)
  {
    std::cout<<arrString[i] << std::endl;
  }

  




}