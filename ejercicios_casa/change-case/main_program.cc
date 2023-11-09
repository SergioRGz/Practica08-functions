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
#include "change-case.h"

int main() {
	std::string word;
	std::cin >> word;
	std::string changed = ChangeCase(word);
	std::cout << changed << std::endl;
	return 0;
}

