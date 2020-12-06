#include "funciones.h"
int CuadradoSum (int numb){
    int suma=0; //resultado suma
    for (int i=0; i <= numb; i++){
        suma=(suma+i);

    }return suma * suma;
}
int SumCuadrado (int numb2){
    int suma2=0; //resultado suma 2
    for (int j=0; j<=numb2; j++){
        suma2=suma2 +(j*j);
    }return suma2;
}
