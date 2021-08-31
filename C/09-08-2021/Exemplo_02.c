#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int num1,num2,soma;
printf("Digite o primeiro numero: ");
scanf("%i",&num1);
printf("Digite o segundo numero: ");
scanf("%i",&num2);

soma = num1+num2;

printf("A soma de %i e %i e igual a: %i",num1,num2,soma);




return 0;
}