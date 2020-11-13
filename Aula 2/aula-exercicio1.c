// Escrever um programa, em C e usando estrutura, capaz de imprimir se a
// altura de uma pessoas é acima ou abaixo de uma definida no programa.
#include <stdio.h>

#define alturaMaximaCm 160

typedef struct {
  int alturaCentimetros;
  int idade;
} Pessoa;

int main() {
  
  Pessoa jonas;
  jonas.idade = 23;
  jonas.alturaCentimetros = 155;

  if (jonas.alturaCentimetros > alturaMaximaCm) {
    printf("Acima da altura máxima");
  } else {
    printf("Altura Ok");
  }

  return 0;
}