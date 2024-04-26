#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char nome[40];
float nota1, nota2, nota3, media;

int main(){
    printf("Informe seu nome: \n");
    scanf("%s" , &nome);
    printf("Informe sua primeira nota \n");
    scanf("%f" , &nota1);
    printf("Informe sua segunda nota \n");
    scanf("%f" , &nota2);
    printf("Informe sua terceita nota \n");
    scanf("%f" , &nota3);
    media = (nota1+nota2+nota3) / 3;
    printf("Sua média é %.2f", media);

}
