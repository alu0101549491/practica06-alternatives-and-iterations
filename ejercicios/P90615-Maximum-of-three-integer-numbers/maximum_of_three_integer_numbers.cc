/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 6 november 2022
 * @brief Determina el número mayor entre tres opciones
 */

#include <iostream>

int main() {
  int numero_1{0};
  int numero_2{0};
  int numero_3{0};
  std::cin >> numero_1 >> numero_2 >> numero_3;
  
  if (numero_1 == numero_2 and numero_2 == numero_3) {
    std::cout << numero_1 << std::endl;
    return 0;
  }

  if (numero_1 == numero_2) {
    if (numero_1 > numero_3) {
      std::cout << numero_1 << std::endl;
    }
    if (numero_1 < numero_3) {
      std::cout << numero_3 << std::endl;
    }
    return 0;
  }
  if (numero_1 == numero_3) {
    if (numero_1 > numero_2) {
      std::cout << numero_1 << std::endl;
    }
    if (numero_1 < numero_2) {
      std::cout << numero_2 << std::endl;
    }
    return 0;
  }
  if (numero_2 == numero_3) {
    if (numero_2 > numero_1) {
      std::cout << numero_2 << std::endl;
    }
    if (numero_2 < numero_1) {
      std::cout << numero_1 << std::endl;
    }
    return 0;
  }

  if (numero_1 > numero_2) {
    if (numero_1 > numero_3) {
      std::cout << numero_1 << std::endl;
    }
    if (numero_1 < numero_3) {
      std::cout << numero_3 << std::endl;
    }
    return 0;
  }
  if (numero_1 < numero_2) {
    if (numero_2 > numero_3) {
      std::cout << numero_2 << std::endl;
    }
    if (numero_2 < numero_3) {
      std::cout << numero_3 << std::endl;
    }
    return 0;
  }  
  return 0;  
}
