#include <limits>
#include <iomanip>
#include <iostream>

char eU();
char eC();
void mE(char el);
void eG(char ju, char co);

int main(){
  char jugador;
  char computadora;
  jugador = eU();
  std::cout<<"jugador: "<<std::endl;
  mE(jugador);
  computadora=eC();
  std::cout<<"computadora: "<<std::endl;
  mE(computadora);

  eG(jugador, computadora);




  return 0;
}

char eU(){
  char jugador;
  std::cout<<"*************PPT*************"<<std::endl;
  std::cout << "piedra papel o tijera | jugador"<<std::endl;
  std::cout<<"*************PPT*************"<<std::endl;
 do
 {
   std::cout<<"Piedra R"<<std::endl;
  std::cout<<"Papel P"<<std::endl;
  std::cout<<"Tijera T"<<std::endl;
  std::cout<<"Elige uno"<<std::endl;
  std::cin>>jugador;
 } while (jugador!='r' && jugador!='p' && jugador!='t' );
 
  return jugador;
};
char eC(){

    srand(time(NULL));
    int num= rand() % 3 + 1;
    switch(num){
      case 1:
      return 'r';
      case 2:
      return 'p';
      case 3:
      return 't';
    }
    return 0;

};
void mE(char el){
  std::cout<<"*************PPT*************"<<std::endl;
  std::cout<<"seleccino el: "<<el<<std::endl;
  switch(el){
    case 'r':
    std::cout<<"jugador: piedra"<<std::endl;
    break;
    case 'p':
      std::cout<<"jugador: papel"<<std::endl;
    break;

    case 't':
      std::cout<<"jugador: tijera"<<std::endl;
      break;
    default:
      std::cout<<"no hay opcion seleccionada"<<std::endl;
      break;
    }
};
void eG(char ju, char co){
  switch (ju)
  {
    case 'r':
    if (co=='r'){
      std::cout<<"empate"<<std::endl;
    }else if(co=='p'){
      std::cout<<"perdiste"<<std::endl;
    }else{
      std::cout<<"ganaste"<<std::endl;
    }
    break;
    case 'p':
    if (co=='r'){
      std::cout<<"ganaste"<<std::endl;
    }else if(co=='p'){
      std::cout<<"empate"<<std::endl;
    }else{
      std::cout<<"perdiste"<<std::endl;
    }
    break;
    case 't':
    if (co=='r'){
      std::cout<<"ganaste"<<std::endl;
    }else if(co=='p'){
      std::cout<<"perdiste"<<std::endl;
    }else{
      std::cout<<"empate"<<std::endl;
    }
    break;
    default:
    std::cout<<"no hay opcion seleccionada"<<std::endl;
    break;
  }

};