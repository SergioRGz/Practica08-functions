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

#include "change-case.h"
#include <cctype>

std::string ChangeCase(const std::string &input) {
	std::string result = input;
	for(char &letter : result) {
		if (std::isupper(letter)) {
			letter = std::tolower(letter);
		}else if (std::islower(letter)) {
			letter = std::toupper(letter);
		}
	}
	return result;
}

bool IsUpperCase(char letter) {
		return std::isupper(letter);
		}

