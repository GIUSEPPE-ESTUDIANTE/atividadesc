#include <stdio.h>

int main(){
    int n1;
    int div, rs;

    printf("Digite um numero");
    scanf("%d", &n1);

    printf("Digite o valor do divisor");
    scanf("%d", &div);

    rs = n1 / div;

    printf("o resto da divisão de %d por %d é: %d\n", n1, div, rs);

    return 0;

    
}