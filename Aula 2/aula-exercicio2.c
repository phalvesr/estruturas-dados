// Reescrever o programa anterior fazendo alocação da memoria dinamicamente
#include <stdio.h>
#include <malloc.h>

#define alturaMaximaCentimetros 160

typedef struct {
  int idade;
  int alturaEmCentimetros;
} Pessoa;

int main() {
  
  Pessoa* ze = (Pessoa*) malloc(sizeof(Pessoa));
  ze->idade = 30;
  ze->alturaEmCentimetros = 159;

  printf("%i", ze->idade);
  printf("\n");
  printf("%i", ze->alturaEmCentimetros);

  return 0;
}
