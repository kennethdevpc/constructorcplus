#include <iostream>

int main(){
  int a = 10;
  int b = 20;
  int c = a + b;
  std::cout << c << std::endl;
  //-----string
  std::string s;
  s = "mensaje string";
  std::cout << s << std::endl;
  //-----char
  char c1 = 'f';
  std:: cout<< "imprimier character:" << c1 <<std::endl;

  //-----bool
  bool b1 = true;
  bool b2 = false;
  std::cout << b1 << std::endl;
  std::cout << b2 << std::endl;
  //-----float
  float f1 = 1.1;
  float f2 = 2.2;
  std::cout << f1 << std::endl;
  std::cout << f2 << std::endl;
  //-----double
  double d1 = 1.1;
  double d2 = 2.2;
  std::cout <<"En double "<< d1 << std::endl;
  std::cout << d2 << std::endl;

  return 0;
}