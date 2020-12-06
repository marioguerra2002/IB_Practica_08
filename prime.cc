#include <iostream>
#include "funciones.h"
int main(int argc, char*argv[]){
    int numb = std::stoi (argv[1]);
    int i= 0;
    int w= 0;
    int number=0; 
    int primo; 
    

    while ((i != numb)&&(w<1000)){
        if (PrimeCheck(w)){
            i++;
            w=primo;
        }else w++;
        
    }
        std::cout << primo << std::endl;
    return 0;
    
    
}
