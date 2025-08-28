#include <stdio.h>

int main()
{

  // Variaveis Carta 1

  char estado;
  char codigocarta[50];
  char nomecidade[50];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;

  // Variaveis carta 2

  char estado2;
  char codigocarta2[50];
  char nomecidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Entrada de dados carta 1

  printf("Digite uma letra que represente o primeiro estado:  \n");
   scanf(" %c", &estado);

  printf("Digite o código da primeira carta: \n");
   scanf(" %s", codigocarta);

  printf("Digite o nome da primeira cidade:  \n");
   // o scanf não reconhece espaços, não seria possivel cadastrar nomes compostos
   scanf(" %[^\n]", nomecidade);

  printf("Digite a população da primeira carta:  \n");
   scanf(" %d", &populacao);

  printf("Digite a área em km² da primeira cidade:  \n");
   scanf(" %f", &area);

  printf("Digite o PIB da primeira cidade:  \n");
   scanf("%f", &pib);

  printf("Numero de pontos turisticos da primeira cidade:  \n");
   scanf("%d", &pontosturisticos);

  // entrada de dados carta 2

  printf("Digite uma letra que represente o segundo estado:  \n");
   scanf(" %c", &estado2);

  printf("Digite o código da segunda carta: \n");
   scanf(" %s", codigocarta2);

  printf("Digite o nome da segunda cidade:  \n");
  // o scanf não reconhece espaços, não seria possivel nomes compostos
   scanf(" %[^\n]", nomecidade2);

  printf("Digite a população da segunda carta:  \n");
   scanf(" %d", &populacao2);

  printf("Digite a área em km² da segunda cidade:  \n");
   scanf(" %f", &area2);

  printf("Digite o PIB da segunda cidade:  \n");
   scanf("%f", &pib2);

  printf("Numero de pontos turisticos da segunda cidade:  \n");
   scanf("%d", &pontosturisticos2);

  // saida carta 1

  printf("Carta 1  \n");

  printf("Estado: %c \n", estado);

  printf("Código: %s \n", codigocarta);

  printf("Nome da Cidade: %s \n", nomecidade);

  printf("População: %d  \n", populacao);

  printf("Área: %f  \n", area);

  printf("PIB: %f  \n ", pib);

  printf("Número de Pontos Turísticos: %d  \n", pontosturisticos);

  // saida de dados carta 2

  printf("Carta 2  \n");

  printf("Estado: %c \n", estado2);

  printf("Código: %s \n", codigocarta2);

  printf("Nome da Cidade: %s \n", nomecidade2);

  printf("População: %d  \n", populacao2);

  printf("Área: %f  \n", area2);

  printf("PIB: %f  \n ", pib2);

  printf("Número de Pontos Turísticos: %d  \n", pontosturisticos2);

  return 0;
}
