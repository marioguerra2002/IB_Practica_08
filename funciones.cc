#include "funciones.h"
#include <iostream>
bool PrimeCheck (int number){
    int i=0; 
    int a=1;
    
    bool prime;
    if ((number != i) && (number != a)){
        for (int x=2; x <= number; x++){
            if (number % x == 0){
                if (number == x){
                    prime=true;
                }else{
                    prime=false;
                }
            }
        }
    }else {
        prime=false;
    }
    return prime;
}
