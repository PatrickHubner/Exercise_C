#include <stdio.h>
#include <stdlib.h>

void main(){

   int Pergunta;

   printf("Digite um numero:");
   scanf("%d", &Pergunta);

   switch (Pergunta)
   {
       case 1 :
       printf("um");
       break;

       case 2 :
       printf("dois");
       break;

       default :
       printf("nenhum");
       break;
   }


    return 0;

}
