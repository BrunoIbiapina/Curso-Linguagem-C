#include<stdio.h>
#include<stdlib.h>
int i, j;
int dl, dc;

int main (){
    printf("Informe a dimensão da linha\n");
    scanf("%d", &dl);
    printf("Informe dimensão da coluna:\n ");
    scanf("%d", &dc);
    int matriz [dl][dc];
    for(i=0;i<dl;i++){
        for(j=0;j<dc;j++)
            scanf("%d", &matriz[i][j]);

    }
    for(i=0;i<dl;i++){
        for(j=0;j<dc;j++)
            printf("|%2d", matriz[i][j]);
        printf("|\n");
    }
    return 0;
}