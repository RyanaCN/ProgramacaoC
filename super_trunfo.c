#include <stdio.h>

int main(){
   
    //Dados Cartas
    char estado1, estado2;
    char codigo1[5],codigo2[5];
    char cidade1[17],cidade2[17];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int turisticos1,turisticos2;

   //Cadastramento primeira carta
   printf("\nPreencha os dados da sua carta:\n");

   printf("Estado, uma letra de A-H: ");
   scanf(" %c", &estado1);
   printf("Código da Carta(ex:A01): ");
   scanf("%s", codigo1);
   printf("Nome da Cidade: ");
   scanf("%s", &cidade1);
   printf("Número de habitantes: ");
   scanf("%d", &populacao1);
   printf("Área em quilometros quadrados: ");
   scanf("%f", &area1);
   printf("Digite o PIB(produto interno): ");
   scanf("%f", &pib1);
   printf("Quantidade de pontos turísticos: ");
   scanf("%d", &turisticos1);


     //Cadastramento segunda carta
   printf("\nPreencha os dados da sua carta:\n");

   printf("Estado, uma letra de A-H: ");
   scanf(" %c", &estado2);
   printf("Código da Carta(ex:A01): ");
   scanf("%s", &codigo2);
   printf("Nome da Cidade: ");
   scanf("%s", &cidade2);
   printf("Número de habitantes: ");
   scanf("%d", &populacao2);
   printf("Área em quilometros quadrados: ");
   scanf("%f", &area2);
   printf("Digite o PIB(produto interno): ");
   scanf("%f", &pib2);
   printf("Quantidade de pontos turísticos: ");
   scanf("%d", &turisticos2);

//Leitura Cartas
   printf("\nCARTA 1:\n");
   printf("Estado: %c\n",estado1);
   printf("Código: %s\n",codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %f Km²\n",area1);
   printf("PIB: %f bilhões de reais\n",pib1);
   printf("Número de pontos turisticos: %d \n", turisticos1);

printf("\nCARTA 2:\n");
   printf("Estado: %c\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %f Km²\n",area2);
   printf("PIB: %f bilhões de reais\n",pib2);
   printf("Número de pontos turisticos: %d \n", turisticos2);

   
return 0;




}


