
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>


int main(){


  std::string automoviles[] ={"bmw","mazda","toyota"};
  //----llamado del array
    std::cout << automoviles[0] << std::endl; //----imprimiria bmw
  //---cambiando el valor del array
    automoviles[0] = "audi";
    std::cout << automoviles[0] << std::endl; //----imprimiria audi

  //---se debe decir cuantos elementos tendra el arreglo:
    std::string animales[5];
    animales[0] = "perro";
    std::cout << "animales: " << animales[1]<<   animales[0] << std::endl;

    //--no se puede declarar un array sin especificarle el tamaño que tendra sino se tocaria hacer es un vector en vez e un arreglo

    //-------USO DEL SIZEOF()

    double numero = 123.567;
    std::cout << "El tamano cout     es: "<<sizeof(numero)  << std::endl; //----------tamaño del double es 8 bytes

    int entero = 123;
    std::cout << "El tamano entero   es: "<<sizeof(entero) << std::endl; //----------tamano del entero es 4 bytes

    char caracter = 'a';
    std::cout << "El tamano caracter es: "<<sizeof(caracter) << std::endl; //----------tamano del caracter es 1 byte

    bool verdadero = true;
    std::cout << "El tamano bool     es: "<<sizeof(verdadero) << std::endl; //----------tamano del bool es 1 byte

    std::string cadena = "asdf";
    std::cout << "El tamano string   es: "<<sizeof(cadena) << std::endl; //----------tamano del string es 4 bytes

    double arreglo[] = {1.1, 2.2};
    std::cout << "El tamano arreglo double con 2 numeros es 8 cada uno osea 2x8=16 es: "<<sizeof(arreglo) << std::endl; //----------tamano del arreglo es 40 bytes

    int arreglo2[] = {1, 2};
    std::cout << "El tamano arreglo int con 2 numeros es 4 cada uno osea 2x4=8 es: "<<sizeof(arreglo2) << std::endl; //----------tamano del arreglo es 8 bytes

    return 0;
}