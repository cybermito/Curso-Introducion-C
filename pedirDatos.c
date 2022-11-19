/*
    Vamos a ver la entrada de datos desde terminal. La función que vamos a utilizar es scanf() y su estructura
    es la siguiente:

    scanf(formato, arg1, arg2, ... argN);


*/
#include <stdio.h>

int dato;
char cadena[128]; //indicamos el número de caracteres que podrá tener el texto, en este caso 127, ya que el último
//caracter es el \0 null que es donde terminaría la palabra. 
float flotante;
char letra;


int main(){

    printf("Introduce el primer dato: ");
    scanf("%d", &dato);
    printf("\nHas introducido el dato %d\n", dato);

    printf("\n");

    /*
        Para la introducción de texto en este apartado hay que tener en cuenta que:
        No se deben introducir espacios en blanco, ya que los tomaría como el carácter \0 (null),
        y cortaría el texto justo en ese punto.
    */
    printf("Introduce una cadena de caracteres: ");
    scanf("%s", cadena);
    printf("La cadena introducida es: %s\n", cadena);

    printf("\n");

    printf("Introduce un número en coma flotante: ");
    scanf("%f", &flotante);
    printf("El número en coma flotante es: %f\n", flotante);

return 0;
}