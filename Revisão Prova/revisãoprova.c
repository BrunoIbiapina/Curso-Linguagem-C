#include<stdio.h>
#include<stdlib.h>

float ProdutoA, ProdutoB, ProdutoC, SomaAB, SomaBC;

int main () {
    printf("Informe valor do seu primeiro produto A \n");
    scanf("%f", &ProdutoA);
    printf("Informe valor do seu segundo produto B \n");
    scanf("%f", &ProdutoB);
    printf("Informe valor do seu terceiro produto C \n");
    scanf("%f", &ProdutoC);
    SomaAB = ProdutoA + ProdutoB;
    if (SomaAB > ProdutoC) {
        printf("O valor da soma de A + B é: %.2f\n", SomaAB);
    }else{
        printf("O valor do Produto C é: %.2f\n", ProdutoC);
    }
    SomaBC = ProdutoB + ProdutoC;
    if (SomaBC > ProdutoA){
        printf("O valor da Soma de B + C é: %2.f\n", SomaBC);
    }else{
        printf("O valor do Produto A é: %2.f\n ", ProdutoA);
    }    
}
