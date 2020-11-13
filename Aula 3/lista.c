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
  
  ptr = integerToCharSequence(1234, ptr, 'l');

  for (int i = 0; i < 4; i++) {
    printf("%c", str[i]);
  }
  return 0;
}
