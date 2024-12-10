#include <iostream>
void functionTransform2(int &a, int &b);//----funcion con referencia, es decir se pasa esa memoria y realmente si se cambia esa variable
void functionTransform(int a, int b);//----funcion sin referencia, no se puede cambiar la varible ya que se pasa por valor
int main()
{

  int x = 10;
  int y = 2000;
  std::cout <<"x normal: " <<x << std::endl;
  std::cout << "y normal: " <<y << std::endl;
  int tem;

  tem = x;
  x = y;
  y = tem;

  std::cout <<"x sin funcion" <<x << std::endl;
  std::cout << "y sin funcion" <<y << std::endl;

  //----pasar por valor
  int a = 10;
  int b = 2000;

   functionTransform(a, b);

  std::cout <<"por valor: "<< a << std::endl;
  std::cout <<"por valor: "<< b << std::endl;


  functionTransform2(a, b);

  std::cout <<"por referencia: "<< a << std::endl;
  std::cout <<"por referencia: "<< b << std::endl;

  return 0;
};

void functionTransform2(int &a, int &b){ //----funcion por referencia
    int tem;

    tem = a;
    a = b;
    b = tem;
    return ;
}
void functionTransform(int a, int b){ //----funcion por valor
    int tem;

    tem = a;
    a = b;
    b = tem;
    return ;
}
