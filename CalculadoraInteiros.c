#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função que soma numeros inteiros
void Soma(){
    int a, b, c; //definindo variaveis inteiras
    printf("\nDigite um numero que voce deseja somar:");
    scanf("%i", &a);// input da variavel a definida pelo usuario
    printf("Digite outro numero que deseja somar: ");
    scanf("%i", &b);// input da variavel b definida pelo usuario

    c = a + b; //soma das variaveis a e b
    printf("O resultado eh: %i\n", c);// imprimi na tela o resultado da soma
}
//Função que subtrai numeros inteiros
void Subt(){
    int a, b, c; //definindo variaveis inteiras
    printf("\nDigite um numero que voce deseja subtrair:");
    scanf("%i", &a);// input da variavel a definida pelo usuario
    printf("Digite outro numero que deseja subtrair: ");
    scanf("%i", &b);// input da variavel b definida pelo usuario

    c = a - b; //subtração das variaveis a e b
    printf("O resultado eh: %i\n", c);// imprimi na tela o resultado da subtração
}
//Função que multiplica numeros inteiros
void Mult(){
    int a, b, c; //definindo variaveis inteiras
    printf("\nDigite um numero que voce deseja multiplicar:");
    scanf("%i", &a);// input da variavel a definida pelo usuario
    printf("Digite outro numero que deseja multiplicar: ");
    scanf("%i", &b);// input da variavel b definida pelo usuario

    c = a * b; //multiplicação das variaveis a e b
    printf("O resultado eh: %i\n", c);// imprimi na tela o resultado da multiplicação
}
//Função que divide numeros inteiros
void Divi(){
    int a, b, c; //definindo variaveis inteiras
    printf("\nDigite um numero que voce deseja dividir:");
    scanf("%i", &a);// input da variavel a definida pelo usuario
    printf("Digite outro numero que deseja dividir: ");
    scanf("%i", &b);// input da variavel b definida pelo usuario

    c = a / b; //divisão das variaveis a e b
    printf("O resultado eh: %i\n", c);// imprimi na tela o resultado da divisão
}
//Função onde consta o menu de opções
int menu(int opt){
    printf("\n----------------------------------------------\n");
    printf("Qual operacao matematica voce deseja realizar?\n");
    printf("----------------------------------------------\n");
    printf("Digite 1 para realizar uma soma:\n");
    printf("Digite 2 para realizar uma subtracao:\n");
    printf("Digite 3 para realizar uma multiplicacao:\n");
    printf("Digite 4 para realizar uma divisao:\n");
    printf("Digite 0 para sair:\n");
    opt = 0;
    do{
        printf("Digite: ");
        scanf("%i", &opt);
    } while(opt < 0 || opt > 4);
    return opt;
}
//Função para limpar a tela
void clear(){
    printf("\e[1;1H\e[2J");
}


void main(){
    int opt;//CHAMANDO A VARIAVEL DE OPÇÃO
    clear();//FUNÇÃO QUE LIMPA A TELA
    
    // ENQUANTO OPT SER DIFERENTE OU IGUAL A 0, OPT IRA RECEBER FUNÇÃO MENU, ASSIM CHAMANDO A SWITCH
    while(opt !=0){
    opt = menu(opt);
    switch (opt){
    
    case 1:
        Soma();
        break;
    
    case 2:
        Subt();
        break;

    case 3:
        Mult();
        break;

    case 4:
        Divi();
        break; 

    default:
        break;
    }
    }
return 0;
system("pause");
}
