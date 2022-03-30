#include <stdio.h>
#include <stdlib.h>
void main()
{
    //definindo variaveis

    int opcao;
    printf("digite um numero entre 1 e 3:\n");
    scanf("%d", &opcao);


    //confere e valida a opcao
    while(opcao<1 || opcao>3) {
    //interface do menu
        printf("********Escolha uma opcao*********\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("************************************\n\n");
        //lendo as opções
        scanf("%d", &opcao);
        //resultado de acordo com a opção
        switch(opcao){
         case 1:
            printf("\nOpcao 1 foi escolhida");
         break;
         case 2:
            printf("\nOpcao 2 foi escolhida");
         break;
         case 3:
            printf("\nOpcao 3 foi escolhida");
         break;

         default:
            printf("\nOpcao invalida\n\n");
            break;
        }
    }

    printf("\n\n***********************************\n");
    printf("\n\nIsso, parabens!!!\n\n");


    printf("\n");
    return 0;
}
