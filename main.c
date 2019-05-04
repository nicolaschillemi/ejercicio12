#include <stdio.h>

void main()

{

    float celsius;
    float resultado;


    printf("Ingresar grados Celsius: ");
    scanf("%f",&celsius);

    resultado = celsius * 9/5 + 32;

    printf("En grados Fahrenheit son: %f",resultado);

}