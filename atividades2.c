/*Figura .36: fig03_06.c
Programa de media da turma com repetição controlada por contador*/
#include <stdio.h>

/*função main inicia execução do programa*/
int main( void )

{
    int contador;        /* numero da nota a digitar em seguida */
    int nota;           /* valor da nota */
    int total;          /*  soma das nota inseridas pelo usuario */
    int media;          /* media das notas*/
    
    /*fase de inicialização*/
    total = 0;      /*inicializa total*/
    contador = 1;   /*inicializa contador do loop*/

    /*fase de processamento*/
    while ( contador <= 10 ){           /* loop 10 vezes*/
    printf("Digite a nota: ");          /*prompt para inserção*/
    scanf( "%d", &nota );               /* lê a nota do usuário */
    total = total + nota;               /* soma nota ao total */
    contador = contador + 1;            /* incrementa contador */
    } /* fim do while */
    
    /* fase de término */
    media = total / 10; /* divisão de inteiros */

    printf( "Media da turma é %d\n", media ); /* exibe resultado */
    return 0; /* indica que programa foi concluído com sucesso */
    } /* fim da função main */
