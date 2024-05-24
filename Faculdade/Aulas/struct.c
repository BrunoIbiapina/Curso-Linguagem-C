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
    struct cadastroProduto produto [5];
    for (i = 0; i < 3 ; i++) {
        printf("Digite o codigo do produto \n");
        scanf("%d",  &produto[i].codigo);

        printf("Digite a descrição do produto \n");
        scanf("%s", produto[i].nome);
        
        printf("Digite a quantidade do produto \n");
        scanf("%f", &produto[i].quantidade);
        
        printf("Digite o valor unitario do produto \n");
        scanf("%f", &produto[i].valorUnitario);
   
      }
    
    for (i = 0; i < 5; i++) {
        printf("Produto %d\n", i + 1);
        printf("Codigo: %d\n", produto[i].codigo);
        printf("Nome: %s\n", produto[i].nome);
        printf("Quantidade: %.2f\n", produto[i].quantidade);
        printf("Valor Unitario: %.2f\n", produto[i].valorUnitario);
    }

    return 0;
}
 

