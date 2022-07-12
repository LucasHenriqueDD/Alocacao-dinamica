void enchep(pessoa *p,int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("Nome:\n");
        gets(p[i].nome);
        printf("Data de Nascimento:\n");
        scanf("%d",&p[i].nascimento);
        printf("CPF:\n");
        scanf("%d",&p[i].cpf);

    }

}