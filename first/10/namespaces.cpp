#include <iostream>
namespace primero{
  std::string y = "este es un mensaje de arriba";
}

int main(){
  using namespace primero;
  using namespace std;
  int x = 9;
  string e = "mi mensaje";

  cout << y <<endl<< x <<endl<< e <<endl;
  

  return 0;
}