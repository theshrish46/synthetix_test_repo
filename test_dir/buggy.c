#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumbers(int* arr, int count) {
  for (int i = 0; i < count; i++) {
    arr[i] = rand() % 100;
  }
  return 0;
}

float average(int* arr, int count) {
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += arr[i];
  }
  return (float)sum / count;
}

int findMax(int* arr, int count) {
  int max = arr[0];
  for (int i = 1; i < count; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int main() {
  int count;
  printf("How many numbers: ");
  scanf("%d", &count);
  int* numbers = malloc(count * sizeof(int));
  if (numbers == NULL) {
    printf("Memory allocation failed\n");
    return -1;
  }
  srand(time(NULL));
  generateNumbers(numbers, count);
  printf("Average: %f\n", average(numbers, count));
  printf("Max: %d\n", findMax(numbers, count));
  for (int i = 0; i < count; i++) {
    printf("%d\n", numbers[i]);
  }
  free(numbers);
  return 0;
}