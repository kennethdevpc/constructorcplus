#include <iostream>
#include <functional>

int main(){

  bool a = true;
  bool b = false;
  std::string c = "false";
  std::string d ;

  a &&std::cout << "vedadero con operador logico &&" << std::endl;

  if(a && b){
    std::cout << "vedadero con operador logico &&" << std::endl;
  }else if (a || b){
    std::cout << "vedadero con operador logico ||" << std::endl;  
  } 
  
  if(!b){
    std::cout << "se nego el falseo de be por eso muestra este mensaje!" << std::endl;
  }




  return 0;

}