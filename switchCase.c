#include <stdio.h>
int optMenu = 1;
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

    switch(optMenu){

        case 0:

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
                break;

        case 1:

            printf("Usted eligió la opción 0 (Platzi Comidas), elija una:\n \n");
            printf("********************************\n");
            printf("Opción 0 para Platzi Hamburguesa Vegana\n");
            printf("Opción 1 para Platzi Pizza\n");
            printf("Opción 2 para Platzi Pasta\n");
            printf("********************************\n \n");

            if (optBebidas == 0){
                printf("Elegiste una Platzi Hamburguesa Vegana\n");
            }
            else if (optBebidas == 1){
                printf("Elegiste una Platzi Piza\n");
            }
            else if (optBebidas == 2){
                printf("Elegiste una Platzi Pasta");
            }
            break;

        case 2:

            printf("Usted eligió la opción 0 (Platzi Postres), elija una:\n \n");
            printf("********************************\n");
            printf("Opción 0 para Platzi Helado\n");
            printf("Opción 1 para Platzi Fruta\n");
            printf("Opción 2 para Platzi Té\n");
            printf("********************************\n");

            if (optBebidas == 0){
                printf("Elegiste una Platzi Helado\n");
            }
            else if (optBebidas == 1){
                printf("Elegiste una Platzi Fruta\n");
            }
            else if (optBebidas == 2){
                printf("Elegiste una Platzi Té");
            }

    }

    return 0;
}