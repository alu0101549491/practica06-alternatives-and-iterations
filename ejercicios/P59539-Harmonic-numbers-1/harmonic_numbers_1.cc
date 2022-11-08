/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 6 november 2022 
 * @brief Dado un valor n se saca el número armónico que le corresponde
 */

#include <iostream>
#include <iomanip>

int main() {
  double numero{0};
  double armonia{0};
  std::cin >> numero;
  
  for (double i = 1 ; i <= numero ; i++) {
    armonia = armonia + (1/i);
  }
  std::cout << std::fixed << std::setprecision(4) << armonia << std::endl;
  return 0;
}