/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 6 november 2022 
 * @brief Dadas las horas, minutos y segundos le suma un segundo y lo pone en formato de reloj
 */

#include <iostream>
#include <string>

int main() {
  int horas{0};
  int minutos{0};
  int segundos{0};
  std::cin >> horas >> minutos >> segundos;
  
  if (horas == 23 && minutos == 59 && segundos == 59) {
    std::cout << "00:00:00" << std::endl;
    return 0;
  }
  if (segundos == 59 && minutos == 59) {
    if (horas < 9) {
      std::cout << "0" << horas + 1 << ":00:00" << std::endl;
      return 0;
    }    
    else {
      std::cout << horas + 1 << ":00:00" << std::endl;
      return 0;
    }
  }

  if (segundos == 59) {
    if (horas < 10 && minutos < 9) {
      std::cout << "0" << horas << ":" << "0" << minutos + 1 << ":00" << std::endl;
      return 0;
    }
    if (horas < 10) {
      std::cout << "0" << horas << ":" << minutos + 1 << ":00" << std::endl;
      return 0;
    }
    if (minutos < 9) {
      std::cout << horas << ":" << "0" << minutos + 1 << ":00" << std::endl;
      return 0;
    }
    else {
      std::cout << horas << ":" << minutos + 1 << ":00" << std::endl;
      return 0;
    }
  }
  else {
    if (horas < 10) {
      if (minutos < 10) {
        if (segundos < 9) {
          std::cout << "0" << horas << ":0" << minutos << ":0" << segundos + 1 << std::endl;
          return 0;
        }
        else {
          std::cout << "0" << horas << ":0" << minutos << ":" << segundos + 1 << std::endl;
          return 0;
        }
      }
      else {
        if (segundos < 9) {
          std::cout << "0" << horas << ":" << minutos << ":0" << segundos + 1 << std::endl;
          return 0; 
        }
        else {
          std::cout << "0" << horas << ":" << minutos << ":" << segundos + 1 << std::endl;
          return 0;
        }
      }
    }
    else {
      if (minutos < 10) {
        if (segundos < 9) {
          std::cout << horas << ":0" << minutos << ":0" << segundos + 1 << std::endl;
          return 0;
        }
        else {
          std::cout << horas << ":0" << minutos << ":" << segundos + 1 << std::endl;
          return 0;
        }
      }
      else {
        if (segundos < 9) {
          std::cout << horas << ":" << minutos << ":0" << segundos + 1 << std::endl;
          return 0;
        }
        else {
          std::cout << horas << ":" << minutos << ":" << segundos + 1 << std::endl;
          return 0;
        }
      }
    }
  }
}