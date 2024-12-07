#include <iostream> //---- libreria de entrada y salida
#include <ctime> //---libreria para numeros aleatorios
int main (){
//primero se da la semilla si no se da la semilla es ecir si no llamas a srand(), 
//el generador usará la misma semilla predeterminada cada vez que ejecutes el programa,
// lo que producirá la misma secuencia de números aleatorios.
   srand(time(NULL)); //---- inicializa la semilla del generador de numeros aleatorios
  int x = rand() % 100 + 1; //---- genera un numero aleatorio entre 1 y 100

  std::cout << x << std::endl;


  return 0;

}