#include <string.h>

void breakLine() {
  printf("\n");
}
 
// A function that converts a 4 digits integer to a char sequence
char* integerToCharSequence(int integerValue, char* charSequence, char rForRightJustifiedAndLForLeftJustified) {
  
  char units, tens, hundreds, thousands;
  units = (integerValue % 10) + '0';
  tens = ((integerValue / 10) % 10) + '0';
  hundreds = ((integerValue / 100) % 10) + '0';
  thousands = ((integerValue / 1000) % 10) + '0';

  switch (rForRightJustifiedAndLForLeftJustified){
    case 'r':
    case 'R':
      charSequence[0] = thousands;
      charSequence[1] = hundreds;
      charSequence[2] = tens;
      charSequence[3] = units;
    break;

    case 'l':
    case 'L':
      charSequence[3] = thousands;
      charSequence[2] = hundreds;
      charSequence[1] = tens;
      charSequence[0] = units;
    break;

    default:
      charSequence[0] = thousands;
      charSequence[1] = hundreds;
      charSequence[2] = tens;
      charSequence[3] = units;
    break;
}
  return charSequence;
}
