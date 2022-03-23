#include <stdio.h>

int main(void) {
  
float peso, altura;

printf("Qual é seu peso?:");
scanf("%f", &peso);

printf("Qual é sua altura?:");
scanf("%f", &altura);

float imc = peso / (altura*altura);
  
printf("O seu IMC é: %0.2f\n", imc);

if(imc<18.5){
  printf("Magreza");
}

if(imc>18.5 && imc<=24.9){
  printf("Saudavel");
}

if(imc>=25.0 && imc<29.9){
  printf("Sobrepeso");
}

if(imc>30.0){
  printf("Obesidade\n");
}

  
  return 0;
}
