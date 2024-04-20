#include<stdio.h>
#include<stdlib.h>

float peso, altura,imc;

int main(){
    printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    printf("Digite sua altuta: \n");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    /*printf("Seu índice de IMC é: %.2f\n", imc);*/
    if(imc < 26){
    printf("Sua IMC está normal %.2f\n",imc);
    }
    if(imc >= 26 ){
    printf("Obeso, seu imc é: %.2f \n",imc);
    }
    if(imc >= 30){
    printf("Obeso Morbido %.2f\n",imc);
    }

}
