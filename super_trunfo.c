#include <stdio.h>

int main (){

   // Dados da Carta 1
    char estado1 [30];
    char codigo1 [30]; 
    char cidade1 [30];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;

    // Dados da Carta 2
    char estado2 [30];
    char codigo2 [30]; 
    char cidade2 [30];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;

  // Entrada de dados Carta 1
   printf("Carta 1\n");
   printf("Digite Seu Estado: \n"); 
   scanf("%s", estado1);

   printf("Codigo: \n");
   scanf("%s", codigo1);

   printf("Nome da cidade: \n");
   scanf(" %[^\n]", cidade1);

   printf("Total de Habitantes: \n");
   scanf("%d", &populacao1);

   printf("Area: \n");
   scanf("%f", &area1);

   printf("Pib: \n");
   scanf("%f", &pib1);

   printf("Quantidade de Pontos Turisticos: \n");
   scanf("%d", &pontosturisticos1);


  // Entrada de dados Carta 2
   printf("Carta 2\n");
   printf("Digite Seu Estado: \n"); 
   scanf("%s", estado2);

   printf("Codigo: \n");
   scanf("%s", codigo2);

   printf("Nome da cidade: \n");
   scanf(" %[^\n]", cidade2);

   printf("Total de Habitantes: \n");
   scanf("%d", &populacao2);

   printf("Area: \n");
   scanf("%f", &area2);

   printf("Pib: \n");
   scanf("%f", &pib2);

   printf("Quantidade de Pontos Turisticos: \n");
   scanf("%d", &pontosturisticos2);

   // Impressão das cartas
   printf("Carta 1 \n");
   printf("Estado: %s \n", estado1);
   printf("Codigo da Carta: %s%s \n", estado1, codigo1);
   printf("Cidade: %s \n", cidade1);
   printf("Habitantes: %d \n", populacao1);
   printf("Area: %f \n", area1);
   printf("Pib: %f \n", pib1);
   printf("Pontos Turisticos: %d \n", pontosturisticos1);

   
   printf("Carta 2 \n");
   printf("Estado: %s \n", estado2);
   printf("Codigo da Carta: %s%s \n", estado2, codigo2);
   printf("Cidade: %s \n", cidade2);
   printf("Habitantes: %d \n", populacao2);
   printf("Area: %f \n", area2);
   printf("Pib: %f \n", pib2);
   printf("Pontos Turisticos: %d \n", pontosturisticos2);



   return 0;



}