#include <stdio.h>

#define STB_DS_IMPLEMENTATION
#include "stb_ds.h"

void arrprint(const int* arr);

int main(int argc, char *argv[]) {
  int *odds = NULL;

  for (int i = 1; i < 20; i += 2) {
    arrput(odds, i);
    printf("capacity: %zu\n", arrcap(odds));
  }

  arrprint(odds);

  arrfree(odds);
}

void arrprint(const int* arr) {
  printf("[ ");
  for (int i = 0; i < arrlen(arr); i++) {
    printf("%d ", arr[i]);
  }
  printf("]");
}
