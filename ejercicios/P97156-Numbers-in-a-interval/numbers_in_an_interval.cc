/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 6 november 2022 
 * @brief Dados dos números enteros de un intervalo imprime los valores de dentro
 */

#include <iostream>

int main() {
  int primero{0};
  int ultimo{0};
  std::cin >> primero >> ultimo;
  if (primero > ultimo) {
    std::cout << std::endl;
    return 0;
  }
  for(int i = primero; i <= ultimo; i++) {
    if (i == ultimo) {
      std::cout << i << std::endl;
      return 0;
    }
    else {
      std::cout << i << ",";
    }
  }
}