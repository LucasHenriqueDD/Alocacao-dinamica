#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //Questao 1 e 2 de alocacao..
    int valor,k,oldvalor=0,b,l;
    int *p;
    int *p1;
    int con=0;
    srand(time(NULL));
    printf("Digite um valor:\n");
    scanf("%d",&valor);
    oldvalor=valor;
    p=(int*) calloc(valor,sizeof(int));
    for(k=0;k<valor;k++){
        p[k]=rand()%11;
    }
    for(int b=0;b<valor;b++){
        printf("Vetor antigo: %d\n",p[b]);
    }
    printf("Voce quer aumentar o vetor?: 1 para sim 0 para nao\n");
    scanf("%d",&con);
    if(con==1){
        printf("Digite o novo tamanho do vetor:\n");
        scanf("%d",&valor);
        p1=(int*) realloc(p,valor);
        for(b=oldvalor;b<valor;b++){
            p[b]=rand()%21;
        }
        for(l=0;l<valor;l++){
            if(l<oldvalor){
                printf("Parte do antigo:%d\n",p[l]);
            }
            else
            printf("Parte do novo vetor:%d\n",p[l]);
        }
    }
    free(p);
    return 0;
}