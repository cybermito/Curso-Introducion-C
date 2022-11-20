#include <stdio.h>

int n = 30;

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 30; i++){
        printf("El número recorrido es el: %d\n", i);
        if (i == 20){
            break;
        }
    }
    return 0;
}
