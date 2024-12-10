#include <iostream>
#include <cmath>
#include <iomanip>//----libreria para redondear los decimales
#include <ctime> //----libreria para numeros aleatorios
#include <limits>//----libreria para ignorar caracteres en un numerico

void clasificar(int arreglo[], int tam);
int main()
{

  int arreglo[]  ={2,3,9,10,8,1,7,4,6,5};
  int tamano = sizeof(arreglo) / sizeof(int);
   for (int elementos:arreglo)
  {
    std::cout<< elementos<< "    ";
  }
    std::cout<< " \n  ";

  clasificar(arreglo, tamano);
   for (int elementos:arreglo)
  {
    std::cout<< elementos<< " - ";

  }


  return 0;
}

void clasificar(int arreglo[], int tam){
  for (int i = 0; i<tam-1; i++)
  {
    for (int j = 0; j< tam-1; j++)
    {
     if(arreglo[j] > arreglo[j+1]){
     int temp = arreglo[j];
      arreglo[j] = arreglo[j+1];
      arreglo[j+1] = temp;
      int aux = arreglo[j];
      int b = arreglo[j+1];
    }
    }
  }
};


