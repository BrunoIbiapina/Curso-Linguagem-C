#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
int valor1,valor2,valor3;
printf("Digite 3  valores: \n");
scanf("%d %d %d", &valor1,&valor2,&valor3);
int maiorvalor = valor1;
if(valor1>valor2){
    maiorvalor = valor1;
}else{
    maiorvalor=valor2;
}
if(valor2>valor3){
    maiorvalor = valor2;
}else{
    maiorvalor=valor3;
}

printf("O maior valor dos 3 números é: %d\n", maiorvalor);
}
