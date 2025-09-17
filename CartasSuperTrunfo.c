#include <stdio.h>

int main()
{

  // Variaveis Cartas 

char estado, estado2;
char codigocarta[4], codigocarta2[4];
char nomecidade[50], nomecidade2[50];
unsigned long int populacao, populacao2;
float area, area2;
float pib, pib2;
int pontosturisticos, pontosturisticos2;
float ppc, ppc2;
float densidade, densidade2;
float superpoder, superpoder2;

  //     ===== Entrada de dados carta 1 =====

  printf("----Super Trunfo----\n");

  printf("Digite uma letra que represente o primeiro estado:  \n");
   scanf(" %c", &estado);

  printf("Digite o código da primeira carta (ex: A01): \n");
   scanf(" %s", codigocarta);

  printf("Digite o nome da primeira cidade:  \n");
   // o scanf não reconhece espaços, não seria possivel cadastrar nomes compostos
   scanf(" %[^\n]", nomecidade);

  printf("Digite a população da primeira carta:  \n");
   scanf(" %lu", &populacao);

  printf("Digite a área em km² da primeira cidade:  \n");
   scanf(" %f", &area);

  printf("Digite o PIB da primeira cidade(em bilhões):  \n");
   scanf("%f", &pib);

  printf("Numero de pontos turisticos da primeira cidade:  \n");
   scanf("%d", &pontosturisticos);

  //     ===== Calculo Densidade Populacional Carta 1 =====

    densidade = (populacao / area);

  //     ===== Calculo PIB per Capita carta 1 =====

    ppc = (pib / populacao);

  //     ===== entrada de dados carta 2 =====

  printf("---------\n");

  printf("Digite uma letra que represente o segundo estado:  \n");
   scanf(" %c", &estado2);

  printf("Digite o código da segunda carta (ex: B02): \n");
   scanf(" %s", codigocarta2);

  printf("Digite o nome da segunda cidade:  \n");
  // o scanf não reconhece espaços, não seria possivel nomes compostos
   scanf(" %[^\n]", nomecidade2);

  printf("Digite a população da segunda carta:  \n");
   scanf(" %lu", &populacao2);

  printf("Digite a área em km² da segunda cidade:  \n");
   scanf(" %f", &area2);

  printf("Digite o PIB da segunda cidade (em bilhões):  \n");
   scanf("%f", &pib2);

  printf("Numero de pontos turisticos da segunda cidade:  \n");
   scanf("%d", &pontosturisticos2);

  //     ===== Calculo Densidade Populacional segunda Carta

      densidade2 = (populacao2 / area2);

  //     ===== Calculo PIB per Capita carta 2 =====

      ppc2 = (pib2 / populacao2);

  //     ===== saida carta 1 =====

  printf("--- Carta 1 ---  \n");

  printf("Estado: %c \n", estado);

  printf("Código: %s \n", codigocarta);

  printf("Nome da Cidade: %s \n", nomecidade);

  printf("População: %lu  \n", populacao);

  printf("Área: %.2f km² \n", area);

  printf("PIB: %.2f bilhões de reais \n ", pib);

  printf("Número de Pontos Turísticos: %d  \n", pontosturisticos);

  printf("Densidade Populacional: %.2f hab/km²\n", densidade);

  printf("PIB per Capita: %f reais\n", ppc);

  

  //     ===== saida de dados carta 2 =====

  printf("--- Carta 2 --- \n");

  printf("Estado: %c \n", estado2);

  printf("Código: %s \n", codigocarta2);

  printf("Nome da Cidade: %s \n", nomecidade2);

  printf("População: %lu  \n", populacao2);

  printf("Área: %.2f km² \n", area2);

  printf("PIB: %.2f bilhões de reais \n ", pib2);

  printf("Número de Pontos Turísticos: %d  \n", pontosturisticos2);

  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

  printf("PIB per Capita: %f reais\n", ppc2);

  //     ==== calculo Super Poder ====
    

   superpoder = (float)populacao + area + pib + pontosturisticos + ppc + (1 / densidade);
       // segunda carta
   superpoder = (float)populacao2 + area2 + pib2 + pontosturisticos2 + ppc2 + (1 / densidade2);

  //     ==== Resultado da comparação ====

  printf("--- Resultado ---\n");

  printf("Dica: \n");
  printf("1 = Verdadeiro\n 0 = Falso\n");

  printf("A carta número 1 tem uma População maior do que a carta número 2 ?: %u\n  ", populacao > populacao2);

  printf("A carta número 1 tem uma Area maior do que a carta número 2 ?: %d\n  ", area > area2);

  printf("A carta número 1 tem um PIB maior do que a carta número 2 ?: %d\n  ", pib > pib2);

  printf("A carta número 1 tem mais Pontos Turísticos do que a carta número 2 ?: %d\n  ", pontosturisticos > pontosturisticos2);

  printf("A carta número 1 tem uma Densidade Populacional maior do que a carta número 2 ?: %d\n  ", densidade > densidade2);

  printf("A carta número 1 tem um PIB per Capita maior do que a carta número 2 ?: %d\n  ", ppc > ppc2);

  return 0;
}
