#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_SIZE 10

void memory_leak() {
  char *leak = malloc(100);
  // Memory is not freed
}

void buffer_overflow() {
  char buffer[MAX_SIZE];
  for (int i = 0; i <= MAX_SIZE; i++) { // Off-by-one error
    buffer[i] = 'A';
  }
}

void null_pointer_deref() {
  char *ptr = NULL;
  printf("%c\n", ptr[0]); // Null dereference
}

void uninitialized_var() {
  int x;
  if (x > 0) { // 'x' is uninitialized
    printf("x is positive\n");
  }
}

void unused_var() {
  int unused = 42; // Unused variable
}

void strcpy_overflow() {
  char dest[5];
  strcpy(dest, "TooLongStringDetectedAll"); // Buffer overflow
}

int main() {
  memory_leak();
  buffer_overflow();
  null_pointer_deref();
  uninitialized_var();
  unused_var();
  strcpy_overflow();
  return 0;
}
