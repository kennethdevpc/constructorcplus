#include <iostream>
#include <cmath> 
#include <iomanip> //----libreria para redondear los decimales
#include <limits>
#include <ctime>
 
void funcinConstante(const int &a, const int &b); //--asi hago que sea constante los valores y que no se puedan cambiar

int main (){

  int ax = 100;
  int bx = 20;
  funcinConstante(ax, bx);

  double d=23.456;
  std::cout <<std::setprecision(2)<<std::fixed <<d << std::endl;

  int a;
  std::cout << "introduce un valor que no sea numero para validarun dato numerico " << std::endl;
 
 do{
  if (!(std::cin >>a))
  {
    std::cout <<"no es un numero digite un numero" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    continue;
  }
 } while (a != 4);

 srand(time(NULL));
 int x = rand();
 std::cout << x << std::endl;

 return 0;
};
 void funcinConstante(const int &a, const int &b){

//  a = 20; //----no se puede cambiar el valor de la variable a


 };
