#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Dínice Júnior - Versão Aventureiro

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo1[4], codigo2[4]; // Necessário tamanho 4 para caber os 3 caracteres mais o caracter nulo \0 sem causar erro na execução.
	char nome1[30], nome2[30];
	int populacao1, populacao2;
	float area1, area2;
	float pib1, pib2;
	int pontos1, pontos2;
	float densidade1, densidade2;
	float percapita1, percapita2;
	
	densidade1=populacao1/area1;
	densidade2=populacao2/area2;
	percapita1=pib1/populacao1;
	percapita2=pib2/populacao2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  	
    printf("Cadastro da Carta 01 - Digite os dados para esta carta e Pressione ENTER.\n\n");

	printf("OBS: O código da carta é composto por 3 caracteres exemplo A02, onde a letra de A até H\n");
	printf("     significa um Estado e o número de 01 a 04 significa uma cidade deste Estado\n\n");

	printf("Informe o Código da Carta com 3 caracteres: ");
	scanf("%s", codigo1);

	printf("Informe a Cidade da Carta: ");
	scanf("%s", nome1);

	printf("Informe a População da Carta: ");
	scanf("%d", &populacao1);

	printf("Informe a Área em Km2 da Carta: ");
	scanf("%f", &area1);

	printf("Informe o PIB Carta - em Reais: ");
	scanf("%f", &pib1);

	printf("Informe quantos pontos turísticos tem a Carta: ");
	scanf("%d", &pontos1);
    
    printf("\nCadastro da Carta 02 - Digite os dados para esta carta e Pressione ENTER.\n\n");

	printf("OBS: O código da carta é composto por 3 caracteres exemplo E04, onde a letra de A até H\n");
	printf("     significa um Estado e o número de 01 a 04 significa uma cidade deste Estado\n\n");

	printf("Informe o Código da Carta com 3 caracteres: ");
	scanf("%s", codigo2);

	printf("Informe a Cidade da Carta: ");
	scanf("%s", nome2);

	printf("Informe a População da Carta: ");
	scanf("%d", &populacao2);

	printf("Informe a Área em Km2 da Carta: ");
	scanf("%f", &area2);

	printf("Informe o PIB Carta - em Reais: ");
	scanf("%f", &pib2);

	printf("Informe quantos pontos turísticos tem a Carta: ");
	scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

	printf("\n\nExibindo as informações das Cartas Cadastradas\n");

	printf("\nInformações da Carta 01\n");
	printf("Código:    %s\n", codigo1);
	printf("Cidade:    %s\n", nome1);
	printf("População: %d habitantes\n", populacao1);
	printf("Área:      %.2f km2\n", area1);
	printf("PIB:       %.2f Reais\n", pib1);
	printf("Pontos Turísticos:      %d Locais\n", pontos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
	printf("PIB per Capita:         %.2f Reais\n", percapita1);

	printf("\nInformações da Carta 02\n");
	printf("Código:    %s\n", codigo2);
	printf("Cidade:    %s\n", nome2);
	printf("População: %d habitantes\n", populacao2);
	printf("Área:      %.2f km2\n", area2);
	printf("PIB:       %.2f Reais\n", pib2);
	printf("Pontos Turísticos:      %d Locais\n", pontos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
	printf("PIB per Capita:         %.2f Reais\n", percapita2);

    return 0;
}
