#include <stdio.h>

// -------------------------------
// Função recursiva para a Torre
// -------------------------------
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva
}

// -------------------------------
// Função recursiva para a Rainha
// -------------------------------
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// -------------------------------
// Função recursiva para o Bispo
// -------------------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return; // Caso base
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// -------------------------------
// Bispo também com loops aninhados
// -------------------------------
void moverBispoLoops(int casas) {
    for (int v = 1; v <= casas; v++) {   // movimento vertical
        for (int h = 1; h <= 1; h++) {   // movimento horizontal acoplado
            printf("Cima Direita\n");
        }
    }
}

// -------------------------------
// Movimento do Cavalo (corrigido):
// duas casas para BAIXO e uma para a ESQUERDA
// usando loops aninhados, continue e break
// -------------------------------
void moverCavalo() {
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    for (int v = 1; v <= casasBaixo + 1; v++) {
        if (v <= casasBaixo) {
            printf("Baixo\n");
            continue; // pula o loop interno até terminar o movimento vertical
        }

        // Quando termina de descer, faz o movimento horizontal
        for (int h = 1; h <= casasEsquerda; h++) {
            printf("Esquerda\n");
            if (h >= casasEsquerda) break; // encerra o loop interno explicitamente
        }
    }
}

// -------------------------------
// Função principal
// -------------------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo com recursividade
    printf("\nMovimento do Bispo (Recursividade):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo também com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casasBispo);

    // Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo com loops complexos
    printf("\n");
    moverCavalo();

    return 0;
}
