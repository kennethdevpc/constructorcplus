#include <iostream>

int main(){

  std::string name;
  int longitudCadena;
  bool esVacia;
  std::cout << "Ingrese su nombre: ";
  // std::getline(std::cin >> std::ws, name);
  std::cout << "Su nombre es: " << name << std::endl;

  longitudCadena = name.length();
  std::cout << "La longitud de su cadena es: " << longitudCadena << std::endl;

//----metodo para saber si una cadena esta vacia
  name = "";
  esVacia = name.empty();
  if(esVacia){
    std::cout<<"la cadena esta vacia" << std::endl;
  }
//----metodo clear, se encarga de limpiar la cadena
  std::string name2 = "pedro";
  std::cout << "el neme2 antes declear " << name2 << std::endl;
  name2.clear(); //----devolveria ""
  std::cout << "el neme2 despues de clear: " << name2 << std::endl;

//----metodo apend, se encarga de unir cadenas
  std::string name3 = "pedro";
  std::cout << "el neme3 antes de append " << name3 << std::endl;
  name3.append(" perez"); //----devolveria pedroperez
  std::cout << "el neme3 despues de append: " << name3 << std::endl;

//---metodo at, devuelde el caracter en la posision que le indiquemos
  std::string name4 = "Juan";
  std::cout << "el neme4 antes de at " << name4 << std::endl;
  char pos = name4.at(0); //----devolveria J
  std::cout << "el neme4 despues de at: " << pos << std::endl;

//---metodo insert se encarga de insertar caracteres en la posision que le indiquemos y corre la cadena a mas adelante
  std::string name5 = "pep";
  std::cout << "el neme5 antes de insert " << name5 << std::endl;
  name5.insert(2, "er"); //---devolveria peerp
  std::cout << "el neme5 despues de insert " << name5 << std::endl;


  //---metodo find se encarga de encontrar la posision de la letra o texto que le indiquemos
  std::string name6 = "pepe lopes lopes";
  std::cout << "el neme6 antes de find " << name6 << std::endl;
  int pos2 = name6.find("lopes"); //----devolveria 5
  std::cout << "el neme6 despues de find " << pos2 << std::endl;

  //----metodo erase se encarga de eliminar la cadena que le indiquemos
  std::string name7 = "pepe lopes lopes";
  std::cout << "el neme7 antes de erase " << name7 << std::endl;
  name7.erase(0, 5); //----devolveria lopes lopes
  std::cout << "el neme7 despues de erase " << name7 << std::endl;
  return 0;
}