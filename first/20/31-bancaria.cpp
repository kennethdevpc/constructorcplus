#include <iostream>//---- libreria de entrada y salida
#include <iomanip> //----libreria para redondear los decimales
#include <ctime> //----libreria para numeros aleatorios
#include <limits>//----libreria para

int main(){

  double saldo;
  double ingreso;
  double egreso;
  double saldoFinal;
  std::string name;
  double opc;

do{
  std::cout << "Ingrese un numero o un caracter ara probar libreria limits: "<<"\n";
  std::cin >> opc;  //---si tengo una entrada que es entero y le mando un caracter pues daria error 
    

  if(!(std::cin>>opc)){ //--por eso se hace el uso del clear y el ignore
     std::cin.clear(); 
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::cout << "entrada no valida"<<opc << std::endl;
     }
  
  std::cout << "salio del if: "<<opc << std::endl;
} while (opc != 4);

  // srand(time(NULL));
  // double num = rand() % 5 + 1;
  // std::cout<<std::setprecision(1)<< std::fixed << "su numero random es  " << num << std::endl; //----se usa iomanip para redondear los decimales
  

  // std::getline(std::cin >> std::ws, name);
  // std::cin >> saldo;

  // std::cout << "Su nombre es: "<<std::setprecision(2)<<std::fixed << saldo << std::endl;

  // std::cout << "Ingrese su saldo: ";
  // std::cin >> saldo;
  // std::cout << "Ingrese su ingreso: ";
  // std::cin >> ingreso;
  // std::cout << "Ingrese su egreso: ";
  // std::cin >> egreso;

  // saldoFinal = saldo + ingreso - egreso;
  // std::cout<<std::setprecision(1)<< std::fixed << "Su saldo final es: " << saldoFinal << std::endl;

  return  0;
}