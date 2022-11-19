#include <stdio.h>

int n = 20;

int main(int argc, char const *argv[])
{
    
    do
    {
        printf("El valor de n es: %d\n", n);
        n = n - 1;

    } while (n >= 10);
    
    return 0;
}
