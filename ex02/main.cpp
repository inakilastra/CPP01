#include <iostream>
#include <string>

int main() {
  // Variable string
  std::string my_string = "HI THIS IS BRAIN";

  // Obtener la dirección de memoria de la variable string
  std::string* stringPTR = &my_string;  // Puntero al string
  std::string& stringREF = my_string;  // Referencia al string

  // Imprimir direcciones de memoria
  std::cout << "Memory address of the string variable: " << &my_string << std::endl;
  std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

  // Imprimir valores
  std::cout << "\nValue of the string variable: " << my_string << std::endl;
  std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

  return 0;
}