typedef struct {
  int itens[30];
  int length;
}List;

int listLength(List* list) {
  return list->length;
}

int getItemAt(List* list, int index) {
  return list->itens[index];
}