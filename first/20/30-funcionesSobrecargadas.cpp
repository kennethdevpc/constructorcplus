#include <iostream>
void pizza();  //-----funcion sin parametros con nombre "pizza"
void pizza(int ingredientes); //-----funcion con parametros con nombre "pizza"
int main()
{

  pizza();
  pizza(2);

  return 0;
}
void pizza(){
  std::cout << "pizza sin parametro" << "\n";

}
void pizza(int ingredientes){
  std::cout << "pizza con  parametro: "<< ingredientes << "\n";

}