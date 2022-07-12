#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exibevetor.h"

int main(){
    //Criando os vetores com o malloc...
    int *p,*v,*q;
    int i,k,a,b,contador=0,contador1=0,n,j,g,h,d,u,parada,f,interacao=-1;
    p=(int*) malloc(12*sizeof(int));
    v=(int*) malloc(20*sizeof(int));
    q=(int*) malloc(contador*sizeof(int));
    //Preenchendo com o malloc
    for(i=0;i<12;i++){
        p[i]=rand()%21;
    }
    for(k=0;k<20;k++){
        v[k]=rand()%21;
    }
    printf("Primeiro vetor:\n");
    exibevetor(v,20);
    printf("Segundo vetor:\n");
    exibevetor(p,12);
    //Achando a intersecao...
    for(a=0;a<20;a++){ //vetor V
        for(b=0;b<12;b++){ //vetor P
            if(v[a]==p[b]){
                contador++;
                q=(int*) realloc(q,contador*sizeof(int));
                q[contador-1]=v[a];
                break;
            }
        }
    }
    //Tira os repetidos...
    for(n=0;n<contador;n++){
    	for(j=n+1;j<contador;j++){
    		if(q[n]==q[j]){
    			interacao++;
    			for(d=j;d<contador;d++){
                    q[d]=q[d+1];
                }
			}
	}
	}
	q=(int*) realloc(q,interacao*sizeof(int));
    printf("Intersecao: %d Int %d\n",contador,interacao);
    exibevetor(q,interacao);
    return 0;
}