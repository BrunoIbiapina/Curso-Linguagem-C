#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char Nome[40];
char Sobrenome[40];

int main (){
    printf("Informe seu primeiro Nome \n");
    scanf("%s", &Nome);
    printf("Escreva seu Sobrenome: \n");
    scanf("%s", &Sobrenome);
    printf("Seu nome completo é %s %s", Nome, Sobrenome);
}