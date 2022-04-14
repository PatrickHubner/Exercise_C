#include <stdio.h>
#include <stdlib.h>
#define CADMAX  100 // DEFININDO O TAMANHO MAXIMO DE CADASTROS DE ALUNOS
#define A1P 0.2 // porcentagem da A1
#define A2P 0.3 // porcentagem da A2
#define A3P 0.5 //porcentagem da A3
//AMBAS DEFINIDOS COMO CONSTANTES PARA FICAR MAIS FACIL DE MUDAR POSTERIORMENTE

//Definindo uma struct antes de todas as funções, onde *equivale ao numero de carcteres e o segundo * equivale a posição da array
typedef struct {
    char **nome[50];
    char **email[100];
    int matricula;
    float A1;
    float A2;
    float A3;
    float mediafinal;
} Aluno; // CRIANDO UMA STRUCT CHAMADA ALUNO ONDE IRA GUARDAR DADOS DO ALUNO.


// FUNÇÃO MEDIA RECEBE A1, A2, A3 CADASTRADAS NOS DADOS DA STRUCT
float media(float A1, float A2, float A3){
    float nota1, nota2, nota3;
    float media;
    nota1 = A1P * A1; //porcentagem vezes a nota
    nota2 = A2P * A2;
    nota3 = A3P * A3; 
    media = nota1 + nota2 + nota3; //soma das notas ja prontas
    return media;//RETORNA A MEDIA PRONTA NO FINAL DA FUNÇÃO
}//FUNÇÃO PARA CALCULAR A MEDIA

void situacao(float media){
    if (media >= 7.0){
        printf("\nVoce foi aprovado"); // SE A MEDIA FOR MAIOR OU IGUAL A SETE IMPRIMI NA TELA APROVADO
    } else if(media <=6.0){
        printf("\nVoce foi reprovado");// CASO CONTRARIO FOR IGUAL A 6 OU MENOR QUE 6 IMPRIMI NA TELA REPROVADO
    }
} // FUNÇÃO QUE CITA A CONDIÇÃO DE APROVAÇÃO DO ALUNO

void Cadastrar(Aluno alunos[CADMAX]){//RECEBE A STRUCT ALUNO COM A VARIAVEL ALUNOS E A CONSTANTE PRE DEFINIDA DO TOTAL DE CADASTROS PERMITIDOS
    for (int pos = 0; pos < CADMAX; pos ++){
    printf("Digite o nome do aluno (%d): ", pos);
    scanf("%s", &alunos[pos].nome);
    printf("Digite o email do aluno(%d): ", pos);
    scanf("%s", &alunos[pos].email);
    printf("Digite a matricula do aluno(%d): ", pos);
    scanf("%d", &alunos[pos].matricula);
    printf("Digite a nota A1 do aluno(%d): ", pos);
    scanf("%f", &alunos[pos].A1);
    printf("Digite a nota A2 do aluno(%d): ", pos);
    scanf("%f", &alunos[pos].A2);
    printf("Digite a nota A3 do aluno(%d): ", pos);
    scanf("%f", &alunos[pos].A3);

    printf("Voce cadastrou com sucesso!!!\n");
    }
} // FUNÇÃO PARA CADASTRO DE ALUNOS DENTRO DE UMA POSIÇÃO DO ARRAY

void Listar(Aluno alunos[CADMAX]){
    for(int x = 0; x < 100; x ++) {           
            if (alunos[x].matricula != -1) {//IRA LISTAR TODOS OS CADASTROS DIFERENTES DE -1 NO PROGRAMA, LISTAR APENAS DA ARRAY 0 EM DIANTE
                alunos[x].mediafinal = media(alunos[x].A1,alunos[x].A2,alunos[x].A3);// VARIAVEL ALUNOS[POS DA ARRAY] INDICANDO POSIÇÃO MEDIAFINAL DA STRUCT RECEBE A FUNÇÃO MEDIA, A MESMA RECEBE A A1, A2 E A3 DE CADA ALUNO.
                printf("\n\nNome: %s\nEmail: %s\nMatricula: %d\nNota final: %0.1f", alunos[x].nome, alunos[x].email, alunos[x].matricula, alunos[x].mediafinal);//IMPRIMI NA TELA CADA NOME, EMAIL, MATRICULA, NOTA 
                situacao(alunos[x].mediafinal);//APENAS PARA RETORNAR SE ESTA APROVADO OU NÃO
            }
        }
} //FUNÇÃO QUE LISTA TODOS OS CADASTROS DISPONIVEIS E SUAS NOTAS

void Excluir(Aluno alunos[CADMAX]){
    int pos = -1;// POSIÇÃO DA ARRAY JA COMEÇA VALENDO - 1, ASSIM POSSIBILITANDO DAR OUTRO VALOR COM SCANF E EXCLUIR SOMENTE O DESEJADO
    printf("Indique qual aluno voce quer excluir: "); // CADA ALUNO RECEBERA UM CODIGO DE ARRAY
    scanf("%d", &pos); //COMO POS JA TA RECEBENDO -1, QUANDO RECEBER UM VALOR DIFERENTE ELE IRA NA ARRAY DESEJADA, CASO CONTRARIO NÃO VAI TER DESTINO POIS -1 NÃO EXISTE
    alunos[pos].matricula = -1;
    alunos[pos].A1 = -1;
    alunos[pos].A2 = -1;            
    alunos[pos].A3 = -1;
    printf("Excluido.\n");
}// FUNÇÃO PARA EXCLUIR ALUNOS

int menu(int opcao){
    printf("\nEscolha uma opcao para continuar\n");
    printf("1. cadastrar alunos\n");
    printf("2. listar alunos\n");
    printf("3. excluir aluno\n");
    printf("0. sair\n\n");
    opcao = 0;
    do{
        printf("Digite: ");
        scanf("%d", &opcao);
    } while(opcao < 0 || opcao > 3); //TODA VEZ QUE ESCOLHER UM NUMERO FORA DAS OPÇÕES VAI PEDIR PARA ESCOLHER NOVAMENTE
    return opcao;
}// FUNÇÃO PARA FAZER UM MENU DE INTERAÇÕES

void clear(){
    printf("\e[1;1H\e[2J");
}//FUNÇÃO QUE LIMPA A TELA A CADA VEZ QUE FOR REPRODUZIR O CODIGO


int main (){
    Aluno alunos[CADMAX];// CHAMANDO A STRUCT PARA A MAIN
    int opcao;//DEFININDO VARIAVEL 
    clear();//CHAMANDO FUNÇÃO QUE LIMPA A TELA

    //ENQUANTO A VARIAVEL OPCAO FOR DIFERENTE OU IGUAL A 0, REPETIR O MENU DE ESCOLHAS
    while (opcao !=0){
        opcao = menu(opcao);//VARIAVEL OPÇÃO RECEBE FUNÇÃO MENU
        switch (opcao){
            case 1: //CASO SEJA 1
            Cadastrar(alunos); //CHAMA A FUNÇÃO DE CADASTRO
            break;

            case 2: //CASO SEJA 2
            Listar(alunos); //CHAMA A FUNÇÃO DE LISTAR
            break;

            case 3: //CASO SEJA 3
            Excluir(alunos);//CHAMA A FUNÇÃO DE EXCLUSÃO
            break;

            default:
            break;
        }
    }
    while (Cadastrar == 0){
        opcao = menu(opcao);
    }

return 0;
system("pause");
}
