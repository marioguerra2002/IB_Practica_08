#include <iostream>
#include <vector>
#include <string>

int NumeroLetras (std::string palabras){
    
  return palabras.length();
}


char PrimeraLetra (std::string palabras){
    
  return palabras.front();
}

char UltimaLetra (std::string palabras){
    
  return palabras.back();
}


void Abracadabra2 (std::string palabras){
  palabras.find("abracadabra")!= std::string::npos;
  return; 
}
