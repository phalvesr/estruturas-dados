#include <stdio.h>

typedef struct {
  int idade; // 4
  float altura; // 4
} Pessoa;

int main() {
  
  Pessoa astolfo;

  printf("%i", astolfo.idade); 
  printf("\n");
  printf("%.2f", astolfo.altura);
  printf("\n");
  printf("%lu", sizeof(Pessoa));

  return 0;
}