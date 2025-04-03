#include <stdio.h>

int main(){
    //Aqui estamos declarando as variáveis que iremos utilizar na aplicação.
    char idcarta[50];
    char estado[30];
    char cidade[50];
    int populacao, turismo;
    float areakm;
    float pib;


    //Aqui estamos pedindo ao usuário que informe todos os dados solicitados através do printf.
    //E através do scanf gerar a interatividade com o usuário para inserir as informações.
    printf ("Digite o ID da carta: \n");
    scanf ("%s", &idcarta);

    printf ("Digite o Estado: \n");
    scanf ("%s", &estado);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &cidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a Área em Km²: \n");
    scanf ("%f", &areakm);

    printf ("Digite o PIB da Estado: \n");
    scanf ("%f", &pib);

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &turismo);

    //Aqui estamos exibindo o resumo juntamente com os dados informados pelo usuário.
    printf("Código da carta: %s\n", idcarta);
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %f\n", areakm);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d", turismo);


    return 0;


}