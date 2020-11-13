void breakLine() {
  printf("\n");
}
// A function that converts a 4 digits integer to a char sequence
char* integerToCharSequence(int integerValue, char* charSequence) {
  
  char units, tens, hundreds, thousands;
  units = (integerValue % 10) + '0';
  tens = ((integerValue / 10) % 10) + '0';
  hundreds = ((integerValue / 100) % 10) + '0';
  thousands = ((integerValue / 1000) % 10) + '0';

  charSequence[3] = thousands;
  charSequence[2] = hundreds;
  charSequence[1] = tens;
  charSequence[0] = units;

  return charSequence;
}
