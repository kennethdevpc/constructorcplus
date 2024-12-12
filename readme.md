- instalamos:

  ```txt
  code Runner
  c/c++ intelliSense
  ```

- configuramos en el visual
  **En configuraciones:** `code-runner: Run in Terminal`
  clickeamos en esa opcion: `Wheter to run coe in integrated Terminal `
- Libreria de C++
  [Libreria de C++](https://cplusplus.com/reference/cmath/)

- entrada user y salida

  ```c++
  #include <iostream>

  //---cout <<  (operador de insercion)
  //---cin >> (operador de extraccion)
  //---std::cin>>std::ws (para poder recibir espacios y que  su vez deje terminar de escribir cuando haya un salto de linea)

  int main(){
    std::string nombre;
    int edad;
    std::cout << "Ingrese su edad: ";
    std:: cin >> edad;
    std::cout << "Ingrese su nombre completo : ";
    std:: getline(std::cin>>std::ws, nombre); // se hace asi para que pueda recibir espacios pero que se espere a la vez a que el usuario termine de escribir cuando hay un salto de linea ya que sin ese "ws" toma el "enter" o el "/n" como una orden de que ya termino de escribir



    std:: cout << "Su nombre es: " << nombre << std::endl;
    std::cout << "Su edad es:  " << edad << std::endl;


    return 0;
  ```

- numeros aleatorios

  ```c++
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
  ```

- si queiro que por ejemplo se valide que sea una entrada que se aun num y depronto iserto un caracter usa estas librerias

  tambien si necesito tener solo un cierto de numeros decimales usa la libreria mencionada

  ```c++
  #include <iostream>//---- libreria de entrada y salida
    #include <iomanip> //----libreria para redondear los decimales
    #include <ctime> //----libreria para numeros aleatorios
    #include <limits>//----libreria para ignorar caracteres en un numerico

    int main(){


      double opc;

    do{
      std::cout << "Ingrese un numero o un caracter ara probar libreria limits: "<<"\n";
      std::cin >> opc;  //---si tengo una entrada que es entero y le mando un caracter pues daria error


      if(!(std::cin>>opc)){ //--por eso se hace el uso del clear y el ignore
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "entrada no valida"<<opc << std::endl;
        continue;
      }

      std::cout << "salio del if: "<<opc << std::endl;
    } while (opc != 4);

      srand(time(NULL));
      double num = rand() % 5 + 1.8888;
      std::cout<<std::setprecision(1)<< std::fixed << "su numero random es  " << num << std::endl; //----se usa iomanip para redondear los decimales


      return  0;
    }
  ```

- # cuando devuelvo un -1

  - si en alguna parte de codigo encuentro que retorna un -1 significa que no encontro lo que buscaba

- # matriz en c++

  ```c++
  #include <iostream>
  int main (){

    //------no es necesario pasarle para el primer parametro [][] , sepuede dear vacio el primer parametro para 2d
    std::string matriz[][4] = {{"a","b","c","da"},
                                {"d","e","f","db"},
                                {"g","h","i","dc"}};

    std::cout<<matriz[0][0] << std::endl;
    std::cout<<matriz[1][5] << std::endl;

    //----para sacar el tamaño
    int filas = sizeof(matriz)/sizeof(matriz[0]);
    int columnas = sizeof(matriz[0])/sizeof(matriz[0][0]);
    std::cout << "filas"<<filas << std::endl;
    std::cout << "columnas"<<columnas << std::endl;
    for (int i = 0; i < filas; i++)
    {
    for (int j = 0; j < columnas; j++){
      std::cout << matriz[i][j] << " ";
    }
    std::cout << " \n";
    }

    //------mostrar solo la fila 2

    for (int i=0; i<sizeof(matriz[1])/sizeof(matriz[2][0]); i++)
    {
      std::cout<<matriz[1][i] << "**";
    }


    return 0;
  }
  ```
