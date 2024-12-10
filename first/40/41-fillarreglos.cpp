#include  <iostream>
int main (){
  int tamArray = 10;
  std::string arregloFilled[tamArray];
  //----inicio,        posicion del arreglo mas 100 elementos
  fill(arregloFilled, arregloFilled + tamArray, "hola"); //---recibe 3 arguementos el primero el inicio, el segundo el final y el tercero el valor
    for (int i = 0; i < tamArray; i++){
    std::cout << arregloFilled[i] << std::endl;
  }
  //----llenando la mitad de  con una cadena diferente
  fill(arregloFilled, arregloFilled + tamArray/2, "hola"); //---recibe 3 arguementos el primero el inicio, el segundo el final y el tercero el valor
  fill(arregloFilled + tamArray/2, arregloFilled + tamArray, "veee"); //---recibe 3 arguementos el primero el inicio, el segundo el final y el tercero el valor
 for (int i = 0; i < tamArray; i++){
    std::cout << arregloFilled[i] << std::endl;
  }


  return 0;
}
