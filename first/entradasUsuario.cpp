#include <iostream>

//---cout <<  (operador de insercion)
//---cin >> (operador de extraccion)
//---std::cin>>std::ws (para poder recibir espacios y que  su vez deje terminar de escribir cuando haya un salto de linea)

int main(){
  std::string nombre;
  int edad;
   std::cout << "Ingrese su edad: ";
  std:: cin >> edad;
  std::cout << "Ingrese su nombre completo : ";
  std:: getline(std::cin>>std::ws, nombre); // se hace asi para que pueda recibir espacios pero que se espere a la vez a que el usuario termine de escribir cuando hay un salto de linea ya que sin ese "ws" toma el "enter" o el "/n" como una orden de que ya termino de escribir 


 
  std:: cout << "Su nombre es: " << nombre << std::endl;
  std::cout << "Su edad es:  " << edad << std::endl;


  return 0;
}