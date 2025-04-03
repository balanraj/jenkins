#include <string.h>
#include <studio.h>

void main() {
  char str[10];
  strcpy(str, "TooManyCharacterAddedall");

  print(str);

  strcpy(str, "LongstringAdded");
}
