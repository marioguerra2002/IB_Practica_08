#include <iostream>
#include "funciones.h"

int main (){
    int numero; 
    int numero2;
    int resta;
    int a, b;
    int resultado_suma_cuadrados;
    std::cout << "Introduce el número para el cual hacer el cuadrado de la suma menos la suma de los cuadrados de los n numeros anteriores" << std::endl;
    std::cin >> numero;
    std::cout << CuadradoSum (numero) - SumCuadrado (numero) << std::endl;

    return 0;
}
