#include <stdio.h>

int main(){
    int a = 20;
    int b = 50;

    //Se pueden omitir las llaves de los bloques condicionales cuando solo vamos a tener una sola instrucción en este. 
    if (a == b) printf("son iguales"); 
    
    else printf("no son iguales");

    return 0;
    
}