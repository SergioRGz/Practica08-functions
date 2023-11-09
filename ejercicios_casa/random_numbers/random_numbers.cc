/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Sergio Rodriguez Gonzalez alu0101664828@ull.edu.es
 * @date Nov 8 2023
 * @brief Un programa que cambia de mayusculas a minusculas y viceversa las letras en una palabra.
 * @bug there are no known bugs
 */

#include <iostream>
#include <experimental/random>
int Parametro(int digit1, int digit2) {
  while (digit1 >= digit2) {
	  std::cin >> digit2;
  }
  return digit2;
}

int Random_number(int digit1, int digit2) {
  int result = std::experimental::randint(digit1, digit2);
  return result; 
}

int main() {
  int number1, number2;
  std::cin >> number1 >> number2;
  number2 = Parametro(number1, number2);
  int result = Random_number(number1, number2);
  std::cout << result << std::endl;
}




