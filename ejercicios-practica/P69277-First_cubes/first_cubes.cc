/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González // alu0101549491@ull.edu.es
 * @date 9 november 2022
 * @brief Dado un número cuenta el cubo del intervalo de números de esa cantidad
 */

#include <iostream>

void Introduccion() {
  std::cout << "Este programa cuenta los cubos de la cantidad indicada de números" << '\n' << std::endl;
}

int main() {
  //Introduccion();
  //std::cout << "Introduce un número: ";
  int numero{0};
  std::cin >> numero;
  for (int i = 0; i <= numero; ++i) {
    int cubo{0};
    cubo = i * i * i;
    if (i == numero) {
      std::cout << cubo << std::endl;
    }   
    else {
      std::cout << cubo << ",";
    }   
  }
}
