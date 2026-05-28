#include <stdio.h>

int main() {
	// Dados da carta 1
	char estado1; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
	char codigo1[4]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
	char cidade1[21]; // O nome da cidade.
	int populacao1; // O número de habitantes da cidade.
	float area1; // Área (em km²): A área da cidade em quilômetros quadrados.
	float pib1; // O Produto Interno Bruto da cidade.
	int pontosTuristicos1; // A quantidade de pontos turísticos na cidade.

	// Dados da carta 2
	char estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
	char codigo2[4]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
	char cidade2[21]; // O nome da cidade.
	int populacao2; // O número de habitantes da cidade.
	float area2; // Área (em km²): A área da cidade em quilômetros quadrados.
	float pib2; // O Produto Interno Bruto da cidade.
	int pontosTuristicos2; // A quantidade de pontos turísticos na cidade.

	// Coleta de dados da carta 1
	printf("Olá jogador! Por favor informe o estado da carta 1 (uma letra de A-H):\n");
	scanf(" %c", &estado1);
	printf("Agora informe o codigo da carta 1 (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
	scanf("%s", codigo1);
	printf("Agora informe o nome da cidade da carta 1:\n");
	scanf(" %20[^\n]", cidade1);
	printf("Agora informe a população da cidade da carta 1:\n");
	scanf("%d", &populacao1);
	printf("Agora informe a área da cidade da carta 1 (em km²):\n");
	scanf("%f", &area1);
	printf("Agora informe o PIB da cidade da carta 1:\n");
	scanf("%f", &pib1);
	printf("Agora informe a quantidade de pontos turísticos da cidade da carta 1:\n");
	scanf("%d", &pontosTuristicos1);

	// Coleta de dados da carta 2
	printf("\nPerfeiro! Agora por favor informe o estado da carta 2 (uma letra de A-H):\n");
	scanf(" %c", &estado2);
	printf("Agora informe o codigo da carta 2 (a letra do estado seguida de um número de 01 a 04, ex: A01, B03):\n");
	scanf("%s", codigo2);
	printf("Agora informe o nome da cidade da carta 2:\n");
	scanf(" %20[^\n]", cidade2);
	printf("Agora informe a população da cidade da carta 2:\n");
	scanf("%d", &populacao2);
	printf("Agora informe a área da cidade da carta 2 (em km²):\n");
	scanf("%f", &area2);
	printf("Agora informe o PIB da cidade da carta 2:\n");
	scanf("%f", &pib2);
	printf("Agora informe a quantidade de pontos turísticos da cidade da carta 2:\n");
	scanf("%d", &pontosTuristicos2);

	printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
	printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

	return 0;
}
