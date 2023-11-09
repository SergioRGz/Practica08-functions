/**
 * Univesidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 *
 * @author Sergio Rodriguez Gonzalez alu0101664828@ull.edu.es
 * @date 6 November 2023
 * @brief A program that says if a number is perfect or not
 */

#include <iostream>


bool is_perfect (int number){
	int result;
  for (int i = 1; number < i; i++){
	  result == number % i + result;
	  std::cout << result << std::endl;
  } 
  return result;
  }

int main() {
  int number{0};
  std::cin >> number;
  std::cout << is_perfect << std::endl;
}

  
		  
