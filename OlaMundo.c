#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main (){  // Início da função principal do programa


    // Declaração das variáveis para armazenar os dados das duas cartas

char estado1[20],estado2 [20];                      // Nome ou sigla do estado
char codigo1[10],codigo2 [10];                      // Código da carta
char nomecidade1[20],nomecidade2 [20];              // Nome da cidade
int populacao1,populacao2,turistico1,turistico2;    //População das cidades e pontos turísticos
float areakm1,areakm2;                             //Área da cidade em km²
float pib1,pib2;                                    // PIB da cidade em bilhões de reais

// Leitura dos dados do primeiro Estado
printf("Digite o Primeiro Estado \n");
scanf("%s", estado1);

// Leitura dos dados do Segundo Estado
printf("Digite  o Segundo Estado \n");
scanf("%s", estado2);

// Leitura dos dados do Primeiro código
printf ("Digite o codigo do Primeiro Estado \n");
scanf("%s", codigo1);

// Leitura dos dados do Segundo código 
printf ("Digite o codigo do Segundo  Estado \n");
scanf("%s", codigo2);

// Leitura dos dados do nome da Primeira cidade
printf("Digite o nome da  Primeira Cidade \n");
scanf("%s", nomecidade1);

// Leitura dos dados do nome da Segunda cidade
printf("Digite o nome da Segunda Cidade \n");
scanf("%s", nomecidade2);

// Leitura dos dados da população da Primeira cidade
printf("Digite a numero da população da Primeira Cidade \n");
scanf("%d",&populacao1);

// Leitura dos dados da população da Segunda cidade
printf("Digite a numero da população da Segunda Cidade \n");
scanf("%d",&populacao2);

// Leitura dos dados da Área da Primeira cidade
printf("Digite a area  da Pimeira Cidade --KM-- \n");
scanf("%f",&areakm1);

// Leitura dos dados da Área da Segunda cidade
printf("Digite a area  da Segunda  Cidade --KM-- \n");
scanf("%f",&areakm2);

// Leitura dos dados do PIB da Primeira cidade
printf("Digite o PIB da Primeira Cidade \n");
scanf("%f",&pib1);

// Leitura dos dados do PIB da Segunda cidade
printf("Digite o PIB da Segunda Cidade \n");
scanf("%f",&pib2);

// Leitura dos dados dos Pontos Turísticos da Primeira cidade
printf("Digite quantos Pontos Turisticos tem  a Primeira Cidade \n");
scanf("%d",&turistico1);

// Leitura dos dados dos Pontos Turísticos da Segunda cidade
printf("Digite a numero de  um Ponto Turistico da Segunda Cidade \n");
scanf("%d",&turistico2);

    

// Impressão dos dados da primeira carta
printf ("\n Carta 1:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f Bilhões de Reais\n Numeros de Pontos Turisticos: %d\n ", estado1,codigo1,nomecidade1,populacao1,areakm1,pib1,turistico1);
    

// Impressão dos dados da segunda carta
printf ("\n Carta 2:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f Bilhões de Reais\n Numeros de Pontos Turisticos: %d\n ", estado2,codigo2,nomecidade2,populacao2,areakm2,pib2,turistico2);



return 0;  // Fim do programa
}