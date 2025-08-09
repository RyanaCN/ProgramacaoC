#include <stdio.h>

int main(){
   
    //Cartas
    char estado1, estado2;
    char codigo1[4],codigo2[4];
    char cidade1[10],cidade2[10];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int turisticos1,turisticos2;

   //Cadastramento primeira carta
   printf("Preencha os dados da sua carta:\n");

   printf("Estado, uma letra de A-H:");
   scanf(" %c", &estado1);
   printf("Código da Carta(ex:A01):");
   scanf("%s", &codigo1);
   printf("Nome da Cidade:");
   scanf("%s", &cidade1);
   printf("Número de habitantes:");
   scanf("%d", &populacao1);
   printf("Área em quilometros quadrados:");
   scanf("%f", &area1);
   printf("Digite o PIB(produto interno)":);
   scanf("%f", &pib1);
   printf("Quantidade de pontos turísticos:");
   scanf("%d", &turisticos1);


   printf("\nCARTA 1:\n");
   printf("Estado:%c",estado1);
   printf("Código:%s",codigo1);
   printf("Nome da Cidade:%s", cidade1);
   printf("População:%d", populacao1);
   printf("Área:%f Km²",area1);
   printf("PIB:%f bilhões de reais",pib1);
   printf("Número de pontos turisticos:%d", turisticos1);


   





}


