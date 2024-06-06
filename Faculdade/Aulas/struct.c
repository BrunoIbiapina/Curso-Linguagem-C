#include<stdlib.h>
#include<stdio.h>

struct cadastroProduto{

    int codigo;
    char nome[50];
    int quantidade;
    float valorUnitario;

};
int main () {
    int i;
    struct cadastroProduto produto [2];/*Estrutura de repetição para Leitura*/
    for (i = 0; i < 2 ; i++) {
        printf("Digite o codigo do produto \n");
        scanf("%d", &produto[i].codigo);

        printf("Digite a descrição do produto \n");
        scanf("%s", &produto[i].nome);
        
        printf("Digite a quantidade do produto \n");
        scanf("%d", &produto[i].quantidade);
        
        printf("Digite o valor unitario do produto \n");
        scanf("%f", &produto[i].valorUnitario);
   
    }
    
    for (i = 0; i < 2; i++) {
        printf("Codigo...............: %d\n", produto[i].codigo);
        printf("Descrição............: %s\n", produto[i].nome);
        printf("Quantidade...........: %d\n", produto[i].quantidade);
        printf("Valor Unitario.......: %.2f\n", produto[i].valorUnitario);
    }

}
 

