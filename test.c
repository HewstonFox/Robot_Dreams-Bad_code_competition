#include <stdio.h>
#include <weird_rand.h>
#include <stdlib.h>

int main () {
  int n = 10;
  int* values = (int*)malloc(sizeof(int) * n);  

  for (int i = 0; i < n; i++) {
    int value = weird_rand();
    if (value <= 0) {
      printf("Expected %d to be grater than 0\n", value);
      continue;
    }
    if (value > 100) {
      printf("Expected %d to be less than 100\n", value);
      continue;
    }
    values[i] = value;
    printf("Test %d completed, result %d\n", i, value);
  }

  int curr = values[0];
  for (int i = 0; i < n; i++) {
    if (curr != values[i]) {
      curr = values[i];
      break;
    }
  }

  if (curr == values[0]) {
    printf("Expected to have different values for %d iterations, but only one result got: %d\n", n, curr);
  }

  printf("Test finised\n");

  free(values);
  
  return 0;
}

