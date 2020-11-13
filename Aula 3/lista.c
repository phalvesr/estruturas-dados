#include <stdio.h>
#include <malloc.h>
#include "Lista.h"
#include "../utils.h"

int main() {
  
  List* l1 = (List*) malloc(sizeof(List));
  l1->itens[0] = 40;

  // printf("%i", listLength(l1));
  // breakLine();
  // printf("%i", getItemAt(l1, 0));

  char str[4];  char* ptr = &str[0];

  char* t = integerToCharSequence(1234, ptr);

  printf("%c", t[3]);
  printf("%c", t[2]);
  printf("%c", t[1]);
  printf("%c", t[0]);

  return 0;
}
