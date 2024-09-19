#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite o primeiro:");
    scanf("%d",&n1);
    printf("Digite o segundo:");
    scanf("%d",&n2);


    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int divisao = n1 / n2;
    int multiplicacao = n1 * n2;

    printf("O resultado da soma foi %d\n" , soma);
    printf("O resultado da subtracao foi %d\n", subtracao);
    printf("O resultado da divisao foi %d\n", divisao);
    printf("O resultado da multiplicacao foi %d\n", multiplicacao);

    return 0;

}