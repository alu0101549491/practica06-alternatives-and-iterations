/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González
 * @date 31 october 2022
 * @brief Calculator of products of two multipliers
 **/

#include <iostream>

int main() {
  int numero_1;
  int numero_2;
  std::cin >> numero_1;
  std::cin >> numero_2;

  if (numero_1 > numero_2) {
    std::cout << numero_1 << std::endl;
  }
  else if (numero_1 < numero_2) {
    std::cout << numero_2 << std::endl;
  }
  else if (numero_1 == numero_2) {
    std::cout << numero_2 << std::endl;
  }
}
