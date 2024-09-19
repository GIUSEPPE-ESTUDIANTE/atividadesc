#include <stdio.h>

int main(){
    float km, tempo, vmedia;
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &km);

    printf("DIgite o tempo gasto (em  horas): ");
    scanf("%f", &tempo);

    vmedia = km / tempo;

    printf("A velocidade media é: %f km/h\n", vmedia);

    return 0;

}