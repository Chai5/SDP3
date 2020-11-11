
#include "calculadora_local.h"

int main(int argc, char *argv[])
{
    int a, b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    printf("Suma: %d\n", suma(a, b));
    printf("Resta: %d\n", resta(a, b));
    printf("Multiplicacion: %d\n", mutiplicacion(a, b));
    printf("Division: %f\n", division(a, b));

    exit(0);
}