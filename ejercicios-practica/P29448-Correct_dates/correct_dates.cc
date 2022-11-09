/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Fabián González // alu0101549491@ull.edu.es
  * @date 9 november 2022
  * @brief Verifica si una fecha dada es correcta
  */

#include <iostream>

void Introduccion() {
  std::cout << "En este programa tienes que escribir una fecha (ya sea real o inventada) y el programa verificará si es correcta" << '\n' << std::endl;
}

int main() {
  //Introduccion()
  //std::cout << "Introduce una fecha: ";
  int dia{0};
  int mes{0};
  int año{0};
  std::cin >> dia >> mes >> año;
  if (dia <= 0) {
    std::cout << Incorrect Date << std::endl;
    return 0;
  }
  if (mes == 2 && dia > 28 || mes == 4 && dia > 30 || mes == 6 && dia > 30 || mes == 9 && dia > 30 || mes == 11 && dia > 30) 
}
