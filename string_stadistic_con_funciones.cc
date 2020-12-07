#include <iostream>
#include <vector>
#include <string>
#include "funciones4.h"

int main (){
    std::vector <std::string> vectorwords = {"abracadabra", "queso", "leche", "agua", "harina", "mantequilla", "huevo", "aceite", "levadura", "horno"};
    for (int i=0; i < vectorwords.size(); i++){
        std::cout << vectorwords[i] << std::endl;
        std::string palabras = vectorwords[i];
        
        std::cout << "Numero de letras: " << NumeroLetras(palabras) << std::endl;
        std::cout << "Primera letra: " << PrimeraLetra(palabras) << std::endl;
        std::cout << "Última letra: " << UltimaLetra(palabras) << std::endl;
        if (Abracadabra2(palabras)){
            std::cout << "En el vector esta la palabra 'abracadabra'" << std::endl;
        }
        std::cout << std::endl;


    }
        
 return 0;    
}
