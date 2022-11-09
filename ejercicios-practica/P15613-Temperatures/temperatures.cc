/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Fabián González // alu0101549491@ull.edu.es
  * @date 9 november 2022
  * @brief Dada una temperatura el programa indica si está bien, si es demasiado caliente o demasiado frío
  */

#include <iostream>

void Introduccion() {
  std::cout << "Este programa indica si una temperatura es demasiado fría, demasiado caliente o si está lo suficientemente bien" << std::endl;  
}

int main() {
  //Introduccion();
  //std::cout << "Escribe una temperatura en grados celsius: ";
  int temperatura{0};
  std::cin >> temperatura;
  if (temperatura > 30) {
    std::cout << "it's hot" << std::endl;
    if (temperatura >= 100) {
      std::cout << "water would boil" << std::endl;
    }   
  }
  else
    if (temperatura < 10) {
      std::cout << "it's cold" << std::endl;
      if (temperatura <= 0) {
        std::cout << "water would freeze" << std::endl;
      }   
    }
  else 
    if (temperatura >= 10 && temperatura <= 30) {
      std::cout << "it's ok" << std::endl;
    }   
  return 0;
}
