/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnología
 * Grado en Ingeniería Informática
 *  Informática Básica 2022-2023
 *
 *  @author Sergio Rodriguez Gonzalez alu0101664828@ull.edu.es
 *  @date Nov 8 2023
 *  @brief Un prigrama que realiza una funcion matematica determinada con tres variables, una división donde el numerador es la raíz de 2*t - 4 y el denominador x^2 - y^2
 *  @bug there are no know bugs
 */

#include <iostream>
#include <cmath>

double numerador(double digit1) {
  double result = sqrt(2 * digit1 - 4);
  return result;
}
  
double denominador(double digit1, double digit2) {
  double result = pow(digit1, 2) - pow(digit2, 2);
  return result;
}

double resultado(double num, double den) {
  double result = num / den;
  return result;
}

int main() {
  double number1, number2, number3;
  std::cin >> number1 >> number2 >> number3;
  double numerador_calculado = numerador(number3);
  double denominador_calculado = denominador(number1, number2);
  double result = resultado(numerador_calculado, denominador_calculado);
  std::cout << result << std::endl;
  return 0;
}

