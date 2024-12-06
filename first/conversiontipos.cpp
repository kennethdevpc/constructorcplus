
#include <iostream>
int main(){
  //----forma implicita de conversion

  int a = 3.14;
  std::cout<<"el a es:"<<a<<std::endl;
 //---forma explicita de conversion 
  double b = (int)3.14;
  std::cout<<"el be es:"<<b<<std::endl;

  //---forma implicita con caracteres
  char c = 100;
  std::cout << "el c es:" << c << std::endl;

  //---forma explicita con caracteres
  std::cout << "el d es:" << (char)100 << std::endl;

  //---ejmplo de uso

  int x = 10;
  int y = 20;
  double z_sinconversion = x / y;
  std::cout<<"z_sinconversion: "<<z_sinconversion<<std::endl;
  double z = (double)x / (double)y;
  std::cout <<"zcon xonversion: " << z << std::endl;

  return 0;
}