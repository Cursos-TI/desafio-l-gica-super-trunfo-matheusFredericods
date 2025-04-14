#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações das cidades
struct Carta {
    char nome[30];
    char estado[3];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
};

int main() {
    // Declaração das variáveis para armazenar os dados das duas cidades
    struct Carta carta1, carta2;

    // Cadastro da Carta 1 - Rio de Janeiro
    printf("Cadastro da Carta 1 - Rio de Janeiro\n");
    strcpy(carta1.estado, "RJ");
    strcpy(carta1.codigo, "RJ001");
    strcpy(carta1.nome, "Rio de Janeiro");
    
    // Captura dos dados para Rio de Janeiro
    printf("Digite a população de %s: ", carta1.nome);
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²) de %s: ", carta1.nome);
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões) de %s: ", carta1.nome);
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos de %s: ", carta1.nome);
    scanf("%d", &carta1.pontosTuristicos);
    carta1.densidadePopulacional = carta1.populacao / carta1.area;

    // Cadastro da Carta 2 - São Paulo
    printf("\nCadastro da Carta 2 - São Paulo\n");
    strcpy(carta2.estado, "SP");
    strcpy(carta2.codigo, "SP001");
    strcpy(carta2.nome, "São Paulo");
    
    // Captura dos dados para São Paulo
    printf("Digite a população de %s: ", carta2.nome);
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²) de %s: ", carta2.nome);
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões) de %s: ", carta2.nome);
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos de %s: ", carta2.nome);
    scanf("%d", &carta2.pontosTuristicos);
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // Exibição dos dados cadastrados
    printf("\n===== CARTA 1 - Rio de Janeiro =====\n");
    printf("Cidade: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\n",
        carta1.nome, carta1.estado, carta1.codigo, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.densidadePopulacional);

    printf("\n===== CARTA 2 - São Paulo =====\n");
    printf("Cidade: %s\nEstado: %s\nCódigo: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\n",
        carta2.nome, carta2.estado, carta2.codigo, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.densidadePopulacional);

    // Comparação de Cartas
    int opcao;
    printf("\nEscolha o critério para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    printf("\nResultado da comparação:\n");

    // Comparando de acordo com a escolha do usuário
    if (opcao == 1) {
        if (carta1.populacao > carta2.populacao)
            printf("A cidade vencedora é: %s (Maior População)\n", carta1.nome);
        else
            printf("A cidade vencedora é: %s (Maior População)\n", carta2.nome);
    } else if (opcao == 2) {
        if (carta1.area > carta2.area)
            printf("A cidade vencedora é: %s (Maior Área)\n", carta1.nome);
        else
            printf("A cidade vencedora é: %s (Maior Área)\n", carta2.nome);
    } else if (opcao == 3) {
        if (carta1.pib > carta2.pib)
            printf("A cidade vencedora é: %s (Maior PIB)\n", carta1.nome);
        else
            printf("A cidade vencedora é: %s (Maior PIB)\n", carta2.nome);
    } else if (opcao == 4) {
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("A cidade vencedora é: %s (Mais Pontos Turísticos)\n", carta1.nome);
        else
            printf("A cidade vencedora é: %s (Mais Pontos Turísticos)\n", carta2.nome);
    } else if (opcao == 5) {
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("A cidade vencedora é: %s (Menor Densidade Populacional)\n", carta1.nome);
        else
            printf("A cidade vencedora é: %s (Menor Densidade Populacional)\n", carta2.nome);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
