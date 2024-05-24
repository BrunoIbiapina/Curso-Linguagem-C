#include<stdio.h>
#include<stdlib.h>

int operacao, valor1, valor2, res;

void Menucalculadora (){
printf("+============================================+\n");
printf("|           CALCULADORA SIMPLES              |\n");
printf("+--------------------------------------------+\n");
printf("|         1-SOMAR      |     2-SUBTRAIR      |\n");
printf("+--------------------------------------------+\n");
printf("|         3-MULTIPLICAR   |  4-DIVIDIR       |\n");
printf("Digite a operação desejada ou 5 para Sair\n");
scanf("%d", &operacao);

}
void Entrada (){
    printf("Digite o primeiro valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor\n");
    scanf("%d", &valor2);
}
void Somar(){
    res = valor1 + valor2;
}
void Subtrair(){
    res = valor1 - valor2;
}
void Multiplicar(){
    res = valor1 * valor2;
}
void Dividir(){
    res = valor1 / valor2;
}
void Saida(){
    printf("O resultado da operação é :%d\n", res);
}
int main (){
    do{
    Menucalculadora ();
    switch(operacao)
    {
    case 1:
        system("cls");
        Entrada();
        Somar();
        Saida();
        break;
    case 2:
        system("cls");
        Entrada();
        Subtrair();
        Saida();
     break;
    case 3:
        system("cls");
        Entrada();
        Multiplicar();
        Saida();
        break;
    case 4:
        system("cls");
        Entrada();
        Dividir();
        Saida();
        break;
    default:
        printf("Operação inválida\n");
        break;
    case 5:
        printf("Öbrigado por usar a calculadora");
        break;
       
    }
}
while(operacao != 5);
}