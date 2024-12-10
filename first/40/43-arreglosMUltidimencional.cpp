#include <iostream>
int main (){

  //------no es necesario pasarle para el primer parametro [][] , sepuede dear vacio el primer parametro para 2d
  std::string matriz[][4] = {{"a","b","c","da"},
                              {"d","e","f","db"},
                              {"g","h","i","dc"}};

  std::cout<<matriz[0][0] << std::endl;
  std::cout<<matriz[1][5] << std::endl;

  //----para sacar el tamaño
  int filas = sizeof(matriz)/sizeof(matriz[0]);
  int columnas = sizeof(matriz[0])/sizeof(matriz[0][0]);
  std::cout << "filas"<<filas << std::endl;
  std::cout << "columnas"<<columnas << std::endl;
  for (int i = 0; i < filas; i++)
  {
   for (int j = 0; j < columnas; j++){
    std::cout << matriz[i][j] << " ";
   }
   std::cout << " \n";
  }
  
  //------mostrar solo la fila 2

  for (int i=0; i<sizeof(matriz[1])/sizeof(matriz[2][0]); i++)
  {
    std::cout<<matriz[1][i] << "**";
  }
  

  return 0;
}