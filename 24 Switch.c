#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}

/*
A estrutura switch funciona como um menu.
É usada para simplificar o processo de seleção de uma entre várias opções possíveis

Cada case verifica um valor específico da variável opcao. Se o valor da variável corresponder a um dos casos, o código dentro desse case é executado.

O break é utilizado para sair do switch após a execução do código do case correspondente. Sem o break, o programa continuaria executando os casos seguintes.

Embora seja opcional, é uma boa prática incluir o default. Ele fornece um caminho alternativo caso nenhum dos valores especificados nos cases corresponda ao valor da variável de controle. 
*/

