#include <stdio.h>
#include <stdlib.h>

/*DECLARAÇÃO DAS VARIAVEIS DE ENTRADA*/ 

char nome_cliente[40];
char cpf[11];
char dataNasc[10];
int quant_dependente;
float valor_individual, valor_total;


/*PLANO ODONTOLOGICO*/

char nome_cliente_odonto[40];
char cpf_odonto[11];
char dataNasc_odonto[10];
int quant_dependente_odonto;
float valor_individual_odonto, valor_total_odonto, valor_total_planos;
int tipoPlano;
int main() {
int operador = 1;
    do{
        printf("Informe seu tipo de Plano 1-Saúde ou 0-Odonto\n");
        scanf("%d", &tipoPlano);
    if (tipoPlano ==1) {
        printf("Informe o nome \n");
        scanf("%s", &nome_cliente);
        printf("Informe  seu CPF\n");
        scanf("%s", &cpf);
        printf("Qual sua data de nascimento\n");
        scanf("%s", &dataNasc);
        printf("Informe quantidade de dependentes\n");
        scanf("%s", &quant_dependente);
        valor_individual = 120;
        valor_total = valor_individual * quant_dependente;
        printf("Seu nome é %s\n", nome_cliente);
        printf("Seu Cpf é: %s\n", cpf);
        printf("Sua data nascimento é: %s\n", dataNasc);
        printf("Quantidade dependente é: %d\n", quant_dependente);
        printf("Valor total da Fatura R$ %.2f", valor_total);

    }else{
        printf("Informe o nome \n");
        scanf("%s", &nome_cliente_odonto);
        printf("Informe  seu CPF\n");
        scanf("%s", &cpf_odonto);
        printf("Qual sua data de nascimento\n");
        scanf("%s", &dataNasc_odonto);
        printf("Informe quantidade de dependentes");
        scanf("%d", &quant_dependente_odonto);
        valor_individual_odonto = 80;
        valor_total_odonto = valor_individual_odonto * quant_dependente_odonto;
        valor_total_planos = valor_individual_odonto+valor_individual;
        printf("Seu nome é: %s\n", nome_cliente_odonto);
        printf("Seu Cpf é: %s\n", cpf_odonto);
        printf("Sua data nascimento é: %s\n", dataNasc_odonto);
        printf("Quantidade dependente é: %d\n", quant_dependente_odonto);
        printf("Valor total da Fatura R$: %.2f\n", valor_total_odonto);
    }
        printf("O total geral da fatura é R$: %.2f", valor_total_planos);
   
        

    printf("Deseja cadastrar outro plano 1-Sim ou 0-Não\n");
    scanf("%d", &operador);
    }
    while (operador!=0);
    
    
}
