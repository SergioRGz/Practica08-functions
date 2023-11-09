/**
 * Univesidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 *
 * @author Sergio Rodriguez Gonzalez alu0101664828@ull.edu.es
 * @date 6 November 2023
 * @brief A program that with a quantity of seconds, computes how many hours h, minutes m and seconds s it represents. That is, we must have s + 60m + 3600h = n, with 0≤ s <60 and 0≤ m <60.
 */


#include <iostream>


  void decompose(int digit, int& hours, int& minutes, int& seconds){
	  hours = digit / 3600;
 	  digit %= 3600;
 	  minutes = digit / 60;
 	  seconds = digit % 60;
  }

  int main(){
	  int number, number2, number3, number4;
	  std::cin >> number;
	  decompose(number, number2, number3, number4);
	   std::cout << number2 << " " << number3 << " " << number4 << std::endl;
  } 
