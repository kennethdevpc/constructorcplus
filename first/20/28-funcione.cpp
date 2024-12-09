#include <iostream>
#include <cmath>
#include <ctime>


void felizAno(); //---se puede declarar una funcion si se llema despues del main
std::string felicidades(int rando);
void felizCumple(std::string name)
{ // -----si se llama antes del main, puedo simplemente estructurar la funcion sin hacer una declaracion inicial
  std::cout <<"felis cumpleanos: "<<name << std::endl;
  std::cout << "te deseamos a ti" << "\n";
}

int main(){
  std::string name;

  int rando;
  srand(time(NULL));
  rando = rand() % 5 + 1;

  std::cout << "ingrese el nombre del usuario: ";
  std::getline(std::cin >> std::ws, name);


  std::cout << "el numero aleatorio es: " << rando << std::endl;
  std::cout << "el nombre es: " << name << std::endl;

  felizCumple(name);
  felizAno();
  std::cout<<felicidades(rando);

  return 0;
}


void felizAno(){
  std::cout <<"felis ano nuevo 2025" << std::endl;
}

std::string felicidades(int rando){
  std::string mensaje = "Te deseo " + std::to_string(rando) + " felicitaciones";
  return mensaje;
}