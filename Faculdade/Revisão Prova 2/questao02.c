

#include<stdio.h>
#include<stdlib.h>

int i, j;
int matrizA [3][3], matrizB[3][3];

int main (){
printf("Digite os valores da Matriz A: \n");
    for(i=0; i< 3; i++){
        for(j=0; j< 3; j++)
            scanf("%d", &matrizA[i][j]);
    }

printf("Digite os valores da Matriz B: \n");
for(i=0; i< 3; i++){
    for(j=0; j< 3; j++)
        scanf("%d", &matrizB[i][j]);
    }

printf("Matriz resultante: \n");
for(i=0; i<2; i++){
    for(j=0;j <3; j++);
        printf("%4d" matrizA[i][j]*matrizB[i][j]);
        printf("|\n");
    }
}



