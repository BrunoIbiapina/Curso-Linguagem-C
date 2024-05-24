#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include<locale.h>
    FILE *arquivo;
char nome[40], DataNasc[10], str[80], nomearquivo[50], linha[250];
int i;

void LerArquivo() {
    sprintf(str, "./%s", nomearquivo);
    arquivo = fopen(str,"r");
    while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
    fclose(arquivo);
}
int main(){
    setlocale(LC_ALL,"");
    printf("Informe o nome do arquivo: Ex Bruno.txt \n");
    scanf("%s", &nomearquivo);
    sprintf(str, "./%s", nomearquivo);
    arquivo = fopen(str, "w+");
    if(arquivo == 0)
        printf("Erro na leitura do arquivo\n");
    else
        printf("Arquivo criado com sucesso\n");
for(i=1;i<=5;i++) {
    printf("Informe seu nome\n");
    scanf("%s", &nome);
    printf("Informe sua data de nascimento Ex. 16/06/2000 \n");
    scanf("%s", &DataNasc);
        printf("Aluno N:%d\n", i);
        fprintf(arquivo,"+|================================================+\n");
        fprintf(arquivo, "+|       RELAÇÃO DE ALUNO POR DATA DE NAS        +|\n");
        fprintf(arquivo,"+|================================================+\n");
        fprintf(arquivo,"|Matricula :%d\n",i);
        fprintf(arquivo,"|Nome      :%s\n", nome);
        fprintf(arquivo,"|Data Nasc :%s\n",DataNasc);
        fprintf(arquivo,"+=================================================+\n");
}
        fclose(arquivo);
        LerArquivo();     
}


