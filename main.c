#include <stdio.h>
void main()
{
    int from, to;
    float value;

    printf("Conversao de Temperatura\n");
    printf("Insira o numero da unidade para converter: \n 1.Celsius\n 2.Farenheit\n 3.Kelvin\n");
           scanf("%d",&from);

    printf("Conversao de Temperatura\n");
    printf("Insira o numero da unidade para converter:\n 1.Celsius\n 2.Farenheit\n 3.Kelvin\n");
           scanf("%d",&to);

    printf("Insira o valor a ser convertido:\n");
    scanf("%f", &value);

    /* Convertendo o valor fornecido da unidade especificada para Kelvin */
    switch(from){
    case 1:
        value = value + 273.15;
        break;
    case 2:
        value = (value+459.67)*5/9;
        break;
    case 3:
        break;
    default:
        break;
    }

    /* Convertendo valor de Kelvin para unidade especificada */
    switch(to){
    case 1:
        value = value-273.15;
        break;
    case 2:
        value = value*9/5-459.67;
        break;
    case 3:
        break;
    default:
        break;
    }

    printf("Valor Convertido: %f", value);
}