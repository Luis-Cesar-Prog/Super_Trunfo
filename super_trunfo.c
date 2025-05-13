Atualização e Entrada de Novas Variáveis
#include<stdio.h>
int main(){

// Declaração das variáveis para a PRIMEIRA carta 

char estado1; 
char codigo1[10]; 
char nome_cidade1[20];
int populacao1;
float area1;
float pib1; // em bilhões
int pontos_turisticos1;
float densidade_populacional1;
float pib_per_capita1;

// Declaração das variáveis para a SEGUNDA carta

 char estado2; 
 char codigo2[10];  
 char nome_cidade2[20];
 int populacao2;
 float area2;
 float pib2; // em bilhões
 int pontos_turisticos2;
 float densidade_populacional2;
 float pib_per_capita2;

// Entrada de dados para a PRIMEIRA carta

 printf("=== Cadastro da Carta 1 ===\n");
 printf("Digite o Estado (letra de A a H):\n");
 scanf(" %c", &estado1);

 printf("Digite o codigo1:\n");
 scanf("%s", codigo1);

 printf("Digite o nome da cidade\n");
 scanf("%s", nome_cidade1);

 printf("Digite a Populacao\n");
 scanf("%d", &populacao1);

 printf("Digite a area em km²\n");
 scanf("%f", &area1);

 printf("Digite o pib1 em bilhões\n");
 scanf("%f", &pib1);

 printf("Digite os pontos turisticos1\n");
 scanf("%d", &pontos_turisticos1);

// Entrada de dados para a segunda carta

printf("\n=== Cadastro da Carta 2 ===\n");
printf("Digite o Estado (letra de A a H):\n");
getchar(); 
scanf("%c", &estado2);

printf("Digite o codigo2\n");
scanf("%s", codigo2);
printf("Digite o nome da cidade 2\n");
scanf("%s", nome_cidade2);

printf("Digite a populacao\n");
scanf("%d", &populacao2);

printf("Digite a area2\n");
scanf("%f", &area2);

printf("Digite o pib2\n");
scanf("%f", &pib2);

printf("digite os pontos turisticos\n");
scanf("%d", &pontos_turisticos2);

// Cálculos da Densidade populacional e Pib per Capita

densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = (pib1 * 1000000000) / populacao1;

densidade_populacional2 = populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000) / populacao2;

// Exibição dos dados cadastrados

printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("Populacao: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("Pib: %.2f bilhões de reais\n", pib1);
printf("Pontos turisticos: %d\n", pontos_turisticos1);
printf("densidade populacional: %.2f\n", densidade_populacional1);
printf("pib per capita: %.2f\n", pib_per_capita1);

printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
printf("densidade populacional: %.2f\n", densidade_populacional2);
printf("pib per capita: %.2f\n", pib_per_capita2);

return 0;



}
