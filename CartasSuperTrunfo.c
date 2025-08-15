#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Dínice Júnior - Versão Mestre

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
	char estado1, estado2;
    char codigo1[4], codigo2[4]; // Necessário tamanho 4 para caber os 3 caracteres mais o caracter nulo \0 sem causar erro na execução.
	char nome1[30], nome2[30];
	unsigned long int populacao1, populacao2;
	float area1, area2;
	float pib1, pib2;
	int pontos1, pontos2;
	float densidade1, densidade2;
	float percapita1, percapita2;
	float superpoder1, superpoder2;
	float inversodensidade1, inversodensidade2;
	unsigned long int resultadopopulacao;
	float resultadoarea;
	float resultadopib;
	int resultadopontos;
	float resultadodensidade;
	float resultadopercapita;
	float resultadosuperpoder;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  	
    printf("Cadastro da Carta 01 - Digite os dados para esta carta e Pressione ENTER.\n\n");

	printf("Informe a letra entre A e H que representa o Estado: ");
	scanf(" %c", &estado1); // Espaço para evitar erro e receber um Enter como resposta a ser armazenada.

	printf("Informe o Código da Carta com 3 caracteres: ");
	scanf("%s", codigo1);

	printf("Informe a Cidade da Carta: ");
	scanf("%s", nome1);

	printf("Informe a População da Carta: ");
	scanf("%lu", &populacao1);

	printf("Informe a Área em Km2 da Carta: ");
	scanf("%f", &area1);

	printf("Informe o PIB Carta - em Reais: ");
	scanf("%f", &pib1);

	printf("Informe quantos pontos turísticos tem a Carta: ");
	scanf("%d", &pontos1);
    
    printf("\n\nCadastro da Carta 02 - Digite os dados para esta carta e Pressione ENTER.\n\n");

	printf("Informe a letra entre A e H que representa o Estado: ");
	scanf(" %c", &estado2); // Espaço para evitar erro e receber um Enter como resposta a ser armazenada.

	printf("Informe o Código da Carta com 3 caracteres: ");
	scanf("%s", codigo2);

	printf("Informe a Cidade da Carta: ");
	scanf("%s", nome2);

	printf("Informe a População da Carta: ");
	scanf("%lu", &populacao2);

	printf("Informe a Área em Km2 da Carta: ");
	scanf("%f", &area2);

	printf("Informe o PIB Carta - em Reais: ");
	scanf("%f", &pib2);

	printf("Informe quantos pontos turísticos tem a Carta: ");
	scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

	densidade1 = (long double)populacao1 / area1;
    densidade2 = (long double)populacao2 / area2;
    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

	inversodensidade1 = 1/densidade1;
	inversodensidade2 = 1/densidade2;

	superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + inversodensidade1 + percapita1;
	superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + inversodensidade2 + percapita2;

	resultadopopulacao = populacao1 > populacao2;
	resultadoarea = area1 > area2;
	resultadopib = pib1 > pib2;
	resultadopontos = pontos1 > pontos2;
	resultadodensidade = densidade1 < densidade2;
	resultadopercapita = percapita1 > percapita2;
	resultadosuperpoder = superpoder1 > superpoder2;

	printf("\n\nEXIBINDO AS INFORMAÇÕES DAS CARTAS CADASTRADAS:\n");

	printf("\nInformações da Carta 01\n");
	printf("Estado:                 %c\n", estado1);
	printf("Código:                 %s\n", codigo1);
	printf("Cidade:                 %s\n", nome1);
	printf("População:              %lu habitantes\n", populacao1);
	printf("Área:                   %.2f km²\n", area1);
	printf("PIB:                    %.2f Reais\n", pib1);
	printf("Pontos Turísticos:      %d Locais\n", pontos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
	printf("PIB per Capita:         %.2f Reais\n", percapita1);
	printf("Super Poder:            %.2f Reais\n", superpoder1);

	printf("\nInformações da Carta 02\n");
	printf("Estado:                 %c\n", estado2);
	printf("Código:                 %s\n", codigo2);
	printf("Cidade:                 %s\n", nome2);
	printf("População:              %lu habitantes\n", populacao2);
	printf("Área:                   %.2f km²\n", area2);
	printf("PIB:                    %.2f Reais\n", pib2);
	printf("Pontos Turísticos:      %d Locais\n", pontos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
	printf("PIB per Capita:         %.2f Reais\n", percapita2);
	printf("Super Poder:            %.2f Reais\n\n", superpoder2);

	printf("\nCOMPARATIVO ENTRE AS CARTAS 1 e 2:\n");
	printf("Caso o resultado seja 1 vence a Carta 1, Caso o resultado seja 0 vence a Carta 2.\n\n");
	printf("População:              %lu\n", resultadopopulacao);
	printf("Área:                   %d\n", (int)resultadoarea);
	printf("PIB:                    %d\n", (int)resultadopib);
	printf("Pontos Turísticos:      %d\n", resultadopontos);
	printf("Densidade Populacional: %d\n", (int)resultadodensidade);
	printf("PIB per Capita:         %d\n", (int)resultadopercapita);
	printf("Super Poder:            %d\n\n\n", (int)resultadosuperpoder);

	return 0;
}
