#include <stdio.h>
#include <stdlib.h>
#include "time.h"
//Questao 3 de alocacao
int *criavetor(int i){
    int *p;
    p=(int*) malloc(i*sizeof(int*));
    return p;
}
void exibevetor(int *p,int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("Posicao [%d] =  %d\n",i,p[i]);
    }
}
void liberarvetor(int *p){
    free(p);
}
void preenchervetor(int *p){
    int i=0;
    for(i=0;i<4;i++){
        p[i]=rand()%21;
    }
}
int main(){
    int *r;
    srand(time(NULL));
    r=criavetor(4);
    preenchervetor(r);
    exibevetor(r,4);
    free(r);
    exibevetor(r,4);



    return 0;
}
