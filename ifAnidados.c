#include <stdio.h>
int optMenu = 0;
int optBebidas = 0;
int optComidas = 0;
int optPostres = 0;

int main(){
    //Este programa genera menús según lo que el usuario elija
    printf("Bienvenid@ a Platzi Store \n");
    printf("----- Menú de Opciones -----\n");
    printf("****************************\n");
    printf("Opción 0 para Platzi bebidas\n");
    printf("Opción 1 para Platzi comidas\n");
    printf("Opción 2 para Platzi postres\n");
    printf("****************************\n \n");
    if(optMenu == 0){
        printf("Usted eligió la opción 0 (Platzi Bebidas), elija una:\n \n");
        printf("********************************\n");
        printf("Opción 0 para Platzi cola cero\n");
        printf("Opción 1 para Platzi cola normal\n");
        printf("Opción 2 para Platzi Piña colada\n");
        printf("********************************\n \n");

        if (optBebidas == 0){
            printf("Elegiste una Platzi Cola Cero\n");
        }
        else if (optBebidas == 1){
            printf("Elegiste una Platzi Cola Normal\n");
        }
        else if (optBebidas == 2){
            printf("Elegiste una Platzi Piña Colada");
        }
    }
    else if(optMenu == 1){
        printf("Usted eligió la opción 0 (Platzi Comidas), elija una:\n \n");
        printf("********************************\n");
        printf("Opción 0 para Platzi cola cero\n");
        printf("Opción 1 para Platzi cola normal\n");
        printf("Opción 2 para Platzi Piña colada\n");
        printf("********************************\n \n");
    }
    else if(optMenu == 2){
        printf("Usted eligió la opción 0 (Platzi Postres), elija una:\n \n");
        printf("********************************\n");
        printf("Opción 0 para Platzi cola cero\n");
        printf("Opción 1 para Platzi cola normal\n");
        printf("Opción 2 para Platzi Piña colada\n");
        printf("********************************\n");
    }
}