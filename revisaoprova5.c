#include<stdio.h>
#include<stdlib.h>

int codigo, quantidade;
float valor_total;

int main(){
    printf("Informe o código do seu produto \n");
    scanf("%d", &codigo);
    printf("Informe a quantidade de produto: \n");
    scanf("%d", &quantidade);
    switch (codigo){
        case 100:
        valor_total = quantidade* 4.2;
        break;
        case 101:
        valor_total = quantidade* 4.3;
        break;
        case 102:
        valor_total = quantidade* 4.4;
        break;
        case 103:
        valor_total = quantidade* 4.5;
        break;
        case 104:
        valor_total = quantidade* 4.6;
        break;
        default:
        break;


    }
    
    printf("Valor total R$ %.2f\n", valor_total);
    
}