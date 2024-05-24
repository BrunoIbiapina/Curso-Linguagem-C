#include<stdio.h>
#include<stdlib.h>

int opMenuPrinc, OpSubMenuCad, matricula;
char nome [40];

void MenuPrincipal (){
    printf("+============================================================+\n");
    printf("|                TEMPLATE DO PROJETO                         |\n");
    printf("+------------------------------------------------------------+\n");
    printf("|           1- OPCAOI    |    2-OPCAOII                      |\n");
    printf("|           3- OPCAOIII  |    4-OPCAOIV                      |\n");
    printf("+============================================================+\n");
}
void CadastroI (){
    printf("Informe sua matricula\n");
    scanf("%d",&matricula);
    printf("Informe seu nome\n");
    scanf("%s", &nome);
}
void SubMenuCadastro (){
do{
    printf("+============================================================+\n");
    printf("|                CADASTRO EM GERAL                           |\n");
    printf("+------------------------------------------------------------+\n");
    printf("|           1- CADASTROI    |    2-CADASTROII                |\n");
    printf("+------------------------------------------------------------+\n");
    printf("|           3- CADASTROIII   |   4-CADASTROIV                |\n");
    printf("+============================================================+\n");
    printf("Digite a opção desejada ou 5 para voltar ao Menu principal\n");
    scanf("%d", &OpSubMenuCad);
    switch (OpSubMenuCad)
    {
    case 1:
        system("cls");
       // CadastroI();
        break;
    case 2:
        system("cls");
       // CadastroII();
        system("calc.exe");
        break;
    case 3:
        system("cls");
       // CadastroIII();
        break;
    case 4:
        system("cls");
       // CadastroIV();
        break;
    
    default:
        printf("Operação inválida.\n");
        break;
    }
}while(OpSubMenuCad!=5);
    MenuPrincipal ();
}

int main () {
    MenuPrincipal();
    printf("Informe a opção desejada ou Zero para sair \n");
    scanf("%d", &opMenuPrinc);
    switch (opMenuPrinc){
    {
    case 1:
        system("cls");
        SubMenuCadastro();
        break;
    case 2:
        system("cls");
        printf("O cadastro II está sendo desenvolvido\n");
        break;
    case 3:
        system("cls");
        printf("O cadastro III está sendo desenvolvido\n");
        break;
    case 4:
        system("cls");
        printf("O cadastro IV está sendo desenvolvido\n");
        break;
    default:
        printf("Operação inválida.\n");
        break;
    }
    }
}