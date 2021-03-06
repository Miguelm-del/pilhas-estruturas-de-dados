#include "./include/pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Pilha *inicio = NULL;
  Pilha2 *inicio2 = NULL;
  Pilha3 *inicio3 = NULL;
  int op;
  int cod, vol;
  int cont = 0;

  do {
    printf("\n| 1 - para inserir um elemento\n");
    printf("| 2 - para imprimir os elementos\n");
    printf("| 3 - para remover um elemento\n");
    printf("| 4 - para verificar se é palindromo\n");
    printf("| 0 - para sair\n");
    scanf("%d", &op);

    switch(op) {
      case 1:
        printf("Informe a quantidade: ");
        scanf("%d", &vol);

        // Alagoas
        inicio = push(inicio, vol);
        break;
      case 2:
        imprimir(inicio);
        break;
      case 3:
        printf("Informe o código: ");
        scanf("%d", &cod);

        printf("Informe o volume: ");
        scanf("%d", &vol);

        inicio = popSuperior(inicio, cod, vol);

        printf("\nOrigem: pilha 1\nCódigo: %d\nVolume: %d\n", cod, vol);
        break;
      case 0:
        printf("Fim das operações\n");
        break;
      default:
        if (op != 0) {
          printf("Opção inválida\n");
        }
        break;
    }
  } while(op != 0);

  return 0;
}
