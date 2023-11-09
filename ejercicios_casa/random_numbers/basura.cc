#include <iostream>
#include <cstdlib>  // Incluye la biblioteca para std::rand
#include <ctime>
int main() {
    // Configura la semilla de la generación de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Genera un número aleatorio entre 1 y 100
    int numeroAleatorio = std::rand() % 100 + 1;

    // Imprime el número aleatorio
    std::cout << "Número aleatorio: " << numeroAleatorio << std::endl;

    return 0;
}

