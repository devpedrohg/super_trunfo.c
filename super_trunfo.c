#include <stdio.h>

// Estrutura que representa uma carta de país
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

// Função principal
int main() {
    struct Carta carta1 = {"Brasil", 211000000, 8515767.0, 2200.5, 75, 25.0};
    struct Carta carta2 = {"Japão", 126000000, 377975.0, 5065.2, 120, 334.5};

    int escolha;

    // Menu interativo
    printf("=== SUPER TRUNFO DOS PAISES ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando %s vs %s\n", carta1.nome, carta2.nome);

    // Estrutura switch para escolha do atributo
    switch (escolha) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.nome);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("Resultado: %s venceu (menor densidade)!\n", carta1.nome);
            else if (carta2.densidade < carta1.densidade)
                printf("Resultado: %s venceu (menor densidade)!\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}

