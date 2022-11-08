/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 * 
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 6 november 2022
 * @brief change input letters from lowercase to uppercase and vice versa
 */

#include <iostream>

int main() {
  char letter{0};
  int changed_letter{0};
  std::cin >> letter;
  if (static_cast<int>(letter) >= 97) {
    changed_letter = static_cast<int>(letter);
    changed_letter = changed_letter - 97;
    changed_letter = changed_letter + 65;
    std::cout << static_cast<char>(changed_letter) << std::endl;
  }  
  else
    if (static_cast<int>(letter) < 97) {
      changed_letter = static_cast<int>(letter);
      changed_letter = changed_letter + 97;
      changed_letter = changed_letter - 65;
      std::cout << static_cast<char>(changed_letter) << std::endl;
    }
}
