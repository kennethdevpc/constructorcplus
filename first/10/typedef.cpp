#include <iostream>
#include <vector>

//----se crea el typo : "pair_list_t" que es un abreviamiento de "std::vector<std::pair<std::string, int>>" 
// ---para indicar que es un tipo se termina el nombre con "_t"
typedef std::vector<std::pair<std::string, int>> pair_list_t;

// ejemplo para darle un tipo a el tipo "string"
typedef std::string string_t;

//---sin embargo el typedef es reemplazado por "using"
using text_t= std::string;

int main(){

  //---si no usamos la abreviacion tocaria usar para crear la variable "list" la siguiente linea
  std::vector<std::pair<std::string, int>> list;
  //---usamos la abreviacion
  pair_list_t listB;

  //----usamos el typo "string_t"
  string_t s = "hola";
  std::cout << s;

  //----usamos el typo "text_t"
  text_t t = "hola con tipo text_t, que utiliza el 'using' en lugar de 'typedef'";
  std::cout << t;
  return 0;
}