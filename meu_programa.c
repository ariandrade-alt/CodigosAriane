#include <stdio.h>

int main() {
    int desafio;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o desafio:\n");
    printf("1 - Comparação simples (if / if-else)\n");
    printf("2 - Múltiplos atributos (switch)\n");
    printf("3 - Dois atributos + ternário\n");
    printf("Digite o número do desafio: ");
    scanf("%d", &desafio);

    if (desafio == 1) {
        // ---------------- DESAFIO 1 ----------------
        int forca1, forca2;

        printf("\n=== DESAFIO 1 ===\n");
        printf("Digite a força da carta 1: ");
        scanf("%d", &forca1);
        printf("Digite a força da carta 2: ");
        scanf("%d", &forca2);

        if (forca1 > forca2) {
            printf("Carta 1 venceu! (Força %d contra %d)\n", forca1, forca2);
        } else if (forca1 < forca2) {
            printf("Carta 2 venceu! (Força %d contra %d)\n", forca1, forca2);
        } else {
            printf("Empate! Ambas têm força %d.\n", forca1);
        }

    } else if (desafio == 2) {
        // ---------------- DESAFIO 2 ----------------
        int forca1 = 80, velocidade1 = 70, inteligencia1 = 90;
        int forca2 = 75, velocidade2 = 85, inteligencia2 = 88;
        int opcao;

        printf("\n=== DESAFIO 2 ===\n");
        printf("Atributos disponíveis:\n");
        printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
        printf("Escolha o atributo: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (forca1 > forca2)
                    printf("Carta 1 venceu (Força %d vs %d)\n", forca1, forca2);
                else if (forca1 < forca2)
                    printf("Carta 2 venceu (Força %d vs %d)\n", forca1, forca2);
                else
                    printf("Empate em Força!\n");
                break;

            case 2:
                if (velocidade1 > velocidade2)
                    printf("Carta 1 venceu (Velocidade %d vs %d)\n", velocidade1, velocidade2);
                else if (velocidade1 < velocidade2)
                    printf("Carta 2 venceu (Velocidade %d vs %d)\n", velocidade1, velocidade2);
                else
                    printf("Empate em Velocidade!\n");
                break;

            case 3:
                if (inteligencia1 > inteligencia2)
                    printf("Carta 1 venceu (Inteligência %d vs %d)\n", inteligencia1, inteligencia2);
                else if (inteligencia1 < inteligencia2)
                    printf("Carta 2 venceu (Inteligência %d vs %d)\n", inteligencia1, inteligencia2);
                else
                    printf("Empate em Inteligência!\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } else if (desafio == 3) {
        // ---------------- DESAFIO 3 ----------------
        int forca1 = 80, velocidade1 = 70, inteligencia1 = 90;
        int forca2 = 75, velocidade2 = 85, inteligencia2 = 88;
        int escolha1, escolha2;
        int pontos1 = 0, pontos2 = 0;

        printf("\n=== DESAFIO 3 ===\n");
        printf("Atributos disponíveis:\n");
        printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");

        printf("Escolha o primeiro atributo: ");
        scanf("%d", &escolha1);
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        // Primeiro atributo
        switch (escolha1) {
            case 1:
                (forca1 > forca2) ? pontos1++ :
                (forca1 < forca2) ? pontos2++ : 0;
                break;
            case 2:
                (velocidade1 > velocidade2) ? pontos1++ :
                (velocidade1 < velocidade2) ? pontos2++ : 0;
                break;
            case 3:
                (inteligencia1 > inteligencia2) ? pontos1++ :
                (inteligencia1 < inteligencia2) ? pontos2++ : 0;
                break;
            default:
                printf("Atributo 1 inválido!\n");
        }

        // Segundo atributo
        switch (escolha2) {
            case 1:
                (forca1 > forca2) ? pontos1++ :
                (forca1 < forca2) ? pontos2++ : 0;
                break;
            case 2:
                (velocidade1 > velocidade2) ? pontos1++ :
                (velocidade1 < velocidade2) ? pontos2++ : 0;
                break;
            case 3:
                (inteligencia1 > inteligencia2) ? pontos1++ :
                (inteligencia1 < inteligencia2) ? pontos2++ : 0;
                break;
            default:
                printf("Atributo 2 inválido!\n");
        }

        printf("\nResultado final:\n");
        printf("Carta 1: %d ponto(s)\nCarta 2: %d ponto(s)\n", pontos1, pontos2);

        (pontos1 > pontos2) ? printf("Carta 1 venceu!\n") :
        (pontos1 < pontos2) ? printf("Carta 2 venceu!\n") :
        printf("Empate!\n");

    } else {
        printf("Desafio inválido!\n");
    }

    return 0;
}
