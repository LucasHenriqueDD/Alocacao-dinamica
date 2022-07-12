#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[25]; 
    int nascimento; 
    int cpf;
}pessoa;
void enchep(pessoa *p,int tam){
    int i;
    for(i=0;i<tam;i++){
        fflush(stdin);
        printf("Nome:\n");
        gets(p[i].nome);
        fflush(stdin);
        printf("Data de Nascimento:\n");
        scanf("%d",&p[i].nascimento);
        printf("CPF:\n");
        scanf("%d",&p[i].cpf);
    }
}
void exibirs(pessoa *p,int tam){
    //Exibir as coisas...
    int i;
    for(i=0;i<tam;i++){
        printf("Nome:%s\n",p->nome);
        printf("Data de nascimento:%d\n",p->nascimento);
        printf("CPF:%d\n",p->cpf);
    }
}
int main(){
    int tam;
    printf("Quantas pessoas irao realizar o cadastro?\n");
    scanf("%d",&tam);
    pessoa *p;
    p=(pessoa*) malloc(tam*sizeof(pessoa));
    enchep(p,tam);
    exibirs(p,tam);

    return 0;
}